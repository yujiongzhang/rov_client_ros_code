// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from rov_interfaces:msg/MotorControl.idl
// generated code does not contain a copyright notice

#ifndef ROV_INTERFACES__MSG__DETAIL__MOTOR_CONTROL__TRAITS_HPP_
#define ROV_INTERFACES__MSG__DETAIL__MOTOR_CONTROL__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "rov_interfaces/msg/detail/motor_control__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace rov_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const MotorControl & msg,
  std::ostream & out)
{
  out << "{";
  // member: thruster_speed
  {
    if (msg.thruster_speed.size() == 0) {
      out << "thruster_speed: []";
    } else {
      out << "thruster_speed: [";
      size_t pending_items = msg.thruster_speed.size();
      for (auto item : msg.thruster_speed) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: track_speed
  {
    if (msg.track_speed.size() == 0) {
      out << "track_speed: []";
    } else {
      out << "track_speed: [";
      size_t pending_items = msg.track_speed.size();
      for (auto item : msg.track_speed) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MotorControl & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: thruster_speed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.thruster_speed.size() == 0) {
      out << "thruster_speed: []\n";
    } else {
      out << "thruster_speed:\n";
      for (auto item : msg.thruster_speed) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: track_speed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.track_speed.size() == 0) {
      out << "track_speed: []\n";
    } else {
      out << "track_speed:\n";
      for (auto item : msg.track_speed) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MotorControl & msg, bool use_flow_style = false)
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
  const rov_interfaces::msg::MotorControl & msg,
  std::ostream & out, size_t indentation = 0)
{
  rov_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use rov_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const rov_interfaces::msg::MotorControl & msg)
{
  return rov_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<rov_interfaces::msg::MotorControl>()
{
  return "rov_interfaces::msg::MotorControl";
}

template<>
inline const char * name<rov_interfaces::msg::MotorControl>()
{
  return "rov_interfaces/msg/MotorControl";
}

template<>
struct has_fixed_size<rov_interfaces::msg::MotorControl>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<rov_interfaces::msg::MotorControl>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<rov_interfaces::msg::MotorControl>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ROV_INTERFACES__MSG__DETAIL__MOTOR_CONTROL__TRAITS_HPP_
