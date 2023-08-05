// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rov_interfaces:msg/Tracks.idl
// generated code does not contain a copyright notice

#ifndef ROV_INTERFACES__MSG__DETAIL__TRACKS__BUILDER_HPP_
#define ROV_INTERFACES__MSG__DETAIL__TRACKS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rov_interfaces/msg/detail/tracks__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rov_interfaces
{

namespace msg
{

namespace builder
{

class Init_Tracks_track_speed
{
public:
  Init_Tracks_track_speed()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::rov_interfaces::msg::Tracks track_speed(::rov_interfaces::msg::Tracks::_track_speed_type arg)
  {
    msg_.track_speed = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rov_interfaces::msg::Tracks msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::rov_interfaces::msg::Tracks>()
{
  return rov_interfaces::msg::builder::Init_Tracks_track_speed();
}

}  // namespace rov_interfaces

#endif  // ROV_INTERFACES__MSG__DETAIL__TRACKS__BUILDER_HPP_
