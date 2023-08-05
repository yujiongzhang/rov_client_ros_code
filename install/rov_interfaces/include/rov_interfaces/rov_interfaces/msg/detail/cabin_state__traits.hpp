// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from rov_interfaces:msg/CabinState.idl
// generated code does not contain a copyright notice

#ifndef ROV_INTERFACES__MSG__DETAIL__CABIN_STATE__TRAITS_HPP_
#define ROV_INTERFACES__MSG__DETAIL__CABIN_STATE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "rov_interfaces/msg/detail/cabin_state__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace rov_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const CabinState & msg,
  std::ostream & out)
{
  out << "{";
  // member: cabin_temperature
  {
    out << "cabin_temperature: ";
    rosidl_generator_traits::value_to_yaml(msg.cabin_temperature, out);
    out << ", ";
  }

  // member: cabin_humidity
  {
    out << "cabin_humidity: ";
    rosidl_generator_traits::value_to_yaml(msg.cabin_humidity, out);
    out << ", ";
  }

  // member: cabin_water_level
  {
    out << "cabin_water_level: ";
    rosidl_generator_traits::value_to_yaml(msg.cabin_water_level, out);
    out << ", ";
  }

  // member: cpu_temperature
  {
    out << "cpu_temperature: ";
    rosidl_generator_traits::value_to_yaml(msg.cpu_temperature, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const CabinState & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: cabin_temperature
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cabin_temperature: ";
    rosidl_generator_traits::value_to_yaml(msg.cabin_temperature, out);
    out << "\n";
  }

  // member: cabin_humidity
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cabin_humidity: ";
    rosidl_generator_traits::value_to_yaml(msg.cabin_humidity, out);
    out << "\n";
  }

  // member: cabin_water_level
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cabin_water_level: ";
    rosidl_generator_traits::value_to_yaml(msg.cabin_water_level, out);
    out << "\n";
  }

  // member: cpu_temperature
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cpu_temperature: ";
    rosidl_generator_traits::value_to_yaml(msg.cpu_temperature, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const CabinState & msg, bool use_flow_style = false)
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
  const rov_interfaces::msg::CabinState & msg,
  std::ostream & out, size_t indentation = 0)
{
  rov_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use rov_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const rov_interfaces::msg::CabinState & msg)
{
  return rov_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<rov_interfaces::msg::CabinState>()
{
  return "rov_interfaces::msg::CabinState";
}

template<>
inline const char * name<rov_interfaces::msg::CabinState>()
{
  return "rov_interfaces/msg/CabinState";
}

template<>
struct has_fixed_size<rov_interfaces::msg::CabinState>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<rov_interfaces::msg::CabinState>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<rov_interfaces::msg::CabinState>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ROV_INTERFACES__MSG__DETAIL__CABIN_STATE__TRAITS_HPP_
