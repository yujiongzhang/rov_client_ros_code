#include "rclcomm_class.h"


rclcomm_class::rclcomm_class()
{
    node=std::make_shared<rclcomm_class_node>("ros2_qt_demo");

}
void rclcomm_class::run(){
    qDebug()<<"i am run";
    /* 运行节点，并检测退出信号*/
    rclcpp::spin(node);
    rclcpp::shutdown();
}


