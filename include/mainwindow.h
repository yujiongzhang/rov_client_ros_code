#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "rclcomm_class.h"
#include "joy_thread.h"
#include "status_receive_thread.h"
#include "parameter_process_thread.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    rclcomm_class *commNode;
    joy_thread *joyNode;
    status_receive_thread *statusReceiveNode;
    parameter_process_thread *parameterProcessNode;

private:
    Ui::MainWindow *ui;

    int led_on = 0;


    //初始化ui上的一些值
    void uiInit();

public slots:
    void onRecvData(QString);
    void update_depth(int);

private slots:
    void on_pushButton_clicked();
    void on_joy_pushButton_clicked();
    void on_led_on_pushButton_clicked();
    void on_led_off_pushButton_clicked();

    void on_camera_on_pushButton_clicked();
    void on_camera_off_pushButton_clicked();
    void on_camera2_on_pushButton_clicked();
    void on_camera2_off_pushButton_clicked();

    void on_brightness_slider_sliderReleased();
};
#endif // MAINWINDOW_H