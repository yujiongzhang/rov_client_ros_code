#ifndef PARAMETER_PROCESS_THREAD_H
#define PARAMETER_PROCESS_THREAD_H

#include <QObject>
#include <QThread>
#include <rclcpp/rclcpp.hpp>
#include <QtDebug>
#include "std_msgs/msg/int32.hpp"
#include "rcl_interfaces/msg/set_parameters_result.hpp"

class parameter_process_node : public rclcpp::Node
{
private:
    //事件触发机制句柄   
    std::shared_ptr<rclcpp::SyncParametersClient> parameter_client;
    std::shared_ptr<rclcpp::SyncParametersClient> parameter_client_controller;

public:
    // 构造函数,有一个参数为节点名称
    parameter_process_node(std::string name) : Node(name)
    {
        RCLCPP_INFO(this->get_logger(), "%s节点已经启动.", name.c_str());

        std::string target_node_name = "/linker_node";
        parameter_client = std::make_shared<rclcpp::SyncParametersClient>(this,target_node_name);
        // 等待参数服务器状态
        if(!parameter_client->wait_for_service(std::chrono::seconds(1))) {
            RCLCPP_INFO(this->get_logger(), "Waiting for the parameter service to start...");
        }
        else{
            RCLCPP_INFO(this->get_logger(), "Start the parameter service successfully!");
        }

        std::string target_node_name_controller = "/track_rov_pid_controller";
        parameter_client_controller = std::make_shared<rclcpp::SyncParametersClient>(this,target_node_name_controller);
        //等待参数服务器状态
        if(!parameter_client_controller->wait_for_service(std::chrono::seconds(1))) {
            RCLCPP_INFO(this->get_logger(), "Waiting for the parameter service to start...");
        }
        else{
            RCLCPP_INFO(this->get_logger(), "Start the parameter service successfully!");
        }
    }

    void led_turn_on();
    void led_turn_off();
    void node_set_rov_behaviour(int msg);

};



class parameter_process_thread :public QObject
{
    Q_OBJECT
public:
    parameter_process_thread ();
    void working();

    std::shared_ptr<parameter_process_node> node;

    void set_rov_behaviour(int msg);

private:

signals:

};


#endif /* PARAMETER_PROCESS_THREAD_H */
