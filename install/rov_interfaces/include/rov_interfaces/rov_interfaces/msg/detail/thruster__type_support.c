// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from rov_interfaces:msg/Thruster.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "rov_interfaces/msg/detail/thruster__rosidl_typesupport_introspection_c.h"
#include "rov_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "rov_interfaces/msg/detail/thruster__functions.h"
#include "rov_interfaces/msg/detail/thruster__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void rov_interfaces__msg__Thruster__rosidl_typesupport_introspection_c__Thruster_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  rov_interfaces__msg__Thruster__init(message_memory);
}

void rov_interfaces__msg__Thruster__rosidl_typesupport_introspection_c__Thruster_fini_function(void * message_memory)
{
  rov_interfaces__msg__Thruster__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember rov_interfaces__msg__Thruster__rosidl_typesupport_introspection_c__Thruster_message_member_array[6] = {
  {
    "speed_rpm",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rov_interfaces__msg__Thruster, speed_rpm),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "given_voltage",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rov_interfaces__msg__Thruster, given_voltage),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "given_current",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rov_interfaces__msg__Thruster, given_current),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "controller_temperate",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rov_interfaces__msg__Thruster, controller_temperate),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "motor_temperate",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rov_interfaces__msg__Thruster, motor_temperate),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "motor_status",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rov_interfaces__msg__Thruster, motor_status),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers rov_interfaces__msg__Thruster__rosidl_typesupport_introspection_c__Thruster_message_members = {
  "rov_interfaces__msg",  // message namespace
  "Thruster",  // message name
  6,  // number of fields
  sizeof(rov_interfaces__msg__Thruster),
  rov_interfaces__msg__Thruster__rosidl_typesupport_introspection_c__Thruster_message_member_array,  // message members
  rov_interfaces__msg__Thruster__rosidl_typesupport_introspection_c__Thruster_init_function,  // function to initialize message memory (memory has to be allocated)
  rov_interfaces__msg__Thruster__rosidl_typesupport_introspection_c__Thruster_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t rov_interfaces__msg__Thruster__rosidl_typesupport_introspection_c__Thruster_message_type_support_handle = {
  0,
  &rov_interfaces__msg__Thruster__rosidl_typesupport_introspection_c__Thruster_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_rov_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rov_interfaces, msg, Thruster)() {
  if (!rov_interfaces__msg__Thruster__rosidl_typesupport_introspection_c__Thruster_message_type_support_handle.typesupport_identifier) {
    rov_interfaces__msg__Thruster__rosidl_typesupport_introspection_c__Thruster_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &rov_interfaces__msg__Thruster__rosidl_typesupport_introspection_c__Thruster_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
