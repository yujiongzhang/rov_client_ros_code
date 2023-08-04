#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    int argc=0;
    char **argv=NULL;
    rclcpp::init(argc, argv);

    commNode=new rclcomm_class();
    joyNode = new joy_thread();
    statusReceiveNode = new status_receive_thread();
    

    joyNode->start();
    statusReceiveNode->start();


    QThread* parameterProcessNodeThread = new QThread;
    parameterProcessNode = new parameter_process_thread;
    parameterProcessNode -> moveToThread(parameterProcessNodeThread);
    parameterProcessNodeThread->start();

    uiInit();


    connect(commNode,SIGNAL(emitTopicData(QString)),this,SLOT(onRecvData(QString)));
    connect(statusReceiveNode->node->connectqt,&status_receive_node_connect_qt::s_depth,this,&MainWindow::update_depth);


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



void MainWindow::onRecvData(QString msg){
    ui->label_2->setText(msg);
}


void MainWindow::update_depth(int msg)
{
    qDebug()<<"update depth";
    ui->depth_label->setText(QString::number(msg));
}


void MainWindow::on_pushButton_clicked()
{
    commNode->start();
    
}


void MainWindow::on_joy_pushButton_clicked()
{
    
}

void MainWindow::on_led_off_pushButton_clicked()
{
    led_on = 0;
    ui->brightness_label->setText("0");
    parameterProcessNode->node->led_turn_off();
    ui->led_on_pushButton->setEnabled(true);
    ui->led_off_pushButton->setEnabled(false);
}

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


