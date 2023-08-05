// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from rov_interfaces:msg/Thrusters.idl
// generated code does not contain a copyright notice
#include "rov_interfaces/msg/detail/thrusters__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `upper_left`
// Member `upper_right`
// Member `lower_right`
// Member `lower_left`
// Member `left`
// Member `right`
#include "rov_interfaces/msg/detail/thruster__functions.h"

bool
rov_interfaces__msg__Thrusters__init(rov_interfaces__msg__Thrusters * msg)
{
  if (!msg) {
    return false;
  }
  // upper_left
  if (!rov_interfaces__msg__Thruster__init(&msg->upper_left)) {
    rov_interfaces__msg__Thrusters__fini(msg);
    return false;
  }
  // upper_right
  if (!rov_interfaces__msg__Thruster__init(&msg->upper_right)) {
    rov_interfaces__msg__Thrusters__fini(msg);
    return false;
  }
  // lower_right
  if (!rov_interfaces__msg__Thruster__init(&msg->lower_right)) {
    rov_interfaces__msg__Thrusters__fini(msg);
    return false;
  }
  // lower_left
  if (!rov_interfaces__msg__Thruster__init(&msg->lower_left)) {
    rov_interfaces__msg__Thrusters__fini(msg);
    return false;
  }
  // left
  if (!rov_interfaces__msg__Thruster__init(&msg->left)) {
    rov_interfaces__msg__Thrusters__fini(msg);
    return false;
  }
  // right
  if (!rov_interfaces__msg__Thruster__init(&msg->right)) {
    rov_interfaces__msg__Thrusters__fini(msg);
    return false;
  }
  return true;
}

void
rov_interfaces__msg__Thrusters__fini(rov_interfaces__msg__Thrusters * msg)
{
  if (!msg) {
    return;
  }
  // upper_left
  rov_interfaces__msg__Thruster__fini(&msg->upper_left);
  // upper_right
  rov_interfaces__msg__Thruster__fini(&msg->upper_right);
  // lower_right
  rov_interfaces__msg__Thruster__fini(&msg->lower_right);
  // lower_left
  rov_interfaces__msg__Thruster__fini(&msg->lower_left);
  // left
  rov_interfaces__msg__Thruster__fini(&msg->left);
  // right
  rov_interfaces__msg__Thruster__fini(&msg->right);
}

bool
rov_interfaces__msg__Thrusters__are_equal(const rov_interfaces__msg__Thrusters * lhs, const rov_interfaces__msg__Thrusters * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // upper_left
  if (!rov_interfaces__msg__Thruster__are_equal(
      &(lhs->upper_left), &(rhs->upper_left)))
  {
    return false;
  }
  // upper_right
  if (!rov_interfaces__msg__Thruster__are_equal(
      &(lhs->upper_right), &(rhs->upper_right)))
  {
    return false;
  }
  // lower_right
  if (!rov_interfaces__msg__Thruster__are_equal(
      &(lhs->lower_right), &(rhs->lower_right)))
  {
    return false;
  }
  // lower_left
  if (!rov_interfaces__msg__Thruster__are_equal(
      &(lhs->lower_left), &(rhs->lower_left)))
  {
    return false;
  }
  // left
  if (!rov_interfaces__msg__Thruster__are_equal(
      &(lhs->left), &(rhs->left)))
  {
    return false;
  }
  // right
  if (!rov_interfaces__msg__Thruster__are_equal(
      &(lhs->right), &(rhs->right)))
  {
    return false;
  }
  return true;
}

bool
rov_interfaces__msg__Thrusters__copy(
  const rov_interfaces__msg__Thrusters * input,
  rov_interfaces__msg__Thrusters * output)
{
  if (!input || !output) {
    return false;
  }
  // upper_left
  if (!rov_interfaces__msg__Thruster__copy(
      &(input->upper_left), &(output->upper_left)))
  {
    return false;
  }
  // upper_right
  if (!rov_interfaces__msg__Thruster__copy(
      &(input->upper_right), &(output->upper_right)))
  {
    return false;
  }
  // lower_right
  if (!rov_interfaces__msg__Thruster__copy(
      &(input->lower_right), &(output->lower_right)))
  {
    return false;
  }
  // lower_left
  if (!rov_interfaces__msg__Thruster__copy(
      &(input->lower_left), &(output->lower_left)))
  {
    return false;
  }
  // left
  if (!rov_interfaces__msg__Thruster__copy(
      &(input->left), &(output->left)))
  {
    return false;
  }
  // right
  if (!rov_interfaces__msg__Thruster__copy(
      &(input->right), &(output->right)))
  {
    return false;
  }
  return true;
}

rov_interfaces__msg__Thrusters *
rov_interfaces__msg__Thrusters__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rov_interfaces__msg__Thrusters * msg = (rov_interfaces__msg__Thrusters *)allocator.allocate(sizeof(rov_interfaces__msg__Thrusters), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(rov_interfaces__msg__Thrusters));
  bool success = rov_interfaces__msg__Thrusters__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
rov_interfaces__msg__Thrusters__destroy(rov_interfaces__msg__Thrusters * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    rov_interfaces__msg__Thrusters__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
rov_interfaces__msg__Thrusters__Sequence__init(rov_interfaces__msg__Thrusters__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rov_interfaces__msg__Thrusters * data = NULL;

  if (size) {
    data = (rov_interfaces__msg__Thrusters *)allocator.zero_allocate(size, sizeof(rov_interfaces__msg__Thrusters), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = rov_interfaces__msg__Thrusters__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        rov_interfaces__msg__Thrusters__fini(&data[i - 1]);
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
rov_interfaces__msg__Thrusters__Sequence__fini(rov_interfaces__msg__Thrusters__Sequence * array)
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
      rov_interfaces__msg__Thrusters__fini(&array->data[i]);
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

rov_interfaces__msg__Thrusters__Sequence *
rov_interfaces__msg__Thrusters__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rov_interfaces__msg__Thrusters__Sequence * array = (rov_interfaces__msg__Thrusters__Sequence *)allocator.allocate(sizeof(rov_interfaces__msg__Thrusters__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = rov_interfaces__msg__Thrusters__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
rov_interfaces__msg__Thrusters__Sequence__destroy(rov_interfaces__msg__Thrusters__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    rov_interfaces__msg__Thrusters__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
rov_interfaces__msg__Thrusters__Sequence__are_equal(const rov_interfaces__msg__Thrusters__Sequence * lhs, const rov_interfaces__msg__Thrusters__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!rov_interfaces__msg__Thrusters__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
rov_interfaces__msg__Thrusters__Sequence__copy(
  const rov_interfaces__msg__Thrusters__Sequence * input,
  rov_interfaces__msg__Thrusters__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(rov_interfaces__msg__Thrusters);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    rov_interfaces__msg__Thrusters * data =
      (rov_interfaces__msg__Thrusters *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!rov_interfaces__msg__Thrusters__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          rov_interfaces__msg__Thrusters__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!rov_interfaces__msg__Thrusters__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
