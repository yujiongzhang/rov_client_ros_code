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
