#ifndef STATUS_RECEIVE_THREAD_H
#define STATUS_RECEIVE_THREAD_H

#include <QObject>
#include <QThread>
#include <QDebug>
#include <rclcpp/rclcpp.hpp>
#include <QtDebug>
#include "std_msgs/msg/int32.hpp"

class status_receive_node_connect_qt :public QObject
{
    Q_OBJECT

signals:
    void s_depth(int);
public:
    status_receive_node_connect_qt(){}
    void emit_depth(int msg){
        emit s_depth(msg);
    }
};


class status_receive_node : public rclcpp::Node
{
private:
    rclcpp::Subscription<std_msgs::msg::Int32>::SharedPtr _depth_subscription;//深度
    rclcpp::Subscription<std_msgs::msg::Int32>::SharedPtr _height_subscription;//高度

public:
    status_receive_node_connect_qt *connectqt;

public:
    // 构造函数,有一个参数为节点名称
    status_receive_node(std::string name) : Node(name)
    {
        connectqt = new status_receive_node_connect_qt;
        RCLCPP_INFO(this->get_logger(), "%s节点已经启动.", name.c_str());
        _depth_subscription = this->create_subscription<std_msgs::msg::Int32>("ros2_qt_demo_publish", 10,std::bind(&status_receive_node::depth_recv_callback,this,std::placeholders::_1));
        _height_subscription = this->create_subscription<std_msgs::msg::Int32>("rov_height", 10,std::bind(&status_receive_node::height_recv_callback,this,std::placeholders::_1));
    }

    void depth_recv_callback(const std_msgs::msg::Int32::SharedPtr msg)
    {
        qDebug()<<"receive depth"<< msg->data;
        connectqt->emit_depth(msg->data);
    }

    void height_recv_callback(const std_msgs::msg::Int32::SharedPtr msg)
    {
        RCLCPP_INFO(this->get_logger(),"i am listen from height topic: %d",msg->data);
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