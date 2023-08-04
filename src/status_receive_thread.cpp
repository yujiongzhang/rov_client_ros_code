#include "status_receive_thread.h"

status_receive_thread::status_receive_thread()
{
    node=std::make_shared<status_receive_node>("status_receive_node");
}

void status_receive_thread::run()
{
    qDebug()<<"status_receive_thread is running";
    /* 运行节点，并检测退出信号*/
    rclcpp::spin(node);
    rclcpp::shutdown();
}
