#include "mainwindow.h"
#include "ui_mainwindow.h"


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{

    qRegisterMetaType<CabinState>("CabinState");//跨线程的信号和槽的参数传递中,参数的类型是自定义的类型
    qRegisterMetaType<ThrustersClientStruct>("ThrustersClientStruct");//跨线程的信号和槽的参数传递中,参数的类型是自定义的类型
    qRegisterMetaType<TracksPCStruct>("TracksPCStruct");//跨线程的信号和槽的参数传递中,参数的类型是自定义的类型
    qRegisterMetaType<ImuPCStruct>("ImuPCStruct");//跨线程的信号和槽的参数传递中,参数的类型是自定义的类型

    ui->setupUi(this);

    int argc=0;
    char **argv=NULL;
    rclcpp::init(argc, argv);

    // commNode=new rclcomm_class();
    // commNode -> start();

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

    // connect(joyNode->node->connectqt,          &joy_node_connect_qt::s_rov_behaviour,          this, &MainWindow::update_test);
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

    ui->camera1->set_default_image(QImage(":/picture/camera1.jpg"));
    ui->camera2->set_default_image(QImage(":/picture/camera3.jpg"));

    ui->tubiao_label->setPixmap(QPixmap::fromImage(QImage(":/picture/tubiao.png")).scaled(ui->tubiao_label->size(), Qt::KeepAspectRatio, Qt::SmoothTransformation));

    ui->camera1->set_camera_source("PC_Camera");
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

void MainWindow::on_led_off_pushButton_clicked()
{
    led_on = 0;
    ui->brightness_label->setText("0");
    parameterProcessNode->node->led_turn_off();
    ui->led_on_pushButton->setEnabled(true);
    ui->led_off_pushButton->setEnabled(false);
}
//--------------------------------------------------------
//-------------camera --------------------------------------
void MainWindow::on_camera_on_pushButton_clicked()
{
    ui->camera1->camera_open();
}
void MainWindow::on_camera_off_pushButton_clicked()
{
    ui->camera1->camera_close();
}
void MainWindow::on_camera2_on_pushButton_clicked()
{
    ui->camera2->camera_open();
}
void MainWindow::on_camera2_off_pushButton_clicked()
{
    ui->camera2->camera_close();
}
//-------------camera --------------------------------------
//------------------------------------------------------------
//-------------push Button-----------------------------------
void MainWindow::on_connect_server_pushButton_clicked()
{
    int ret = 0;
    ret = parameterProcessNode->connect_server();
}

void MainWindow::on_led_on_pushButton_clicked()
{
    led_on = 1;
    ui->brightness_label->setText(QString::number(ui->brightness_slider->value()));
    parameterProcessNode->node->led_turn_on();
    ui->led_on_pushButton->setEnabled(false);
    ui->led_off_pushButton->setEnabled(true);
}


void MainWindow::on_brightness_slider_sliderReleased()
{
    if(led_on){
        ui->brightness_label->setText(QString::number(ui->brightness_slider->value()));
    }
}


