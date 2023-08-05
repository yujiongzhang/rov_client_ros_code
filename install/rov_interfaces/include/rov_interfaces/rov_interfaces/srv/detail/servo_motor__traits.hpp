// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from rov_interfaces:srv/ServoMotor.idl
// generated code does not contain a copyright notice

#ifndef ROV_INTERFACES__SRV__DETAIL__SERVO_MOTOR__TRAITS_HPP_
#define ROV_INTERFACES__SRV__DETAIL__SERVO_MOTOR__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "rov_interfaces/srv/detail/servo_motor__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace rov_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const ServoMotor_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: angle
  {
    out << "angle: ";
    rosidl_generator_traits::value_to_yaml(msg.angle, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ServoMotor_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: angle
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "angle: ";
    rosidl_generator_traits::value_to_yaml(msg.angle, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ServoMotor_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace rov_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use rov_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const rov_interfaces::srv::ServoMotor_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  rov_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use rov_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const rov_interfaces::srv::ServoMotor_Request & msg)
{
  return rov_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<rov_interfaces::srv::ServoMotor_Request>()
{
  return "rov_interfaces::srv::ServoMotor_Request";
}

template<>
inline const char * name<rov_interfaces::srv::ServoMotor_Request>()
{
  return "rov_interfaces/srv/ServoMotor_Request";
}

template<>
struct has_fixed_size<rov_interfaces::srv::ServoMotor_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<rov_interfaces::srv::ServoMotor_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<rov_interfaces::srv::ServoMotor_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rov_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const ServoMotor_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: result
  {
    out << "result: ";
    rosidl_generator_traits::value_to_yaml(msg.result, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ServoMotor_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: result
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "result: ";
    rosidl_generator_traits::value_to_yaml(msg.result, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ServoMotor_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace rov_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use rov_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const rov_interfaces::srv::ServoMotor_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  rov_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use rov_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const rov_interfaces::srv::ServoMotor_Response & msg)
{
  return rov_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<rov_interfaces::srv::ServoMotor_Response>()
{
  return "rov_interfaces::srv::ServoMotor_Response";
}

template<>
inline const char * name<rov_interfaces::srv::ServoMotor_Response>()
{
  return "rov_interfaces/srv/ServoMotor_Response";
}

template<>
struct has_fixed_size<rov_interfaces::srv::ServoMotor_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<rov_interfaces::srv::ServoMotor_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<rov_interfaces::srv::ServoMotor_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<rov_interfaces::srv::ServoMotor>()
{
  return "rov_interfaces::srv::ServoMotor";
}

template<>
inline const char * name<rov_interfaces::srv::ServoMotor>()
{
  return "rov_interfaces/srv/ServoMotor";
}

template<>
struct has_fixed_size<rov_interfaces::srv::ServoMotor>
  : std::integral_constant<
    bool,
    has_fixed_size<rov_interfaces::srv::ServoMotor_Request>::value &&
    has_fixed_size<rov_interfaces::srv::ServoMotor_Response>::value
  >
{
};

template<>
struct has_bounded_size<rov_interfaces::srv::ServoMotor>
  : std::integral_constant<
    bool,
    has_bounded_size<rov_interfaces::srv::ServoMotor_Request>::value &&
    has_bounded_size<rov_interfaces::srv::ServoMotor_Response>::value
  >
{
};

template<>
struct is_service<rov_interfaces::srv::ServoMotor>
  : std::true_type
{
};

template<>
struct is_service_request<rov_interfaces::srv::ServoMotor_Request>
  : std::true_type
{
};

template<>
struct is_service_response<rov_interfaces::srv::ServoMotor_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // ROV_INTERFACES__SRV__DETAIL__SERVO_MOTOR__TRAITS_HPP_
