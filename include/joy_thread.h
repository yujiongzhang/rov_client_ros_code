#ifndef JOY_THREAD_H
#define JOY_THREAD_H

#include <QObject>
#include <QThread>
#include <rclcpp/rclcpp.hpp>
#include <QtDebug>
#include "std_msgs/msg/int32.hpp"
#include "sensor_msgs/msg/joy.hpp"
#include "geometry_msgs/msg/twist.hpp"
#include "threadsafe_queue.h"

#include "joy_linux.h"

class joy_node_connect_qt :public QObject
{
    Q_OBJECT

signals:

    void s_rov_behaviour(int);

public:
    joy_node_connect_qt(){}

    void emit_rov_behaviour(int msg){
        emit s_rov_behaviour(msg);
    }
};


class joy_node : public rclcpp::Node
{
private:
    // rclcpp::Subscription<sensor_msgs::msg::Joy>::SharedPtr _joy_subscription;
    rclcpp::Publisher<geometry_msgs::msg::Twist>::SharedPtr _Twist_publisher;
    // 声名定时器指针
    rclcpp::TimerBase::SharedPtr timer_;
    // 创建消息
    geometry_msgs::msg::Twist twist_msg;
    geometry_msgs::msg::Twist twist_msg_send;

    threadsafe_queue<geometry_msgs::msg::Twist> queROVJoystick;

    int get_rov_behaviour;

    int xbox_fd;
    xbox_map_t map;
    int len, type;
    int axis_value, button_value;
    int number_of_axis, number_of_buttons;

public:
    joy_node_connect_qt *connectqt;

public:
    // 构造函数,有一个参数为节点名称
    joy_node(std::string name) : Node(name)
    {
        RCLCPP_INFO(this->get_logger(), "%s节点已经启动.", name.c_str());

        connectqt = new joy_node_connect_qt;

        twist_msg.linear.x=0;
        get_rov_behaviour = 0;

        memset(&map,0,sizeof(xbox_map_t));
        xbox_fd = xbox_open("/dev/input/js0");
        if(xbox_fd<0)
        {
            RCLCPP_INFO(this->get_logger(), "没找到手柄");
        }
        
        // _joy_subscription = this->create_subscription<sensor_msgs::msg::Joy>("joy", 10,std::bind(&joy_node::joy_recv_callback,this,std::placeholders::_1));
        _Twist_publisher = this->create_publisher<geometry_msgs::msg::Twist>("cmd_vel", 10);



        std::thread t1(&joy_node::get_joystickThread,this);
        std::thread t2(&joy_node::set_joystickThread,this);

        t1.detach();
        t2.detach();

        // 创建定时器，500ms为周期，定时发布
        // timer_ = this->create_wall_timer(std::chrono::milliseconds(100), std::bind(&joy_node::timer_callback, this));
    }

    ~joy_node(){
        xbox_close(xbox_fd); 
    }

    // void timer_callback()
    // {

    //     len = xbox_map_read(xbox_fd, &map);
    //     if (len < 0)  
    //     {  
    //         RCLCPP_INFO(this->get_logger(), "手柄数据读取失败");
    //     }  
        
    //     twist_msg.linear.x = - map.ry * 100 /32767 ;
    //     twist_msg.linear.z = map.ly * 100 /32767;
    //     twist_msg.angular.z = map.rx * 180 /32767;
    //     twist_msg.angular.x = map.lx * 180 /32767;
    //     // 发布消息
    //     _Twist_publisher->publish(twist_msg);
    //     RCLCPP_INFO(this->get_logger(), "send twist_msg successfully");
    // }


    void get_joystickThread(){
        // RCLCPP_INFO(this->get_logger(), "thread1");


        while (1)
        {
            len = xbox_map_read(xbox_fd, &map);
            if (len < 0)  
            {  
                RCLCPP_INFO(this->get_logger(), "手柄数据读取失败");
            }
            twist_msg.linear.x = - map.ry * 100 /32767 ;
            twist_msg.linear.z = map.ly * 100 /32767;
            twist_msg.angular.z = map.rx * 180 /32767;
            twist_msg.angular.x = map.lx * 180 /32767;

            queROVJoystick.push(twist_msg);

            if(map.yy == -32767){
                RCLCPP_INFO(this->get_logger(), "开环控制");
                get_rov_behaviour = 1;
                this->connectqt->emit_rov_behaviour(get_rov_behaviour);
            }
            if(map.y == 1){
                RCLCPP_INFO(this->get_logger(), "只开定深");
                get_rov_behaviour = 2;
                this->connectqt->emit_rov_behaviour(get_rov_behaviour);
            }
            if(map.b == 1){
                RCLCPP_INFO(this->get_logger(), "只开定艏");
                get_rov_behaviour = 3;
                this->connectqt->emit_rov_behaviour(get_rov_behaviour);
            }
            if(map.xx == -32767){
                RCLCPP_INFO(this->get_logger(), "定深定艏");
                get_rov_behaviour = 4;
                this->connectqt->emit_rov_behaviour(get_rov_behaviour);
            }
            if(map.rb == 1){
                RCLCPP_INFO(this->get_logger(), "爬壁模式");
                get_rov_behaviour = 5;
                this->connectqt->emit_rov_behaviour(get_rov_behaviour);
            }
            if(map.lb == 1){
                RCLCPP_INFO(this->get_logger(), "陆地爬行模式");
                get_rov_behaviour = 6;
                this->connectqt->emit_rov_behaviour(get_rov_behaviour);
            }
            if(map.rt == 32767){
                RCLCPP_INFO(this->get_logger(), "停止模式(暂不开放)");
                get_rov_behaviour = 7;
                this->connectqt->emit_rov_behaviour(get_rov_behaviour);
            }
            if(map.lt == 32767){
                RCLCPP_INFO(this->get_logger(), "无力模式");
                get_rov_behaviour = 0;
                this->connectqt->emit_rov_behaviour(get_rov_behaviour);
            }

            std::this_thread::sleep_for(std::chrono::milliseconds(50));
        }
    }

    void set_joystickThread(){
        // RCLCPP_INFO(this->get_logger(), "thread2");
        while (1)
        {
            queROVJoystick.wait_and_pop(twist_msg_send);
            _Twist_publisher->publish(twist_msg_send);
        }
    }
};



class joy_thread :public QThread
{
    Q_OBJECT
public:
    joy_thread();
    void run() override;
    std::shared_ptr<joy_node> node;
private:


};

#endif // RCLCOMM_H