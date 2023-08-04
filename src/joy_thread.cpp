#include "joy_thread.h"

joy_thread::joy_thread()
{
    node=std::make_shared<joy_node>("joy_process_node");
}
void joy_thread::run(){
    qDebug()<<"joy_thread is running";
    /* 运行节点，并检测退出信号*/
    rclcpp::spin(node);
    rclcpp::shutdown();
}


