// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rov_interfaces:msg/Thruster.idl
// generated code does not contain a copyright notice

#ifndef ROV_INTERFACES__MSG__DETAIL__THRUSTER__STRUCT_H_
#define ROV_INTERFACES__MSG__DETAIL__THRUSTER__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/Thruster in the package rov_interfaces.
typedef struct rov_interfaces__msg__Thruster
{
  /// 电机转速
  uint16_t speed_rpm;
  /// 母线电压
  float given_voltage;
  /// 母线电流
  float given_current;
  /// 控制器温度
  uint8_t controller_temperate;
  /// 电机温度
  uint8_t motor_temperate;
  /// 电机状态
  uint8_t motor_status;
} rov_interfaces__msg__Thruster;

// Struct for a sequence of rov_interfaces__msg__Thruster.
typedef struct rov_interfaces__msg__Thruster__Sequence
{
  rov_interfaces__msg__Thruster * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rov_interfaces__msg__Thruster__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROV_INTERFACES__MSG__DETAIL__THRUSTER__STRUCT_H_
