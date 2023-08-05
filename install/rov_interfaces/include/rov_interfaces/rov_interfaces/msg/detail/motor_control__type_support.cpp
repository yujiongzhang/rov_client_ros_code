// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from rov_interfaces:msg/MotorControl.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "rov_interfaces/msg/detail/motor_control__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace rov_interfaces
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void MotorControl_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) rov_interfaces::msg::MotorControl(_init);
}

void MotorControl_fini_function(void * message_memory)
{
  auto typed_message = static_cast<rov_interfaces::msg::MotorControl *>(message_memory);
  typed_message->~MotorControl();
}

size_t size_function__MotorControl__thruster_speed(const void * untyped_member)
{
  (void)untyped_member;
  return 6;
}

const void * get_const_function__MotorControl__thruster_speed(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<int16_t, 6> *>(untyped_member);
  return &member[index];
}

void * get_function__MotorControl__thruster_speed(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<int16_t, 6> *>(untyped_member);
  return &member[index];
}

void fetch_function__MotorControl__thruster_speed(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const int16_t *>(
    get_const_function__MotorControl__thruster_speed(untyped_member, index));
  auto & value = *reinterpret_cast<int16_t *>(untyped_value);
  value = item;
}

void assign_function__MotorControl__thruster_speed(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<int16_t *>(
    get_function__MotorControl__thruster_speed(untyped_member, index));
  const auto & value = *reinterpret_cast<const int16_t *>(untyped_value);
  item = value;
}

size_t size_function__MotorControl__track_speed(const void * untyped_member)
{
  (void)untyped_member;
  return 2;
}

const void * get_const_function__MotorControl__track_speed(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<int16_t, 2> *>(untyped_member);
  return &member[index];
}

void * get_function__MotorControl__track_speed(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<int16_t, 2> *>(untyped_member);
  return &member[index];
}

void fetch_function__MotorControl__track_speed(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const int16_t *>(
    get_const_function__MotorControl__track_speed(untyped_member, index));
  auto & value = *reinterpret_cast<int16_t *>(untyped_value);
  value = item;
}

void assign_function__MotorControl__track_speed(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<int16_t *>(
    get_function__MotorControl__track_speed(untyped_member, index));
  const auto & value = *reinterpret_cast<const int16_t *>(untyped_value);
  item = value;
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember MotorControl_message_member_array[2] = {
  {
    "thruster_speed",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT16,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    6,  // array size
    false,  // is upper bound
    offsetof(rov_interfaces::msg::MotorControl, thruster_speed),  // bytes offset in struct
    nullptr,  // default value
    size_function__MotorControl__thruster_speed,  // size() function pointer
    get_const_function__MotorControl__thruster_speed,  // get_const(index) function pointer
    get_function__MotorControl__thruster_speed,  // get(index) function pointer
    fetch_function__MotorControl__thruster_speed,  // fetch(index, &value) function pointer
    assign_function__MotorControl__thruster_speed,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "track_speed",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT16,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    2,  // array size
    false,  // is upper bound
    offsetof(rov_interfaces::msg::MotorControl, track_speed),  // bytes offset in struct
    nullptr,  // default value
    size_function__MotorControl__track_speed,  // size() function pointer
    get_const_function__MotorControl__track_speed,  // get_const(index) function pointer
    get_function__MotorControl__track_speed,  // get(index) function pointer
    fetch_function__MotorControl__track_speed,  // fetch(index, &value) function pointer
    assign_function__MotorControl__track_speed,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers MotorControl_message_members = {
  "rov_interfaces::msg",  // message namespace
  "MotorControl",  // message name
  2,  // number of fields
  sizeof(rov_interfaces::msg::MotorControl),
  MotorControl_message_member_array,  // message members
  MotorControl_init_function,  // function to initialize message memory (memory has to be allocated)
  MotorControl_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t MotorControl_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &MotorControl_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace rov_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<rov_interfaces::msg::MotorControl>()
{
  return &::rov_interfaces::msg::rosidl_typesupport_introspection_cpp::MotorControl_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, rov_interfaces, msg, MotorControl)() {
  return &::rov_interfaces::msg::rosidl_typesupport_introspection_cpp::MotorControl_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
