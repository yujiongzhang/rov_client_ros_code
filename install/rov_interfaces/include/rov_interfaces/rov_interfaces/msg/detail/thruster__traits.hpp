// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from rov_interfaces:msg/Thruster.idl
// generated code does not contain a copyright notice

#ifndef ROV_INTERFACES__MSG__DETAIL__THRUSTER__TRAITS_HPP_
#define ROV_INTERFACES__MSG__DETAIL__THRUSTER__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "rov_interfaces/msg/detail/thruster__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace rov_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const Thruster & msg,
  std::ostream & out)
{
  out << "{";
  // member: speed_rpm
  {
    out << "speed_rpm: ";
    rosidl_generator_traits::value_to_yaml(msg.speed_rpm, out);
    out << ", ";
  }

  // member: given_voltage
  {
    out << "given_voltage: ";
    rosidl_generator_traits::value_to_yaml(msg.given_voltage, out);
    out << ", ";
  }

  // member: given_current
  {
    out << "given_current: ";
    rosidl_generator_traits::value_to_yaml(msg.given_current, out);
    out << ", ";
  }

  // member: controller_temperate
  {
    out << "controller_temperate: ";
    rosidl_generator_traits::value_to_yaml(msg.controller_temperate, out);
    out << ", ";
  }

  // member: motor_temperate
  {
    out << "motor_temperate: ";
    rosidl_generator_traits::value_to_yaml(msg.motor_temperate, out);
    out << ", ";
  }

  // member: motor_status
  {
    out << "motor_status: ";
    rosidl_generator_traits::value_to_yaml(msg.motor_status, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Thruster & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: speed_rpm
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "speed_rpm: ";
    rosidl_generator_traits::value_to_yaml(msg.speed_rpm, out);
    out << "\n";
  }

  // member: given_voltage
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "given_voltage: ";
    rosidl_generator_traits::value_to_yaml(msg.given_voltage, out);
    out << "\n";
  }

  // member: given_current
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "given_current: ";
    rosidl_generator_traits::value_to_yaml(msg.given_current, out);
    out << "\n";
  }

  // member: controller_temperate
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "controller_temperate: ";
    rosidl_generator_traits::value_to_yaml(msg.controller_temperate, out);
    out << "\n";
  }

  // member: motor_temperate
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "motor_temperate: ";
    rosidl_generator_traits::value_to_yaml(msg.motor_temperate, out);
    out << "\n";
  }

  // member: motor_status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "motor_status: ";
    rosidl_generator_traits::value_to_yaml(msg.motor_status, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Thruster & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace rov_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use rov_interfaces::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const rov_interfaces::msg::Thruster & msg,
  std::ostream & out, size_t indentation = 0)
{
  rov_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use rov_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const rov_interfaces::msg::Thruster & msg)
{
  return rov_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<rov_interfaces::msg::Thruster>()
{
  return "rov_interfaces::msg::Thruster";
}

template<>
inline const char * name<rov_interfaces::msg::Thruster>()
{
  return "rov_interfaces/msg/Thruster";
}

template<>
struct has_fixed_size<rov_interfaces::msg::Thruster>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<rov_interfaces::msg::Thruster>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<rov_interfaces::msg::Thruster>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ROV_INTERFACES__MSG__DETAIL__THRUSTER__TRAITS_HPP_
