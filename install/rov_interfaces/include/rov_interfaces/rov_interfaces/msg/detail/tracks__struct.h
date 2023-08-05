// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rov_interfaces:msg/Tracks.idl
// generated code does not contain a copyright notice

#ifndef ROV_INTERFACES__MSG__DETAIL__TRACKS__STRUCT_H_
#define ROV_INTERFACES__MSG__DETAIL__TRACKS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/Tracks in the package rov_interfaces.
typedef struct rov_interfaces__msg__Tracks
{
  /// 左、右履带电机的速度反馈
  int16_t track_speed[2];
} rov_interfaces__msg__Tracks;

// Struct for a sequence of rov_interfaces__msg__Tracks.
typedef struct rov_interfaces__msg__Tracks__Sequence
{
  rov_interfaces__msg__Tracks * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rov_interfaces__msg__Tracks__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROV_INTERFACES__MSG__DETAIL__TRACKS__STRUCT_H_
