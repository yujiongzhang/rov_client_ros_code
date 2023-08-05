// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rov_interfaces:msg/Thrusters.idl
// generated code does not contain a copyright notice

#ifndef ROV_INTERFACES__MSG__DETAIL__THRUSTERS__BUILDER_HPP_
#define ROV_INTERFACES__MSG__DETAIL__THRUSTERS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rov_interfaces/msg/detail/thrusters__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rov_interfaces
{

namespace msg
{

namespace builder
{

class Init_Thrusters_right
{
public:
  explicit Init_Thrusters_right(::rov_interfaces::msg::Thrusters & msg)
  : msg_(msg)
  {}
  ::rov_interfaces::msg::Thrusters right(::rov_interfaces::msg::Thrusters::_right_type arg)
  {
    msg_.right = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rov_interfaces::msg::Thrusters msg_;
};

class Init_Thrusters_left
{
public:
  explicit Init_Thrusters_left(::rov_interfaces::msg::Thrusters & msg)
  : msg_(msg)
  {}
  Init_Thrusters_right left(::rov_interfaces::msg::Thrusters::_left_type arg)
  {
    msg_.left = std::move(arg);
    return Init_Thrusters_right(msg_);
  }

private:
  ::rov_interfaces::msg::Thrusters msg_;
};

class Init_Thrusters_lower_left
{
public:
  explicit Init_Thrusters_lower_left(::rov_interfaces::msg::Thrusters & msg)
  : msg_(msg)
  {}
  Init_Thrusters_left lower_left(::rov_interfaces::msg::Thrusters::_lower_left_type arg)
  {
    msg_.lower_left = std::move(arg);
    return Init_Thrusters_left(msg_);
  }

private:
  ::rov_interfaces::msg::Thrusters msg_;
};

class Init_Thrusters_lower_right
{
public:
  explicit Init_Thrusters_lower_right(::rov_interfaces::msg::Thrusters & msg)
  : msg_(msg)
  {}
  Init_Thrusters_lower_left lower_right(::rov_interfaces::msg::Thrusters::_lower_right_type arg)
  {
    msg_.lower_right = std::move(arg);
    return Init_Thrusters_lower_left(msg_);
  }

private:
  ::rov_interfaces::msg::Thrusters msg_;
};

class Init_Thrusters_upper_right
{
public:
  explicit Init_Thrusters_upper_right(::rov_interfaces::msg::Thrusters & msg)
  : msg_(msg)
  {}
  Init_Thrusters_lower_right upper_right(::rov_interfaces::msg::Thrusters::_upper_right_type arg)
  {
    msg_.upper_right = std::move(arg);
    return Init_Thrusters_lower_right(msg_);
  }

private:
  ::rov_interfaces::msg::Thrusters msg_;
};

class Init_Thrusters_upper_left
{
public:
  Init_Thrusters_upper_left()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Thrusters_upper_right upper_left(::rov_interfaces::msg::Thrusters::_upper_left_type arg)
  {
    msg_.upper_left = std::move(arg);
    return Init_Thrusters_upper_right(msg_);
  }

private:
  ::rov_interfaces::msg::Thrusters msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::rov_interfaces::msg::Thrusters>()
{
  return rov_interfaces::msg::builder::Init_Thrusters_upper_left();
}

}  // namespace rov_interfaces

#endif  // ROV_INTERFACES__MSG__DETAIL__THRUSTERS__BUILDER_HPP_
