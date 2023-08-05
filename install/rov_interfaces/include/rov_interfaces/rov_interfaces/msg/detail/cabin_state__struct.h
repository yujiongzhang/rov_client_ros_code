// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rov_interfaces:msg/CabinState.idl
// generated code does not contain a copyright notice

#ifndef ROV_INTERFACES__MSG__DETAIL__CABIN_STATE__STRUCT_H_
#define ROV_INTERFACES__MSG__DETAIL__CABIN_STATE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/CabinState in the package rov_interfaces.
typedef struct rov_interfaces__msg__CabinState
{
  /// 舱内温度
  float cabin_temperature;
  /// 舱内湿度
  float cabin_humidity;
  /// 舱内水位
  float cabin_water_level;
  /// CPU温度
  float cpu_temperature;
} rov_interfaces__msg__CabinState;

// Struct for a sequence of rov_interfaces__msg__CabinState.
typedef struct rov_interfaces__msg__CabinState__Sequence
{
  rov_interfaces__msg__CabinState * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rov_interfaces__msg__CabinState__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROV_INTERFACES__MSG__DETAIL__CABIN_STATE__STRUCT_H_
