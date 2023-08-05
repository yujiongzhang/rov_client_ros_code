// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rov_interfaces:srv/ServoMotor.idl
// generated code does not contain a copyright notice

#ifndef ROV_INTERFACES__SRV__DETAIL__SERVO_MOTOR__BUILDER_HPP_
#define ROV_INTERFACES__SRV__DETAIL__SERVO_MOTOR__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rov_interfaces/srv/detail/servo_motor__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rov_interfaces
{

namespace srv
{

namespace builder
{

class Init_ServoMotor_Request_angle
{
public:
  Init_ServoMotor_Request_angle()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::rov_interfaces::srv::ServoMotor_Request angle(::rov_interfaces::srv::ServoMotor_Request::_angle_type arg)
  {
    msg_.angle = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rov_interfaces::srv::ServoMotor_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::rov_interfaces::srv::ServoMotor_Request>()
{
  return rov_interfaces::srv::builder::Init_ServoMotor_Request_angle();
}

}  // namespace rov_interfaces


namespace rov_interfaces
{

namespace srv
{

namespace builder
{

class Init_ServoMotor_Response_result
{
public:
  Init_ServoMotor_Response_result()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::rov_interfaces::srv::ServoMotor_Response result(::rov_interfaces::srv::ServoMotor_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rov_interfaces::srv::ServoMotor_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::rov_interfaces::srv::ServoMotor_Response>()
{
  return rov_interfaces::srv::builder::Init_ServoMotor_Response_result();
}

}  // namespace rov_interfaces

#endif  // ROV_INTERFACES__SRV__DETAIL__SERVO_MOTOR__BUILDER_HPP_
