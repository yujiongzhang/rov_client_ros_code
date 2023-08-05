// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from rov_interfaces:msg/Thrusters.idl
// generated code does not contain a copyright notice

#ifndef ROV_INTERFACES__MSG__DETAIL__THRUSTERS__FUNCTIONS_H_
#define ROV_INTERFACES__MSG__DETAIL__THRUSTERS__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "rov_interfaces/msg/rosidl_generator_c__visibility_control.h"

#include "rov_interfaces/msg/detail/thrusters__struct.h"

/// Initialize msg/Thrusters message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * rov_interfaces__msg__Thrusters
 * )) before or use
 * rov_interfaces__msg__Thrusters__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_rov_interfaces
bool
rov_interfaces__msg__Thrusters__init(rov_interfaces__msg__Thrusters * msg);

/// Finalize msg/Thrusters message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rov_interfaces
void
rov_interfaces__msg__Thrusters__fini(rov_interfaces__msg__Thrusters * msg);

/// Create msg/Thrusters message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * rov_interfaces__msg__Thrusters__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_rov_interfaces
rov_interfaces__msg__Thrusters *
rov_interfaces__msg__Thrusters__create();

/// Destroy msg/Thrusters message.
/**
 * It calls
 * rov_interfaces__msg__Thrusters__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rov_interfaces
void
rov_interfaces__msg__Thrusters__destroy(rov_interfaces__msg__Thrusters * msg);

/// Check for msg/Thrusters message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_rov_interfaces
bool
rov_interfaces__msg__Thrusters__are_equal(const rov_interfaces__msg__Thrusters * lhs, const rov_interfaces__msg__Thrusters * rhs);

/// Copy a msg/Thrusters message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_rov_interfaces
bool
rov_interfaces__msg__Thrusters__copy(
  const rov_interfaces__msg__Thrusters * input,
  rov_interfaces__msg__Thrusters * output);

/// Initialize array of msg/Thrusters messages.
/**
 * It allocates the memory for the number of elements and calls
 * rov_interfaces__msg__Thrusters__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_rov_interfaces
bool
rov_interfaces__msg__Thrusters__Sequence__init(rov_interfaces__msg__Thrusters__Sequence * array, size_t size);

/// Finalize array of msg/Thrusters messages.
/**
 * It calls
 * rov_interfaces__msg__Thrusters__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rov_interfaces
void
rov_interfaces__msg__Thrusters__Sequence__fini(rov_interfaces__msg__Thrusters__Sequence * array);

/// Create array of msg/Thrusters messages.
/**
 * It allocates the memory for the array and calls
 * rov_interfaces__msg__Thrusters__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_rov_interfaces
rov_interfaces__msg__Thrusters__Sequence *
rov_interfaces__msg__Thrusters__Sequence__create(size_t size);

/// Destroy array of msg/Thrusters messages.
/**
 * It calls
 * rov_interfaces__msg__Thrusters__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rov_interfaces
void
rov_interfaces__msg__Thrusters__Sequence__destroy(rov_interfaces__msg__Thrusters__Sequence * array);

/// Check for msg/Thrusters message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_rov_interfaces
bool
rov_interfaces__msg__Thrusters__Sequence__are_equal(const rov_interfaces__msg__Thrusters__Sequence * lhs, const rov_interfaces__msg__Thrusters__Sequence * rhs);

/// Copy an array of msg/Thrusters messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_rov_interfaces
bool
rov_interfaces__msg__Thrusters__Sequence__copy(
  const rov_interfaces__msg__Thrusters__Sequence * input,
  rov_interfaces__msg__Thrusters__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // ROV_INTERFACES__MSG__DETAIL__THRUSTERS__FUNCTIONS_H_
