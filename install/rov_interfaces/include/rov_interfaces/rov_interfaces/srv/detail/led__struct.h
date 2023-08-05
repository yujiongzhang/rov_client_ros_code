﻿// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rov_interfaces:srv/Led.idl
// generated code does not contain a copyright notice

#ifndef ROV_INTERFACES__SRV__DETAIL__LED__STRUCT_H_
#define ROV_INTERFACES__SRV__DETAIL__LED__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/Led in the package rov_interfaces.
typedef struct rov_interfaces__srv__Led_Request
{
  /// LED 亮度
  uint8_t bright;
} rov_interfaces__srv__Led_Request;

// Struct for a sequence of rov_interfaces__srv__Led_Request.
typedef struct rov_interfaces__srv__Led_Request__Sequence
{
  rov_interfaces__srv__Led_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rov_interfaces__srv__Led_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'result'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/Led in the package rov_interfaces.
typedef struct rov_interfaces__srv__Led_Response
{
  /// 反馈结果
  rosidl_runtime_c__String result;
} rov_interfaces__srv__Led_Response;

// Struct for a sequence of rov_interfaces__srv__Led_Response.
typedef struct rov_interfaces__srv__Led_Response__Sequence
{
  rov_interfaces__srv__Led_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rov_interfaces__srv__Led_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROV_INTERFACES__SRV__DETAIL__LED__STRUCT_H_
