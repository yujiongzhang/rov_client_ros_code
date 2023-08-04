#ifndef PARAMETER_PROCESS_THREAD_H
#define PARAMETER_PROCESS_THREAD_H

#include <QObject>
#include <QThread>
#include <rclcpp/rclcpp.hpp>
#include <QtDebug>

class parameter_process_node : public rclcpp::Node
{
private:
    //事件触发机制句柄   
    std::shared_ptr<rclcpp::SyncParametersClient> parameter_client;

public:
    // 构造函数,有一个参数为节点名称
    parameter_process_node(std::string name) : Node(name)
    {
        RCLCPP_INFO(this->get_logger(), "%s节点已经启动.", name.c_str());

        std::string target_node_name = "/test_node";
        parameter_client = std::make_shared<rclcpp::SyncParametersClient>(this,target_node_name);
        // 等待参数服务器状态
        if(!parameter_client->wait_for_service(std::chrono::seconds(1))) {
            RCLCPP_INFO(this->get_logger(), "Waiting for the parameter service to start...");
        }
        else{
            RCLCPP_INFO(this->get_logger(), "Start the parameter service successfully!");
        }
    
    }

    void led_turn_on();
    void led_turn_off();


};



class parameter_process_thread :public QObject
{
    Q_OBJECT
public:
    parameter_process_thread ();
    void working();

    std::shared_ptr<parameter_process_node> node;

private:

signals:

};


#endif /* PARAMETER_PROCESS_THREAD_H */
