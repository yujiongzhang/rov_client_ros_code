// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from rov_interfaces:msg/Thruster.idl
// generated code does not contain a copyright notice

#ifndef ROV_INTERFACES__MSG__DETAIL__THRUSTER__FUNCTIONS_H_
#define ROV_INTERFACES__MSG__DETAIL__THRUSTER__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "rov_interfaces/msg/rosidl_generator_c__visibility_control.h"

#include "rov_interfaces/msg/detail/thruster__struct.h"

/// Initialize msg/Thruster message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * rov_interfaces__msg__Thruster
 * )) before or use
 * rov_interfaces__msg__Thruster__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_rov_interfaces
bool
rov_interfaces__msg__Thruster__init(rov_interfaces__msg__Thruster * msg);

/// Finalize msg/Thruster message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rov_interfaces
void
rov_interfaces__msg__Thruster__fini(rov_interfaces__msg__Thruster * msg);

/// Create msg/Thruster message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * rov_interfaces__msg__Thruster__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_rov_interfaces
rov_interfaces__msg__Thruster *
rov_interfaces__msg__Thruster__create();

/// Destroy msg/Thruster message.
/**
 * It calls
 * rov_interfaces__msg__Thruster__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rov_interfaces
void
rov_interfaces__msg__Thruster__destroy(rov_interfaces__msg__Thruster * msg);

/// Check for msg/Thruster message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_rov_interfaces
bool
rov_interfaces__msg__Thruster__are_equal(const rov_interfaces__msg__Thruster * lhs, const rov_interfaces__msg__Thruster * rhs);

/// Copy a msg/Thruster message.
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
rov_interfaces__msg__Thruster__copy(
  const rov_interfaces__msg__Thruster * input,
  rov_interfaces__msg__Thruster * output);

/// Initialize array of msg/Thruster messages.
/**
 * It allocates the memory for the number of elements and calls
 * rov_interfaces__msg__Thruster__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_rov_interfaces
bool
rov_interfaces__msg__Thruster__Sequence__init(rov_interfaces__msg__Thruster__Sequence * array, size_t size);

/// Finalize array of msg/Thruster messages.
/**
 * It calls
 * rov_interfaces__msg__Thruster__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rov_interfaces
void
rov_interfaces__msg__Thruster__Sequence__fini(rov_interfaces__msg__Thruster__Sequence * array);

/// Create array of msg/Thruster messages.
/**
 * It allocates the memory for the array and calls
 * rov_interfaces__msg__Thruster__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_rov_interfaces
rov_interfaces__msg__Thruster__Sequence *
rov_interfaces__msg__Thruster__Sequence__create(size_t size);

/// Destroy array of msg/Thruster messages.
/**
 * It calls
 * rov_interfaces__msg__Thruster__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rov_interfaces
void
rov_interfaces__msg__Thruster__Sequence__destroy(rov_interfaces__msg__Thruster__Sequence * array);

/// Check for msg/Thruster message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_rov_interfaces
bool
rov_interfaces__msg__Thruster__Sequence__are_equal(const rov_interfaces__msg__Thruster__Sequence * lhs, const rov_interfaces__msg__Thruster__Sequence * rhs);

/// Copy an array of msg/Thruster messages.
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
rov_interfaces__msg__Thruster__Sequence__copy(
  const rov_interfaces__msg__Thruster__Sequence * input,
  rov_interfaces__msg__Thruster__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // ROV_INTERFACES__MSG__DETAIL__THRUSTER__FUNCTIONS_H_
