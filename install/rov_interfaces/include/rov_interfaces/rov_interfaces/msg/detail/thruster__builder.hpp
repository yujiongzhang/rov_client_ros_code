// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rov_interfaces:msg/Thruster.idl
// generated code does not contain a copyright notice

#ifndef ROV_INTERFACES__MSG__DETAIL__THRUSTER__BUILDER_HPP_
#define ROV_INTERFACES__MSG__DETAIL__THRUSTER__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rov_interfaces/msg/detail/thruster__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rov_interfaces
{

namespace msg
{

namespace builder
{

class Init_Thruster_motor_status
{
public:
  explicit Init_Thruster_motor_status(::rov_interfaces::msg::Thruster & msg)
  : msg_(msg)
  {}
  ::rov_interfaces::msg::Thruster motor_status(::rov_interfaces::msg::Thruster::_motor_status_type arg)
  {
    msg_.motor_status = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rov_interfaces::msg::Thruster msg_;
};

class Init_Thruster_motor_temperate
{
public:
  explicit Init_Thruster_motor_temperate(::rov_interfaces::msg::Thruster & msg)
  : msg_(msg)
  {}
  Init_Thruster_motor_status motor_temperate(::rov_interfaces::msg::Thruster::_motor_temperate_type arg)
  {
    msg_.motor_temperate = std::move(arg);
    return Init_Thruster_motor_status(msg_);
  }

private:
  ::rov_interfaces::msg::Thruster msg_;
};

class Init_Thruster_controller_temperate
{
public:
  explicit Init_Thruster_controller_temperate(::rov_interfaces::msg::Thruster & msg)
  : msg_(msg)
  {}
  Init_Thruster_motor_temperate controller_temperate(::rov_interfaces::msg::Thruster::_controller_temperate_type arg)
  {
    msg_.controller_temperate = std::move(arg);
    return Init_Thruster_motor_temperate(msg_);
  }

private:
  ::rov_interfaces::msg::Thruster msg_;
};

class Init_Thruster_given_current
{
public:
  explicit Init_Thruster_given_current(::rov_interfaces::msg::Thruster & msg)
  : msg_(msg)
  {}
  Init_Thruster_controller_temperate given_current(::rov_interfaces::msg::Thruster::_given_current_type arg)
  {
    msg_.given_current = std::move(arg);
    return Init_Thruster_controller_temperate(msg_);
  }

private:
  ::rov_interfaces::msg::Thruster msg_;
};

class Init_Thruster_given_voltage
{
public:
  explicit Init_Thruster_given_voltage(::rov_interfaces::msg::Thruster & msg)
  : msg_(msg)
  {}
  Init_Thruster_given_current given_voltage(::rov_interfaces::msg::Thruster::_given_voltage_type arg)
  {
    msg_.given_voltage = std::move(arg);
    return Init_Thruster_given_current(msg_);
  }

private:
  ::rov_interfaces::msg::Thruster msg_;
};

class Init_Thruster_speed_rpm
{
public:
  Init_Thruster_speed_rpm()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Thruster_given_voltage speed_rpm(::rov_interfaces::msg::Thruster::_speed_rpm_type arg)
  {
    msg_.speed_rpm = std::move(arg);
    return Init_Thruster_given_voltage(msg_);
  }

private:
  ::rov_interfaces::msg::Thruster msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::rov_interfaces::msg::Thruster>()
{
  return rov_interfaces::msg::builder::Init_Thruster_speed_rpm();
}

}  // namespace rov_interfaces

#endif  // ROV_INTERFACES__MSG__DETAIL__THRUSTER__BUILDER_HPP_
