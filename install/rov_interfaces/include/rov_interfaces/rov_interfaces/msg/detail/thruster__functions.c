// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from rov_interfaces:msg/Thruster.idl
// generated code does not contain a copyright notice
#include "rov_interfaces/msg/detail/thruster__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
rov_interfaces__msg__Thruster__init(rov_interfaces__msg__Thruster * msg)
{
  if (!msg) {
    return false;
  }
  // speed_rpm
  // given_voltage
  // given_current
  // controller_temperate
  // motor_temperate
  // motor_status
  return true;
}

void
rov_interfaces__msg__Thruster__fini(rov_interfaces__msg__Thruster * msg)
{
  if (!msg) {
    return;
  }
  // speed_rpm
  // given_voltage
  // given_current
  // controller_temperate
  // motor_temperate
  // motor_status
}

bool
rov_interfaces__msg__Thruster__are_equal(const rov_interfaces__msg__Thruster * lhs, const rov_interfaces__msg__Thruster * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // speed_rpm
  if (lhs->speed_rpm != rhs->speed_rpm) {
    return false;
  }
  // given_voltage
  if (lhs->given_voltage != rhs->given_voltage) {
    return false;
  }
  // given_current
  if (lhs->given_current != rhs->given_current) {
    return false;
  }
  // controller_temperate
  if (lhs->controller_temperate != rhs->controller_temperate) {
    return false;
  }
  // motor_temperate
  if (lhs->motor_temperate != rhs->motor_temperate) {
    return false;
  }
  // motor_status
  if (lhs->motor_status != rhs->motor_status) {
    return false;
  }
  return true;
}

bool
rov_interfaces__msg__Thruster__copy(
  const rov_interfaces__msg__Thruster * input,
  rov_interfaces__msg__Thruster * output)
{
  if (!input || !output) {
    return false;
  }
  // speed_rpm
  output->speed_rpm = input->speed_rpm;
  // given_voltage
  output->given_voltage = input->given_voltage;
  // given_current
  output->given_current = input->given_current;
  // controller_temperate
  output->controller_temperate = input->controller_temperate;
  // motor_temperate
  output->motor_temperate = input->motor_temperate;
  // motor_status
  output->motor_status = input->motor_status;
  return true;
}

rov_interfaces__msg__Thruster *
rov_interfaces__msg__Thruster__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rov_interfaces__msg__Thruster * msg = (rov_interfaces__msg__Thruster *)allocator.allocate(sizeof(rov_interfaces__msg__Thruster), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(rov_interfaces__msg__Thruster));
  bool success = rov_interfaces__msg__Thruster__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
rov_interfaces__msg__Thruster__destroy(rov_interfaces__msg__Thruster * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    rov_interfaces__msg__Thruster__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
rov_interfaces__msg__Thruster__Sequence__init(rov_interfaces__msg__Thruster__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rov_interfaces__msg__Thruster * data = NULL;

  if (size) {
    data = (rov_interfaces__msg__Thruster *)allocator.zero_allocate(size, sizeof(rov_interfaces__msg__Thruster), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = rov_interfaces__msg__Thruster__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        rov_interfaces__msg__Thruster__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
rov_interfaces__msg__Thruster__Sequence__fini(rov_interfaces__msg__Thruster__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      rov_interfaces__msg__Thruster__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

rov_interfaces__msg__Thruster__Sequence *
rov_interfaces__msg__Thruster__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rov_interfaces__msg__Thruster__Sequence * array = (rov_interfaces__msg__Thruster__Sequence *)allocator.allocate(sizeof(rov_interfaces__msg__Thruster__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = rov_interfaces__msg__Thruster__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
rov_interfaces__msg__Thruster__Sequence__destroy(rov_interfaces__msg__Thruster__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    rov_interfaces__msg__Thruster__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
rov_interfaces__msg__Thruster__Sequence__are_equal(const rov_interfaces__msg__Thruster__Sequence * lhs, const rov_interfaces__msg__Thruster__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!rov_interfaces__msg__Thruster__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
rov_interfaces__msg__Thruster__Sequence__copy(
  const rov_interfaces__msg__Thruster__Sequence * input,
  rov_interfaces__msg__Thruster__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(rov_interfaces__msg__Thruster);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    rov_interfaces__msg__Thruster * data =
      (rov_interfaces__msg__Thruster *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!rov_interfaces__msg__Thruster__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          rov_interfaces__msg__Thruster__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!rov_interfaces__msg__Thruster__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
