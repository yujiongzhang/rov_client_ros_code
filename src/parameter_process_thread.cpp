#include "parameter_process_thread.h"


parameter_process_thread::parameter_process_thread()
{
    node=std::make_shared<parameter_process_node>("parameter_process_node");
}

void parameter_process_thread::working()
{
    /* 运行节点，并检测退出信号*/
    rclcpp::spin(node);
    rclcpp::shutdown();
}

void parameter_process_thread::set_rov_behaviour(int msg)
{
    // qDebug()<<"set_rov_behaviour"<<msg;
    node->node_set_rov_behaviour(msg);
}

int parameter_process_thread::connect_server()
{
    int ret = 0;
    ret = node->node_connect_server();
    return ret;
}

void parameter_process_node::led_turn_on()
{
    // 修改节点的参数值
    std::vector<rclcpp::Parameter> params;
    params.push_back(rclcpp::Parameter("led_brightness", 50));
    auto result = parameter_client->set_parameters_atomically(params);
    if(result.successful)
    {
        RCLCPP_INFO(this->get_logger(), "Parameter set successfully");
    }
    else
    {
        RCLCPP_ERROR(this->get_logger(), "Failed to set parameter");
    }
}

void parameter_process_node::led_turn_off()
{
    // 修改节点的参数值
    std::vector<rclcpp::Parameter> params;
    params.push_back(rclcpp::Parameter("led_brightness", 0));
    auto result = parameter_client->set_parameters_atomically(params);
    if(result.successful)
    {
        RCLCPP_INFO(this->get_logger(), "Parameter set successfully");
    }
    else
    {
        RCLCPP_ERROR(this->get_logger(), "Failed to set parameter");
    }
}

void parameter_process_node::node_set_rov_behaviour(int msg)
{
    // qDebug()<<"node set rov behaviour"<<msg;
    std::vector<rclcpp::Parameter> params;
    rcl_interfaces::msg::SetParametersResult result;
    switch (msg)
    {
    case 0:
        params.push_back(rclcpp::Parameter("rov_behaviour", 0));
        result = parameter_client_controller->set_parameters_atomically(params);
        if(result.successful)
        {
            RCLCPP_INFO(this->get_logger(), "Parameter set successfully");
        }
        else
        {
            RCLCPP_ERROR(this->get_logger(), "Failed to set parameter");
        }
        break;
    case 1:
        params.push_back(rclcpp::Parameter("rov_behaviour", 1));
        result = parameter_client_controller->set_parameters_atomically(params);
        if(result.successful)
        {
            RCLCPP_INFO(this->get_logger(), "Parameter set successfully");
        }
        else
        {
            RCLCPP_ERROR(this->get_logger(), "Failed to set parameter");
        }
        break;
    case 2:
        params.push_back(rclcpp::Parameter("rov_behaviour", 2));
        result = parameter_client_controller->set_parameters_atomically(params);
        if(result.successful)
        {
            RCLCPP_INFO(this->get_logger(), "Parameter set successfully");
        }
        else
        {
            RCLCPP_ERROR(this->get_logger(), "Failed to set parameter");
        }
        break;
    case 3:
        params.push_back(rclcpp::Parameter("rov_behaviour", 3));
        result = parameter_client_controller->set_parameters_atomically(params);
        if(result.successful)
        {
            RCLCPP_INFO(this->get_logger(), "Parameter set successfully");
        }
        else
        {
            RCLCPP_ERROR(this->get_logger(), "Failed to set parameter");
        }
        break;
    case 4:
        params.push_back(rclcpp::Parameter("rov_behaviour", 4));
        result = parameter_client_controller->set_parameters_atomically(params);
        if(result.successful)
        {
            RCLCPP_INFO(this->get_logger(), "Parameter set successfully");
        }
        else
        {
            RCLCPP_ERROR(this->get_logger(), "Failed to set parameter");
        }
        break;
    case 5:
        params.push_back(rclcpp::Parameter("rov_behaviour", 5));
        result = parameter_client_controller->set_parameters_atomically(params);
        if(result.successful)
        {
            RCLCPP_INFO(this->get_logger(), "Parameter set successfully");
        }
        else
        {
            RCLCPP_ERROR(this->get_logger(), "Failed to set parameter");
        }
        break;
    case 6:
        params.push_back(rclcpp::Parameter("rov_behaviour", 6));
        result = parameter_client_controller->set_parameters_atomically(params);
        if(result.successful)
        {
            RCLCPP_INFO(this->get_logger(), "Parameter set successfully");
        }
        else
        {
            RCLCPP_ERROR(this->get_logger(), "Failed to set parameter");
        }
        break;
    case 7:
        params.push_back(rclcpp::Parameter("rov_behaviour", 7));
        result = parameter_client_controller->set_parameters_atomically(params);
        if(result.successful)
        {
            RCLCPP_INFO(this->get_logger(), "Parameter set successfully");
        }
        else
        {
            RCLCPP_ERROR(this->get_logger(), "Failed to set parameter");
        }
        break;
    default:
        break;
    }
}

int parameter_process_node::node_connect_server()
{
    int ret,ret1,ret2;
    ret = 0;
    // 等待参数服务器状态
    if(!parameter_client->wait_for_service(std::chrono::seconds(1))) {
        RCLCPP_INFO(this->get_logger(), "Waiting for the parameter service to start...");
        ret1 = 0;
    }
    else{
        RCLCPP_INFO(this->get_logger(), "Start the parameter service successfully!");
        ret1 = 1;
    }

    //等待参数服务器状态
    if(!parameter_client_controller->wait_for_service(std::chrono::seconds(1))) {
        RCLCPP_INFO(this->get_logger(), "Waiting for the parameter service to start...");
        ret2 = 0;
    }
    else{
        RCLCPP_INFO(this->get_logger(), "Start the parameter service successfully!");
        ret2 = 1;
    }
    ret = ret1 & ret2;
    return ret;
}
