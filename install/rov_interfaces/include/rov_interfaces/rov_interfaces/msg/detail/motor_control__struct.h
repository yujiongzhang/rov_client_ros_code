// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rov_interfaces:msg/MotorControl.idl
// generated code does not contain a copyright notice

#ifndef ROV_INTERFACES__MSG__DETAIL__MOTOR_CONTROL__STRUCT_H_
#define ROV_INTERFACES__MSG__DETAIL__MOTOR_CONTROL__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/MotorControl in the package rov_interfaces.
typedef struct rov_interfaces__msg__MotorControl
{
  /// 推进器速度，从0-6分别为左上、右上、左下、右下、左侧、右侧
  int16_t thruster_speed[6];
  /// 左、右履带电机的速度
  int16_t track_speed[2];
} rov_interfaces__msg__MotorControl;

// Struct for a sequence of rov_interfaces__msg__MotorControl.
typedef struct rov_interfaces__msg__MotorControl__Sequence
{
  rov_interfaces__msg__MotorControl * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rov_interfaces__msg__MotorControl__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROV_INTERFACES__MSG__DETAIL__MOTOR_CONTROL__STRUCT_H_
