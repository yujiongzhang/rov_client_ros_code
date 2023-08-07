/** 
 *****************************Copyright (c) 2023  ZJU****************************
 * @file      : rclcomm_class.h
 * @brief     : 一个用来测试的节点
 * @history   :
 *  Version     Date            Author          Note
 *  V1.0.0    2023-7-26         zyj           1. <note>
 *******************************************************************************
 * @verbatim :
 *==============================================================================
 *                                                                              
 *                                                                              
 *==============================================================================
 * @endverbatim :
 *****************************Copyright (c) 2023  ZJU****************************
 */
#ifndef RCLCOMM_CLASS_H
#define RCLCOMM_CLASH_H

#include <QObject>
#include <QThread>
#include <rclcpp/rclcpp.hpp>
#include <QtDebug>
#include "std_msgs/msg/int32.hpp"
#include "rov_interfaces/msg/tracks.hpp"
#include "rov_interfaces/msg/cabin_state.hpp"
#include "rov_interfaces/msg/thrusters.hpp"

class rclcomm_class_node : public rclcpp::Node
{
private:
    rclcpp::Publisher<std_msgs::msg::Int32>::SharedPtr _publisher;
    rclcpp::Publisher<rov_interfaces::msg::Tracks>::SharedPtr tracks_publisher;
    rclcpp::Publisher<rov_interfaces::msg::CabinState>::SharedPtr cabin_state_publisher;
    rclcpp::Publisher<rov_interfaces::msg::Thrusters>::SharedPtr thrusters_publisher;
    // rclcpp::Subscription<std_msgs::msg::Int32>::SharedPtr _subscription;
    // rclcpp::Subscription<rov_interfaces::msg::Tracks>::SharedPtr tracks_subscription; //测试自定义消息类型

    // 声名定时器指针
    rclcpp::TimerBase::SharedPtr timer_;

    // 创建消息
    std_msgs::msg::Int32 pub_msg;
    rov_interfaces::msg::Tracks tracks_msg;
    rov_interfaces::msg::CabinState cabin_state_msg;
    rov_interfaces::msg::Thrusters thrusters_msg;


public:
    // 构造函数,有一个参数为节点名称
    rclcomm_class_node(std::string name) : Node(name)
    {
        RCLCPP_INFO(this->get_logger(), "%s节点已经启动.", name.c_str());

        pub_msg.data=0;

        tracks_msg.track_speed[0] = 300;
        tracks_msg.track_speed[1] = 200;

        cabin_state_msg.cabin_temperature = 10;
        cabin_state_msg.cabin_humidity = 20;
        cabin_state_msg.cabin_water_level = 30;
        cabin_state_msg.cpu_temperature = 0;
        
        thrusters_msg.upper_left.speed_rpm = 11;
        thrusters_msg.upper_right.speed_rpm = 22;

        _publisher = this->create_publisher<std_msgs::msg::Int32>("ros2_qt_demo_publish", 10);
        tracks_publisher = this->create_publisher<rov_interfaces::msg::Tracks>("tracks", 10);

        cabin_state_publisher = this->create_publisher<rov_interfaces::msg::CabinState>("cabin_state", 10);
        thrusters_publisher = this->create_publisher<rov_interfaces::msg::Thrusters>("thrusters", 10);

        // _subscription = this->create_subscription<std_msgs::msg::Int32>("ros2_qt_demo_publish", 10,std::bind(&rclcomm_class_node::recv_callback,this,std::placeholders::_1));
        // tracks_subscription = this->create_subscription<rov_interfaces::msg::Tracks>("tracks",10,std::bind(&rclcomm_class_node::recv_callback,this,std::placeholders::_1));
        
        
        // 创建定时器，500ms为周期，定时发布
        timer_ = this->create_wall_timer(std::chrono::milliseconds(1000), std::bind(&rclcomm_class_node::timer_callback, this));
    }

    void timer_callback()
    {
        // 日志打印
        RCLCPP_INFO(this->get_logger(), "Publishing: '%d'", pub_msg.data);
        // 发布消息
        _publisher->publish(pub_msg);

        tracks_publisher->publish(tracks_msg);

        cabin_state_publisher->publish(cabin_state_msg);

        thrusters_publisher->publish(thrusters_msg);

        pub_msg.data++;
    }

    void recv_callback(const rov_interfaces::msg::Tracks _msg)
    {
        RCLCPP_INFO(this->get_logger(), "Sublishing: speed is '%d'", _msg.track_speed[0]);
    }

};



class rclcomm_class :public QThread
{
    Q_OBJECT
public:
    rclcomm_class();
    void run() override;
private:
    std::shared_ptr<rclcomm_class_node> node;
signals:
    void emitTopicData(QString);
};

#endif // RCLCOMM_H