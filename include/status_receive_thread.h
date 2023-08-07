#ifndef STATUS_RECEIVE_THREAD_H
#define STATUS_RECEIVE_THREAD_H

#include <QObject>
#include <QThread>
#include <QDebug>
#include <rclcpp/rclcpp.hpp>
#include <QtDebug>
#include "rov_structs.h"

#include "std_msgs/msg/int32.hpp"
#include "sensor_msgs/msg/imu.hpp"
#include "rov_interfaces/msg/thrusters.hpp"
#include "rov_interfaces/msg/tracks.hpp"
#include "rov_interfaces/msg/cabin_state.hpp"
#include <tf2/LinearMath/Quaternion.h>
#include <tf2/LinearMath/Matrix3x3.h>


class status_receive_node_connect_qt :public QObject
{
    Q_OBJECT

signals:
    void s_depth(int);
    void s_imu(ImuPCStruct);
    void s_thrusters(ThrustersClientStruct);
    void s_tracks(TracksPCStruct);
    void s_cabin_state(CabinState);

public:
    status_receive_node_connect_qt(){}

    void emit_depth(int msg){
        emit s_depth(msg);
    }

    void emit_imu(ImuPCStruct msg){
        emit s_imu(msg);
    }

    void emit_thrusters(ThrustersClientStruct msg){
        emit s_thrusters(msg);
    }

    void emit_tracks(TracksPCStruct msg){
        emit s_tracks(msg);
    }

    void emit_cabin_state(CabinState msg){
        emit s_cabin_state(msg);
    }
};


class status_receive_node : public rclcpp::Node
{
private:
    rclcpp::Subscription<std_msgs::msg::Int32>::SharedPtr _depth_subscription;//深度
    rclcpp::Subscription<std_msgs::msg::Int32>::SharedPtr _height_subscription;//高度
    rclcpp::Subscription<sensor_msgs::msg::Imu>::SharedPtr imu_subscription; //imu
    rclcpp::Subscription<rov_interfaces::msg::Thrusters>::SharedPtr thrusters_subscription;
    rclcpp::Subscription<rov_interfaces::msg::Tracks>::SharedPtr tracks_subscription;
    rclcpp::Subscription<rov_interfaces::msg::CabinState>::SharedPtr cabinstate_subscription;
    

public:
    status_receive_node_connect_qt *connectqt;

public:
    // 构造函数,有一个参数为节点名称
    status_receive_node(std::string name) : Node(name)
    {
        connectqt = new status_receive_node_connect_qt;
        RCLCPP_INFO(this->get_logger(), "%s节点已经启动.", name.c_str());
        _depth_subscription = this->create_subscription<std_msgs::msg::Int32>("ros2_qt_demo_publish", \
        10,std::bind(&status_receive_node::depth_recv_callback,this,std::placeholders::_1));

        _height_subscription = this->create_subscription<std_msgs::msg::Int32>("rov_height", \
        10,std::bind(&status_receive_node::height_recv_callback,this,std::placeholders::_1));

        imu_subscription = this->create_subscription<sensor_msgs::msg::Imu>("imu", \
        10,std::bind(&status_receive_node::imu_recv_callback,this,std::placeholders::_1));

        thrusters_subscription = this->create_subscription<rov_interfaces::msg::Thrusters>("thrusters", \
        10,std::bind(&status_receive_node::thrusters_recv_callback,this,std::placeholders::_1));

        tracks_subscription = this->create_subscription<rov_interfaces::msg::Tracks>("tracks", \
        10,std::bind(&status_receive_node::tracks_recv_callback,this,std::placeholders::_1));

        cabinstate_subscription = this->create_subscription<rov_interfaces::msg::CabinState>("cabin_state", \
        10,std::bind(&status_receive_node::cabin_state_recv_callback,this,std::placeholders::_1));

    }

    void depth_recv_callback(const std_msgs::msg::Int32::SharedPtr msg)
    {
        connectqt->emit_depth(msg->data);
    }

    void imu_recv_callback(const sensor_msgs::msg::Imu::SharedPtr msg)
    {
        qDebug()<<"receive imu msg";
        tf2::Quaternion quaternion(msg->orientation.x, msg->orientation.y, msg->orientation.z, msg->orientation.w);
        tf2::Matrix3x3 matrix(quaternion);
        ImuPCStruct imu_receive;
        matrix.getRPY(imu_receive.roll, imu_receive.pitch, imu_receive.yaw);
        connectqt->emit_imu(imu_receive);

    }


    void height_recv_callback(const std_msgs::msg::Int32::SharedPtr msg)
    {
        RCLCPP_INFO(this->get_logger(),"i am listen from height topic: %d",msg->data);
    }

    void thrusters_recv_callback(const rov_interfaces::msg::Thrusters::SharedPtr msg)
    {
        qDebug()<<"receive thrusters msg";
        ThrustersClientStruct thrusters_receive;
        thrusters_receive.thruster_ul = msg->upper_left.speed_rpm;
        thrusters_receive.thruster_ur = msg->upper_right.speed_rpm;
        thrusters_receive.thruster_ll = msg->lower_left.speed_rpm;
        thrusters_receive.thruster_lr = msg->lower_right.speed_rpm;
        thrusters_receive.thruster_l = msg->left.speed_rpm;
        thrusters_receive.thruster_r = msg->right.speed_rpm;
        connectqt->emit_thrusters(thrusters_receive);
    }
    //using rov_interfaces::msg::Tracks::SharedPtr = std::shared_ptr<class>
    void tracks_recv_callback(const rov_interfaces::msg::Tracks msg)
    {
        qDebug()<<"receive tracks msg";
        TracksPCStruct tracks_receive;
        tracks_receive.track_l = msg.track_speed[0];
        tracks_receive.track_r = msg.track_speed[1];
        connectqt->emit_tracks(tracks_receive);
    }

    void cabin_state_recv_callback(const rov_interfaces::msg::CabinState::SharedPtr msg)
    {
        qDebug()<<"receive cabin state msg";
        CabinState cabin_state_receive;
        cabin_state_receive.cabin_temperature = msg->cabin_temperature;
        cabin_state_receive.cabin_humidity = msg->cabin_humidity;
        cabin_state_receive.cabin_water_level = msg -> cabin_water_level;
        cabin_state_receive.cpu_temperature = msg -> cpu_temperature;
        connectqt->emit_cabin_state(cabin_state_receive);
    }

};


class status_receive_thread :public QThread
{
    Q_OBJECT
public:
    status_receive_thread();
    void run() override;

    std::shared_ptr<status_receive_node> node;

private:
    
signals:
    void emitTopicData(QString);
};




#endif // RCLCOMM_H