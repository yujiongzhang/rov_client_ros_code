// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rov_interfaces:srv/Led.idl
// generated code does not contain a copyright notice

#ifndef ROV_INTERFACES__SRV__DETAIL__LED__BUILDER_HPP_
#define ROV_INTERFACES__SRV__DETAIL__LED__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rov_interfaces/srv/detail/led__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rov_interfaces
{

namespace srv
{

namespace builder
{

class Init_Led_Request_bright
{
public:
  Init_Led_Request_bright()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::rov_interfaces::srv::Led_Request bright(::rov_interfaces::srv::Led_Request::_bright_type arg)
  {
    msg_.bright = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rov_interfaces::srv::Led_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::rov_interfaces::srv::Led_Request>()
{
  return rov_interfaces::srv::builder::Init_Led_Request_bright();
}

}  // namespace rov_interfaces


namespace rov_interfaces
{

namespace srv
{

namespace builder
{

class Init_Led_Response_result
{
public:
  Init_Led_Response_result()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::rov_interfaces::srv::Led_Response result(::rov_interfaces::srv::Led_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rov_interfaces::srv::Led_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::rov_interfaces::srv::Led_Response>()
{
  return rov_interfaces::srv::builder::Init_Led_Response_result();
}

}  // namespace rov_interfaces

#endif  // ROV_INTERFACES__SRV__DETAIL__LED__BUILDER_HPP_
