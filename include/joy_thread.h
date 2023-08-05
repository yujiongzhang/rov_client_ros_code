#ifndef JOY_THREAD_H
#define JOY_THREAD_H

#include <QObject>
#include <QThread>
#include <rclcpp/rclcpp.hpp>
#include <QtDebug>
#include "std_msgs/msg/int32.hpp"
#include "sensor_msgs/msg/joy.hpp"
#include "geometry_msgs/msg/twist.hpp"

#include "joy_linux.h"

class joy_node : public rclcpp::Node
{
private:
    // rclcpp::Subscription<sensor_msgs::msg::Joy>::SharedPtr _joy_subscription;
    rclcpp::Publisher<geometry_msgs::msg::Twist>::SharedPtr _Twist_publisher;
    // 声名定时器指针
    rclcpp::TimerBase::SharedPtr timer_;
    // 创建消息
    geometry_msgs::msg::Twist twist_msg;

    //
    int xbox_fd;
    xbox_map_t map;
    int len, type;
    int axis_value, button_value;
    int number_of_axis, number_of_buttons;

public:
    // 构造函数,有一个参数为节点名称
    joy_node(std::string name) : Node(name)
    {
        RCLCPP_INFO(this->get_logger(), "%s节点已经启动.", name.c_str());

        twist_msg.linear.x=0;

        memset(&map,0,sizeof(xbox_map_t));
        xbox_fd = xbox_open("/dev/input/js1");
        if(xbox_fd<0)
        {
            RCLCPP_INFO(this->get_logger(), "没找到手柄");
        }
        
        // _joy_subscription = this->create_subscription<sensor_msgs::msg::Joy>("joy", 10,std::bind(&joy_node::joy_recv_callback,this,std::placeholders::_1));
        _Twist_publisher = this->create_publisher<geometry_msgs::msg::Twist>("cmd_vel", 10);
        // 创建定时器，500ms为周期，定时发布
        timer_ = this->create_wall_timer(std::chrono::milliseconds(100), std::bind(&joy_node::timer_callback, this));

    }

    ~joy_node(){
        xbox_close(xbox_fd); 
    }

    void timer_callback()
    {

        len = xbox_map_read(xbox_fd, &map);
        if (len < 0)  
        {  
            RCLCPP_INFO(this->get_logger(), "手柄数据读取失败");
        }  
        
        twist_msg.linear.x = - map.ry * 100 /32767 ;
        twist_msg.linear.z = map.ly * 100 /32767;
        twist_msg.angular.z = map.rx * 180 /32767;
        twist_msg.angular.x = map.lx * 180 /32767;
        // 发布消息
        _Twist_publisher->publish(twist_msg);
        RCLCPP_INFO(this->get_logger(), "send twist_msg successfully");
    }

    // void joy_recv_callback(const sensor_msgs::msg::Joy::SharedPtr msg)
    // {
    //     twist_msg.linear.x = msg->axes[1];
    //     twist_msg.angular.z = msg->axes[0];
    //     _Twist_publisher->publish(twist_msg);
    // }

};



class joy_thread :public QThread
{
    Q_OBJECT
public:
    joy_thread();
    void run() override;
private:
    std::shared_ptr<joy_node> node;

};

#endif // RCLCOMM_H