// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rov_interfaces:msg/Thrusters.idl
// generated code does not contain a copyright notice

#ifndef ROV_INTERFACES__MSG__DETAIL__THRUSTERS__STRUCT_H_
#define ROV_INTERFACES__MSG__DETAIL__THRUSTERS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'upper_left'
// Member 'upper_right'
// Member 'lower_right'
// Member 'lower_left'
// Member 'left'
// Member 'right'
#include "rov_interfaces/msg/detail/thruster__struct.h"

/// Struct defined in msg/Thrusters in the package rov_interfaces.
typedef struct rov_interfaces__msg__Thrusters
{
  rov_interfaces__msg__Thruster upper_left;
  rov_interfaces__msg__Thruster upper_right;
  rov_interfaces__msg__Thruster lower_right;
  rov_interfaces__msg__Thruster lower_left;
  rov_interfaces__msg__Thruster left;
  rov_interfaces__msg__Thruster right;
} rov_interfaces__msg__Thrusters;

// Struct for a sequence of rov_interfaces__msg__Thrusters.
typedef struct rov_interfaces__msg__Thrusters__Sequence
{
  rov_interfaces__msg__Thrusters * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rov_interfaces__msg__Thrusters__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROV_INTERFACES__MSG__DETAIL__THRUSTERS__STRUCT_H_
