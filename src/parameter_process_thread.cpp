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


void parameter_process_node::led_turn_on()
{
    // 修改节点的参数值
    std::vector<rclcpp::Parameter> params;
    params.push_back(rclcpp::Parameter("led_switch", 1));
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
    params.push_back(rclcpp::Parameter("led_switch", 0));
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
