// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from rov_interfaces:srv/ServoMotor.idl
// generated code does not contain a copyright notice
#include "rov_interfaces/srv/detail/servo_motor__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

bool
rov_interfaces__srv__ServoMotor_Request__init(rov_interfaces__srv__ServoMotor_Request * msg)
{
  if (!msg) {
    return false;
  }
  // angle
  return true;
}

void
rov_interfaces__srv__ServoMotor_Request__fini(rov_interfaces__srv__ServoMotor_Request * msg)
{
  if (!msg) {
    return;
  }
  // angle
}

bool
rov_interfaces__srv__ServoMotor_Request__are_equal(const rov_interfaces__srv__ServoMotor_Request * lhs, const rov_interfaces__srv__ServoMotor_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // angle
  if (lhs->angle != rhs->angle) {
    return false;
  }
  return true;
}

bool
rov_interfaces__srv__ServoMotor_Request__copy(
  const rov_interfaces__srv__ServoMotor_Request * input,
  rov_interfaces__srv__ServoMotor_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // angle
  output->angle = input->angle;
  return true;
}

rov_interfaces__srv__ServoMotor_Request *
rov_interfaces__srv__ServoMotor_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rov_interfaces__srv__ServoMotor_Request * msg = (rov_interfaces__srv__ServoMotor_Request *)allocator.allocate(sizeof(rov_interfaces__srv__ServoMotor_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(rov_interfaces__srv__ServoMotor_Request));
  bool success = rov_interfaces__srv__ServoMotor_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
rov_interfaces__srv__ServoMotor_Request__destroy(rov_interfaces__srv__ServoMotor_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    rov_interfaces__srv__ServoMotor_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
rov_interfaces__srv__ServoMotor_Request__Sequence__init(rov_interfaces__srv__ServoMotor_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rov_interfaces__srv__ServoMotor_Request * data = NULL;

  if (size) {
    data = (rov_interfaces__srv__ServoMotor_Request *)allocator.zero_allocate(size, sizeof(rov_interfaces__srv__ServoMotor_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = rov_interfaces__srv__ServoMotor_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        rov_interfaces__srv__ServoMotor_Request__fini(&data[i - 1]);
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
rov_interfaces__srv__ServoMotor_Request__Sequence__fini(rov_interfaces__srv__ServoMotor_Request__Sequence * array)
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
      rov_interfaces__srv__ServoMotor_Request__fini(&array->data[i]);
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

rov_interfaces__srv__ServoMotor_Request__Sequence *
rov_interfaces__srv__ServoMotor_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rov_interfaces__srv__ServoMotor_Request__Sequence * array = (rov_interfaces__srv__ServoMotor_Request__Sequence *)allocator.allocate(sizeof(rov_interfaces__srv__ServoMotor_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = rov_interfaces__srv__ServoMotor_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
rov_interfaces__srv__ServoMotor_Request__Sequence__destroy(rov_interfaces__srv__ServoMotor_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    rov_interfaces__srv__ServoMotor_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
rov_interfaces__srv__ServoMotor_Request__Sequence__are_equal(const rov_interfaces__srv__ServoMotor_Request__Sequence * lhs, const rov_interfaces__srv__ServoMotor_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!rov_interfaces__srv__ServoMotor_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
rov_interfaces__srv__ServoMotor_Request__Sequence__copy(
  const rov_interfaces__srv__ServoMotor_Request__Sequence * input,
  rov_interfaces__srv__ServoMotor_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(rov_interfaces__srv__ServoMotor_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    rov_interfaces__srv__ServoMotor_Request * data =
      (rov_interfaces__srv__ServoMotor_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!rov_interfaces__srv__ServoMotor_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          rov_interfaces__srv__ServoMotor_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!rov_interfaces__srv__ServoMotor_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `result`
#include "rosidl_runtime_c/string_functions.h"

bool
rov_interfaces__srv__ServoMotor_Response__init(rov_interfaces__srv__ServoMotor_Response * msg)
{
  if (!msg) {
    return false;
  }
  // result
  if (!rosidl_runtime_c__String__init(&msg->result)) {
    rov_interfaces__srv__ServoMotor_Response__fini(msg);
    return false;
  }
  return true;
}

void
rov_interfaces__srv__ServoMotor_Response__fini(rov_interfaces__srv__ServoMotor_Response * msg)
{
  if (!msg) {
    return;
  }
  // result
  rosidl_runtime_c__String__fini(&msg->result);
}

bool
rov_interfaces__srv__ServoMotor_Response__are_equal(const rov_interfaces__srv__ServoMotor_Response * lhs, const rov_interfaces__srv__ServoMotor_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // result
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->result), &(rhs->result)))
  {
    return false;
  }
  return true;
}

bool
rov_interfaces__srv__ServoMotor_Response__copy(
  const rov_interfaces__srv__ServoMotor_Response * input,
  rov_interfaces__srv__ServoMotor_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // result
  if (!rosidl_runtime_c__String__copy(
      &(input->result), &(output->result)))
  {
    return false;
  }
  return true;
}

rov_interfaces__srv__ServoMotor_Response *
rov_interfaces__srv__ServoMotor_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rov_interfaces__srv__ServoMotor_Response * msg = (rov_interfaces__srv__ServoMotor_Response *)allocator.allocate(sizeof(rov_interfaces__srv__ServoMotor_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(rov_interfaces__srv__ServoMotor_Response));
  bool success = rov_interfaces__srv__ServoMotor_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
rov_interfaces__srv__ServoMotor_Response__destroy(rov_interfaces__srv__ServoMotor_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    rov_interfaces__srv__ServoMotor_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
rov_interfaces__srv__ServoMotor_Response__Sequence__init(rov_interfaces__srv__ServoMotor_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rov_interfaces__srv__ServoMotor_Response * data = NULL;

  if (size) {
    data = (rov_interfaces__srv__ServoMotor_Response *)allocator.zero_allocate(size, sizeof(rov_interfaces__srv__ServoMotor_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = rov_interfaces__srv__ServoMotor_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        rov_interfaces__srv__ServoMotor_Response__fini(&data[i - 1]);
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
rov_interfaces__srv__ServoMotor_Response__Sequence__fini(rov_interfaces__srv__ServoMotor_Response__Sequence * array)
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
      rov_interfaces__srv__ServoMotor_Response__fini(&array->data[i]);
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

rov_interfaces__srv__ServoMotor_Response__Sequence *
rov_interfaces__srv__ServoMotor_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rov_interfaces__srv__ServoMotor_Response__Sequence * array = (rov_interfaces__srv__ServoMotor_Response__Sequence *)allocator.allocate(sizeof(rov_interfaces__srv__ServoMotor_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = rov_interfaces__srv__ServoMotor_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
rov_interfaces__srv__ServoMotor_Response__Sequence__destroy(rov_interfaces__srv__ServoMotor_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    rov_interfaces__srv__ServoMotor_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
rov_interfaces__srv__ServoMotor_Response__Sequence__are_equal(const rov_interfaces__srv__ServoMotor_Response__Sequence * lhs, const rov_interfaces__srv__ServoMotor_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!rov_interfaces__srv__ServoMotor_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
rov_interfaces__srv__ServoMotor_Response__Sequence__copy(
  const rov_interfaces__srv__ServoMotor_Response__Sequence * input,
  rov_interfaces__srv__ServoMotor_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(rov_interfaces__srv__ServoMotor_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    rov_interfaces__srv__ServoMotor_Response * data =
      (rov_interfaces__srv__ServoMotor_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!rov_interfaces__srv__ServoMotor_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          rov_interfaces__srv__ServoMotor_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!rov_interfaces__srv__ServoMotor_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
