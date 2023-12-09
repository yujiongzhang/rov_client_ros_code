#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{

    qRegisterMetaType<CabinState>("CabinState");//跨线程的信号和槽的参数传递中,参数的类型是自定义的类型
    qRegisterMetaType<ThrustersClientStruct>("ThrustersClientStruct");//跨线程的信号和槽的参数传递中,参数的类型是自定义的类型
    qRegisterMetaType<TracksPCStruct>("TracksPCStruct");//跨线程的信号和槽的参数传递中,参数的类型是自定义的类型
    qRegisterMetaType<ImuPCStruct>("ImuPCStruct");//跨线程的信号和槽的参数传递中,参数的类型是自定义的类型

    ui->setupUi(this);




    joyNode = new joy_thread();
    statusReceiveNode = new status_receive_thread();
    

    joyNode->start();
    statusReceiveNode->start();


    QThread* parameterProcessNodeThread = new QThread;
    parameterProcessNode = new parameter_process_thread;
    parameterProcessNode -> moveToThread(parameterProcessNodeThread);
    parameterProcessNodeThread->start();

    uiInit();

    connect(statusReceiveNode->node->connectqt,&status_receive_node_connect_qt::s_depth_meter,this,&MainWindow::update_depth_meter);
    connect(statusReceiveNode->node->connectqt,&status_receive_node_connect_qt::s_altimeter,this,&MainWindow::update_altimeter);
    connect(statusReceiveNode->node->connectqt,&status_receive_node_connect_qt::s_imu,this,&MainWindow::update_imu);
    connect(statusReceiveNode->node->connectqt,&status_receive_node_connect_qt::s_thrusters,this,&MainWindow::update_thrusters);
    connect(statusReceiveNode->node->connectqt,&status_receive_node_connect_qt::s_tracks,this,&MainWindow::update_tracks);
    connect(statusReceiveNode->node->connectqt,&status_receive_node_connect_qt::s_cabin_state,this,&MainWindow::update_cabin_state);


    connect(joyNode->node->connectqt,&joy_node_connect_qt::s_rov_behaviour,parameterProcessNode,&parameter_process_thread::set_rov_behaviour);


    // QImage img;
    // img.load(":/picture/camera2.jpg");
    // ui->label_3->setPixmap(QPixmap::fromImage(img).scaled(ui->label_3->size(), Qt::KeepAspectRatio, Qt::SmoothTransformation));
}

MainWindow::~MainWindow()
{
    delete ui;
}



void MainWindow::uiInit()
{
    ui->brightness_label->setText("0");
    ui->servo_angle_label->setText(QString::number(ui->servo_angle_slider->value()));
    ui->target_am_lineEdit->setText("0");
    ui->target_dm_lineEdit->setText("0");

    ui->camera1->set_default_image(QImage(":/picture/camera1.jpg"));
    ui->camera2->set_default_image(QImage(":/picture/camera3.jpg"));
    ui->sonar->set_default_picture(QImage(":/picture/sonar.png"));

    //---模型形态---------
    ui->openGLWidget->set_viewat(QVector3D(0.0f, -1.3f, 0.3f), QVector3D(0.0f,0.0f,0.0f), QVector3D(0.0f,0.0f,1.0f));
    ui->openGLWidget_yaw->set_viewat(QVector3D(0.0f, 0.0f, 1.5f), QVector3D(0.0f,0.0f,0.0f), QVector3D(0.0f,1.0f,0.0f));

    ui->tubiao_label->setPixmap(QPixmap::fromImage(QImage(":/picture/tubiao.png")).scaled(ui->tubiao_label->size(), Qt::KeepAspectRatio, Qt::SmoothTransformation));

    ui->camera1->set_camera_source("rtsp://192.168.0.168:8554/0");
    ui->camera2->set_camera_source("rtsp://192.168.0.88:554/1");


}

void MainWindow::update_test(int msg)
{
    qDebug()<< "int is: "<<msg;
}

void MainWindow::update_imu(ImuPCStruct msg)
{
    ui->yaw_label->setText(QString::number(msg.yaw));
    ui->pitch_label->setText(QString::number(msg.pitch));
    ui->rol_label->setText(QString::number(msg.roll));
    //调整ROV姿态
    ui->openGLWidget->drawShape(msg.pitch, msg.roll, 0);
    ui->openGLWidget_yaw->drawShape(0, 0, msg.yaw);
}

void MainWindow::update_thrusters(ThrustersClientStruct msg)
{
    ui->thr_ul_label->setText(QString::number(msg.thruster_ul));
    ui->thr_ur_label->setText(QString::number(msg.thruster_ur));
    ui->thr_ll_label->setText(QString::number(msg.thruster_ll));
    ui->thr_lr_label->setText(QString::number(msg.thruster_lr));
    ui->thr_l_label->setText(QString::number(msg.thruster_l));
    ui->thr_r_label->setText(QString::number(msg.thruster_r));
}

void MainWindow::update_tracks(TracksPCStruct msg)
{
    ui->tra_l_label->setText(QString::number(msg.track_l));
    ui->tra_r_label->setText(QString::number(msg.track_r));
}

void MainWindow::update_cabin_state(CabinState msg)
{
    ui->humidity_label->setText(QString::number(msg.cabin_humidity));
    ui->temperature_label->setText(QString::number(msg.cabin_temperature));
    ui->cpu_temperature_label->setText(QString::number(msg.cpu_temperature));
    ui->water_level_label->setText(QString::number(msg.cabin_water_level));
}

void MainWindow::update_depth_meter(float msg)
{
    ui->depth_label->setText(QString::number(msg));
}

void MainWindow::update_altimeter(float msg)
{
    ui->height_label->setText(QString::number(msg));
}


//----------------------------------------------------------
//-------------camera --------------------------------------
void MainWindow::on_camera_on_pushButton_clicked()
{
    if(isPingable("192.168.0.168"))
    {
        ui->camera1->camera_open();
    }
}
void MainWindow::on_camera_off_pushButton_clicked()
{
    ui->camera1->camera_close();
}
void MainWindow::on_camera2_on_pushButton_clicked()
{
    if(isPingable("192.168.0.88"))
    {
        ui->camera2->camera_open();
    }
}
void MainWindow::on_camera2_off_pushButton_clicked()
{
    ui->camera2->camera_close();
}
void MainWindow::on_sonar_on_pushButton_clicked()
{
    ui->sonar->start_sonar();
    ui->sonar_on_pushButton->setEnabled(false);
    ui->sonar_off_pushButton->setEnabled(true);
}
void MainWindow::on_sonar_off_pushButton_clicked()
{
    ui->sonar->stop_sonar();
    ui->sonar_on_pushButton->setEnabled(true);
    ui->sonar_off_pushButton->setEnabled(false);
}
//-------------camera --------------------------------------
//------------------------------------------------------------
//-------------push Button-----------------------------------
void MainWindow::on_connect_server_pushButton_clicked()
{
    int ret = 0;
    ret = parameterProcessNode->connect_server();
    if(ret == 1)
    {
        QMessageBox::information(this,"参数服务器连接成功","参数服务器连接成功");
    }
}

void MainWindow::on_led_on_pushButton_clicked()
{
    led_on = 1;
    ui->brightness_label->setText(QString::number(ui->brightness_slider->value()));
    parameterProcessNode->node->led_turn_on(ui->brightness_slider->value());
    ui->led_on_pushButton->setEnabled(false);
    ui->led_off_pushButton->setEnabled(true);
}

void MainWindow::on_led_off_pushButton_clicked()
{
    led_on = 0;
    ui->brightness_label->setText("0");
    parameterProcessNode->node->led_turn_off();
    ui->led_on_pushButton->setEnabled(true);
    ui->led_off_pushButton->setEnabled(false);
}

void MainWindow::on_servo_angle_add_pushButton_clicked()
{
    ui->servo_angle_slider->setValue(ui->servo_angle_slider->value()+1);
    ui->servo_angle_label->setText(QString::number(ui->servo_angle_slider->value()));
    parameterProcessNode->node->servo_angle_set(ui->servo_angle_slider->value());
}

void MainWindow::on_servo_angle_sub_pushButton_clicked()
{
    ui->servo_angle_slider->setValue(ui->servo_angle_slider->value()-1);
    ui->servo_angle_label->setText(QString::number(ui->servo_angle_slider->value()));
    parameterProcessNode->node->servo_angle_set(ui->servo_angle_slider->value());
}

void MainWindow::on_brightness_slider_sliderReleased()
{
    if(led_on){
        ui->brightness_label->setText(QString::number(ui->brightness_slider->value()));
        parameterProcessNode->node->led_turn_on(ui->brightness_slider->value());
    }
}

//-------------------------------------------------------------------------------------
//--------ROV CONTROL------------------------------------------------------------------
void MainWindow::on_servo_angle_slider_sliderReleased()
{
    ui->servo_angle_label->setText(QString::number(ui->servo_angle_slider->value()));
    parameterProcessNode->node->servo_angle_set(ui->servo_angle_slider->value());
}

void MainWindow::on_target_dm_pushButton_clicked()
{
    parameterProcessNode->node->target_dm_set(ui->target_dm_lineEdit->text().toFloat());
}

void MainWindow::on_depth_hold_on_pushButton_clicked()
{
}

void MainWindow::on_depth_hold_off_pushButton_clicked()
{
}

void MainWindow::on_target_am_pushButton_clicked()
{
    parameterProcessNode->node->target_am_set(ui->target_am_lineEdit->text().toFloat());
}

void MainWindow::on_attitude_hold_on_pushButton_clicked()
{
}

void MainWindow::on_attitude_hold_off_pushButton_clicked()
{
}

//--------ROV CONTROL------------------------------------------------------------------
//-------------------------------------------------------------------------------------