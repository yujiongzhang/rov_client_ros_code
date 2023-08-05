// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from rov_interfaces:msg/Thrusters.idl
// generated code does not contain a copyright notice

#ifndef ROV_INTERFACES__MSG__DETAIL__THRUSTERS__TRAITS_HPP_
#define ROV_INTERFACES__MSG__DETAIL__THRUSTERS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "rov_interfaces/msg/detail/thrusters__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'upper_left'
// Member 'upper_right'
// Member 'lower_right'
// Member 'lower_left'
// Member 'left'
// Member 'right'
#include "rov_interfaces/msg/detail/thruster__traits.hpp"

namespace rov_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const Thrusters & msg,
  std::ostream & out)
{
  out << "{";
  // member: upper_left
  {
    out << "upper_left: ";
    to_flow_style_yaml(msg.upper_left, out);
    out << ", ";
  }

  // member: upper_right
  {
    out << "upper_right: ";
    to_flow_style_yaml(msg.upper_right, out);
    out << ", ";
  }

  // member: lower_right
  {
    out << "lower_right: ";
    to_flow_style_yaml(msg.lower_right, out);
    out << ", ";
  }

  // member: lower_left
  {
    out << "lower_left: ";
    to_flow_style_yaml(msg.lower_left, out);
    out << ", ";
  }

  // member: left
  {
    out << "left: ";
    to_flow_style_yaml(msg.left, out);
    out << ", ";
  }

  // member: right
  {
    out << "right: ";
    to_flow_style_yaml(msg.right, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Thrusters & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: upper_left
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "upper_left:\n";
    to_block_style_yaml(msg.upper_left, out, indentation + 2);
  }

  // member: upper_right
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "upper_right:\n";
    to_block_style_yaml(msg.upper_right, out, indentation + 2);
  }

  // member: lower_right
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lower_right:\n";
    to_block_style_yaml(msg.lower_right, out, indentation + 2);
  }

  // member: lower_left
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lower_left:\n";
    to_block_style_yaml(msg.lower_left, out, indentation + 2);
  }

  // member: left
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "left:\n";
    to_block_style_yaml(msg.left, out, indentation + 2);
  }

  // member: right
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "right:\n";
    to_block_style_yaml(msg.right, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Thrusters & msg, bool use_flow_style = false)
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
  const rov_interfaces::msg::Thrusters & msg,
  std::ostream & out, size_t indentation = 0)
{
  rov_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use rov_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const rov_interfaces::msg::Thrusters & msg)
{
  return rov_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<rov_interfaces::msg::Thrusters>()
{
  return "rov_interfaces::msg::Thrusters";
}

template<>
inline const char * name<rov_interfaces::msg::Thrusters>()
{
  return "rov_interfaces/msg/Thrusters";
}

template<>
struct has_fixed_size<rov_interfaces::msg::Thrusters>
  : std::integral_constant<bool, has_fixed_size<rov_interfaces::msg::Thruster>::value> {};

template<>
struct has_bounded_size<rov_interfaces::msg::Thrusters>
  : std::integral_constant<bool, has_bounded_size<rov_interfaces::msg::Thruster>::value> {};

template<>
struct is_message<rov_interfaces::msg::Thrusters>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ROV_INTERFACES__MSG__DETAIL__THRUSTERS__TRAITS_HPP_
