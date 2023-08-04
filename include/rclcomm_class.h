#ifndef RCLCOMM_CLASS_H
#define RCLCOMM_CLASH_H

#include <QObject>
#include <QThread>
#include <rclcpp/rclcpp.hpp>
#include <QtDebug>
#include "std_msgs/msg/int32.hpp"

class rclcomm_class_node : public rclcpp::Node
{
private:
    rclcpp::Publisher<std_msgs::msg::Int32>::SharedPtr _publisher;
    rclcpp::Subscription<std_msgs::msg::Int32>::SharedPtr _subscription;
    // 声名定时器指针
    rclcpp::TimerBase::SharedPtr timer_;

    // 创建消息
    std_msgs::msg::Int32 pub_msg;

public:
    // 构造函数,有一个参数为节点名称
    rclcomm_class_node(std::string name) : Node(name)
    {
        RCLCPP_INFO(this->get_logger(), "%s节点已经启动.", name.c_str());

        pub_msg.data=0;
        
        _publisher = this->create_publisher<std_msgs::msg::Int32>("ros2_qt_demo_publish", 10);
        // _subscription = this->create_subscription<std_msgs::msg::Int32>("ros2_qt_demo_publish", 10,std::bind(&rclcomm_class_node::recv_callback,this,std::placeholders::_1));
        // 创建定时器，500ms为周期，定时发布
        timer_ = this->create_wall_timer(std::chrono::milliseconds(1000), std::bind(&rclcomm_class_node::timer_callback, this));
    }


    void timer_callback()
    {
        // 日志打印
        RCLCPP_INFO(this->get_logger(), "Publishing: '%d'", pub_msg.data);
        // 发布消息
        _publisher->publish(pub_msg);
        pub_msg.data++;
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