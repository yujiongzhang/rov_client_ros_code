// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from rov_interfaces:msg/MotorControl.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "rov_interfaces/msg/detail/motor_control__rosidl_typesupport_introspection_c.h"
#include "rov_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "rov_interfaces/msg/detail/motor_control__functions.h"
#include "rov_interfaces/msg/detail/motor_control__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void rov_interfaces__msg__MotorControl__rosidl_typesupport_introspection_c__MotorControl_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  rov_interfaces__msg__MotorControl__init(message_memory);
}

void rov_interfaces__msg__MotorControl__rosidl_typesupport_introspection_c__MotorControl_fini_function(void * message_memory)
{
  rov_interfaces__msg__MotorControl__fini(message_memory);
}

size_t rov_interfaces__msg__MotorControl__rosidl_typesupport_introspection_c__size_function__MotorControl__thruster_speed(
  const void * untyped_member)
{
  (void)untyped_member;
  return 6;
}

const void * rov_interfaces__msg__MotorControl__rosidl_typesupport_introspection_c__get_const_function__MotorControl__thruster_speed(
  const void * untyped_member, size_t index)
{
  const int16_t * member =
    (const int16_t *)(untyped_member);
  return &member[index];
}

void * rov_interfaces__msg__MotorControl__rosidl_typesupport_introspection_c__get_function__MotorControl__thruster_speed(
  void * untyped_member, size_t index)
{
  int16_t * member =
    (int16_t *)(untyped_member);
  return &member[index];
}

void rov_interfaces__msg__MotorControl__rosidl_typesupport_introspection_c__fetch_function__MotorControl__thruster_speed(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const int16_t * item =
    ((const int16_t *)
    rov_interfaces__msg__MotorControl__rosidl_typesupport_introspection_c__get_const_function__MotorControl__thruster_speed(untyped_member, index));
  int16_t * value =
    (int16_t *)(untyped_value);
  *value = *item;
}

void rov_interfaces__msg__MotorControl__rosidl_typesupport_introspection_c__assign_function__MotorControl__thruster_speed(
  void * untyped_member, size_t index, const void * untyped_value)
{
  int16_t * item =
    ((int16_t *)
    rov_interfaces__msg__MotorControl__rosidl_typesupport_introspection_c__get_function__MotorControl__thruster_speed(untyped_member, index));
  const int16_t * value =
    (const int16_t *)(untyped_value);
  *item = *value;
}

size_t rov_interfaces__msg__MotorControl__rosidl_typesupport_introspection_c__size_function__MotorControl__track_speed(
  const void * untyped_member)
{
  (void)untyped_member;
  return 2;
}

const void * rov_interfaces__msg__MotorControl__rosidl_typesupport_introspection_c__get_const_function__MotorControl__track_speed(
  const void * untyped_member, size_t index)
{
  const int16_t * member =
    (const int16_t *)(untyped_member);
  return &member[index];
}

void * rov_interfaces__msg__MotorControl__rosidl_typesupport_introspection_c__get_function__MotorControl__track_speed(
  void * untyped_member, size_t index)
{
  int16_t * member =
    (int16_t *)(untyped_member);
  return &member[index];
}

void rov_interfaces__msg__MotorControl__rosidl_typesupport_introspection_c__fetch_function__MotorControl__track_speed(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const int16_t * item =
    ((const int16_t *)
    rov_interfaces__msg__MotorControl__rosidl_typesupport_introspection_c__get_const_function__MotorControl__track_speed(untyped_member, index));
  int16_t * value =
    (int16_t *)(untyped_value);
  *value = *item;
}

void rov_interfaces__msg__MotorControl__rosidl_typesupport_introspection_c__assign_function__MotorControl__track_speed(
  void * untyped_member, size_t index, const void * untyped_value)
{
  int16_t * item =
    ((int16_t *)
    rov_interfaces__msg__MotorControl__rosidl_typesupport_introspection_c__get_function__MotorControl__track_speed(untyped_member, index));
  const int16_t * value =
    (const int16_t *)(untyped_value);
  *item = *value;
}

static rosidl_typesupport_introspection_c__MessageMember rov_interfaces__msg__MotorControl__rosidl_typesupport_introspection_c__MotorControl_message_member_array[2] = {
  {
    "thruster_speed",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    6,  // array size
    false,  // is upper bound
    offsetof(rov_interfaces__msg__MotorControl, thruster_speed),  // bytes offset in struct
    NULL,  // default value
    rov_interfaces__msg__MotorControl__rosidl_typesupport_introspection_c__size_function__MotorControl__thruster_speed,  // size() function pointer
    rov_interfaces__msg__MotorControl__rosidl_typesupport_introspection_c__get_const_function__MotorControl__thruster_speed,  // get_const(index) function pointer
    rov_interfaces__msg__MotorControl__rosidl_typesupport_introspection_c__get_function__MotorControl__thruster_speed,  // get(index) function pointer
    rov_interfaces__msg__MotorControl__rosidl_typesupport_introspection_c__fetch_function__MotorControl__thruster_speed,  // fetch(index, &value) function pointer
    rov_interfaces__msg__MotorControl__rosidl_typesupport_introspection_c__assign_function__MotorControl__thruster_speed,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "track_speed",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    2,  // array size
    false,  // is upper bound
    offsetof(rov_interfaces__msg__MotorControl, track_speed),  // bytes offset in struct
    NULL,  // default value
    rov_interfaces__msg__MotorControl__rosidl_typesupport_introspection_c__size_function__MotorControl__track_speed,  // size() function pointer
    rov_interfaces__msg__MotorControl__rosidl_typesupport_introspection_c__get_const_function__MotorControl__track_speed,  // get_const(index) function pointer
    rov_interfaces__msg__MotorControl__rosidl_typesupport_introspection_c__get_function__MotorControl__track_speed,  // get(index) function pointer
    rov_interfaces__msg__MotorControl__rosidl_typesupport_introspection_c__fetch_function__MotorControl__track_speed,  // fetch(index, &value) function pointer
    rov_interfaces__msg__MotorControl__rosidl_typesupport_introspection_c__assign_function__MotorControl__track_speed,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers rov_interfaces__msg__MotorControl__rosidl_typesupport_introspection_c__MotorControl_message_members = {
  "rov_interfaces__msg",  // message namespace
  "MotorControl",  // message name
  2,  // number of fields
  sizeof(rov_interfaces__msg__MotorControl),
  rov_interfaces__msg__MotorControl__rosidl_typesupport_introspection_c__MotorControl_message_member_array,  // message members
  rov_interfaces__msg__MotorControl__rosidl_typesupport_introspection_c__MotorControl_init_function,  // function to initialize message memory (memory has to be allocated)
  rov_interfaces__msg__MotorControl__rosidl_typesupport_introspection_c__MotorControl_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t rov_interfaces__msg__MotorControl__rosidl_typesupport_introspection_c__MotorControl_message_type_support_handle = {
  0,
  &rov_interfaces__msg__MotorControl__rosidl_typesupport_introspection_c__MotorControl_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_rov_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rov_interfaces, msg, MotorControl)() {
  if (!rov_interfaces__msg__MotorControl__rosidl_typesupport_introspection_c__MotorControl_message_type_support_handle.typesupport_identifier) {
    rov_interfaces__msg__MotorControl__rosidl_typesupport_introspection_c__MotorControl_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &rov_interfaces__msg__MotorControl__rosidl_typesupport_introspection_c__MotorControl_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
