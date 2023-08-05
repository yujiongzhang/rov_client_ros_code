// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rov_interfaces:msg/MotorControl.idl
// generated code does not contain a copyright notice

#ifndef ROV_INTERFACES__MSG__DETAIL__MOTOR_CONTROL__BUILDER_HPP_
#define ROV_INTERFACES__MSG__DETAIL__MOTOR_CONTROL__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rov_interfaces/msg/detail/motor_control__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rov_interfaces
{

namespace msg
{

namespace builder
{

class Init_MotorControl_track_speed
{
public:
  explicit Init_MotorControl_track_speed(::rov_interfaces::msg::MotorControl & msg)
  : msg_(msg)
  {}
  ::rov_interfaces::msg::MotorControl track_speed(::rov_interfaces::msg::MotorControl::_track_speed_type arg)
  {
    msg_.track_speed = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rov_interfaces::msg::MotorControl msg_;
};

class Init_MotorControl_thruster_speed
{
public:
  Init_MotorControl_thruster_speed()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MotorControl_track_speed thruster_speed(::rov_interfaces::msg::MotorControl::_thruster_speed_type arg)
  {
    msg_.thruster_speed = std::move(arg);
    return Init_MotorControl_track_speed(msg_);
  }

private:
  ::rov_interfaces::msg::MotorControl msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::rov_interfaces::msg::MotorControl>()
{
  return rov_interfaces::msg::builder::Init_MotorControl_thruster_speed();
}

}  // namespace rov_interfaces

#endif  // ROV_INTERFACES__MSG__DETAIL__MOTOR_CONTROL__BUILDER_HPP_
