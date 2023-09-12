#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "rclcomm_class.h"
#include "joy_thread.h"
#include "status_receive_thread.h"
#include "parameter_process_thread.h"
#include "rov_structs.h"
#include <QMetaType>

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
    void update_test(int msg);
    void update_imu(ImuPCStruct msg);
    void update_thrusters(ThrustersClientStruct msg);
    void update_tracks(TracksPCStruct msg);
    void update_cabin_state(CabinState msg);
    void update_depth_meter(float msg);
    void update_altimeter(float msg);
    

private slots:

    void on_connect_server_pushButton_clicked();
    void on_led_on_pushButton_clicked();
    void on_led_off_pushButton_clicked();
    void on_servo_angle_add_pushButton_clicked();
    void on_servo_angle_sub_pushButton_clicked();

    void on_camera_on_pushButton_clicked();
    void on_camera_off_pushButton_clicked();
    void on_camera2_on_pushButton_clicked();
    void on_camera2_off_pushButton_clicked();
    void on_sonar_on_pushButton_clicked();
    void on_sonar_off_pushButton_clicked();

    void on_brightness_slider_sliderReleased();
    void on_servo_angle_slider_sliderReleased();

    //control set
    void on_target_dm_pushButton_clicked();
    void on_depth_hold_on_pushButton_clicked();
    void on_depth_hold_off_pushButton_clicked();
    void on_target_am_pushButton_clicked();
    void on_attitude_hold_on_pushButton_clicked();
    void on_attitude_hold_off_pushButton_clicked();
};
#endif // MAINWINDOW_H