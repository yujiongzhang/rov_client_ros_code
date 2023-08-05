// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rov_interfaces:msg/CabinState.idl
// generated code does not contain a copyright notice

#ifndef ROV_INTERFACES__MSG__DETAIL__CABIN_STATE__BUILDER_HPP_
#define ROV_INTERFACES__MSG__DETAIL__CABIN_STATE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rov_interfaces/msg/detail/cabin_state__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rov_interfaces
{

namespace msg
{

namespace builder
{

class Init_CabinState_cpu_temperature
{
public:
  explicit Init_CabinState_cpu_temperature(::rov_interfaces::msg::CabinState & msg)
  : msg_(msg)
  {}
  ::rov_interfaces::msg::CabinState cpu_temperature(::rov_interfaces::msg::CabinState::_cpu_temperature_type arg)
  {
    msg_.cpu_temperature = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rov_interfaces::msg::CabinState msg_;
};

class Init_CabinState_cabin_water_level
{
public:
  explicit Init_CabinState_cabin_water_level(::rov_interfaces::msg::CabinState & msg)
  : msg_(msg)
  {}
  Init_CabinState_cpu_temperature cabin_water_level(::rov_interfaces::msg::CabinState::_cabin_water_level_type arg)
  {
    msg_.cabin_water_level = std::move(arg);
    return Init_CabinState_cpu_temperature(msg_);
  }

private:
  ::rov_interfaces::msg::CabinState msg_;
};

class Init_CabinState_cabin_humidity
{
public:
  explicit Init_CabinState_cabin_humidity(::rov_interfaces::msg::CabinState & msg)
  : msg_(msg)
  {}
  Init_CabinState_cabin_water_level cabin_humidity(::rov_interfaces::msg::CabinState::_cabin_humidity_type arg)
  {
    msg_.cabin_humidity = std::move(arg);
    return Init_CabinState_cabin_water_level(msg_);
  }

private:
  ::rov_interfaces::msg::CabinState msg_;
};

class Init_CabinState_cabin_temperature
{
public:
  Init_CabinState_cabin_temperature()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CabinState_cabin_humidity cabin_temperature(::rov_interfaces::msg::CabinState::_cabin_temperature_type arg)
  {
    msg_.cabin_temperature = std::move(arg);
    return Init_CabinState_cabin_humidity(msg_);
  }

private:
  ::rov_interfaces::msg::CabinState msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::rov_interfaces::msg::CabinState>()
{
  return rov_interfaces::msg::builder::Init_CabinState_cabin_temperature();
}

}  // namespace rov_interfaces

#endif  // ROV_INTERFACES__MSG__DETAIL__CABIN_STATE__BUILDER_HPP_
