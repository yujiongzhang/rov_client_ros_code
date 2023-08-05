// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from rov_interfaces:msg/MotorControl.idl
// generated code does not contain a copyright notice

#ifndef ROV_INTERFACES__MSG__DETAIL__MOTOR_CONTROL__FUNCTIONS_H_
#define ROV_INTERFACES__MSG__DETAIL__MOTOR_CONTROL__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "rov_interfaces/msg/rosidl_generator_c__visibility_control.h"

#include "rov_interfaces/msg/detail/motor_control__struct.h"

/// Initialize msg/MotorControl message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * rov_interfaces__msg__MotorControl
 * )) before or use
 * rov_interfaces__msg__MotorControl__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_rov_interfaces
bool
rov_interfaces__msg__MotorControl__init(rov_interfaces__msg__MotorControl * msg);

/// Finalize msg/MotorControl message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rov_interfaces
void
rov_interfaces__msg__MotorControl__fini(rov_interfaces__msg__MotorControl * msg);

/// Create msg/MotorControl message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * rov_interfaces__msg__MotorControl__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_rov_interfaces
rov_interfaces__msg__MotorControl *
rov_interfaces__msg__MotorControl__create();

/// Destroy msg/MotorControl message.
/**
 * It calls
 * rov_interfaces__msg__MotorControl__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rov_interfaces
void
rov_interfaces__msg__MotorControl__destroy(rov_interfaces__msg__MotorControl * msg);

/// Check for msg/MotorControl message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_rov_interfaces
bool
rov_interfaces__msg__MotorControl__are_equal(const rov_interfaces__msg__MotorControl * lhs, const rov_interfaces__msg__MotorControl * rhs);

/// Copy a msg/MotorControl message.
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
rov_interfaces__msg__MotorControl__copy(
  const rov_interfaces__msg__MotorControl * input,
  rov_interfaces__msg__MotorControl * output);

/// Initialize array of msg/MotorControl messages.
/**
 * It allocates the memory for the number of elements and calls
 * rov_interfaces__msg__MotorControl__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_rov_interfaces
bool
rov_interfaces__msg__MotorControl__Sequence__init(rov_interfaces__msg__MotorControl__Sequence * array, size_t size);

/// Finalize array of msg/MotorControl messages.
/**
 * It calls
 * rov_interfaces__msg__MotorControl__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rov_interfaces
void
rov_interfaces__msg__MotorControl__Sequence__fini(rov_interfaces__msg__MotorControl__Sequence * array);

/// Create array of msg/MotorControl messages.
/**
 * It allocates the memory for the array and calls
 * rov_interfaces__msg__MotorControl__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_rov_interfaces
rov_interfaces__msg__MotorControl__Sequence *
rov_interfaces__msg__MotorControl__Sequence__create(size_t size);

/// Destroy array of msg/MotorControl messages.
/**
 * It calls
 * rov_interfaces__msg__MotorControl__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rov_interfaces
void
rov_interfaces__msg__MotorControl__Sequence__destroy(rov_interfaces__msg__MotorControl__Sequence * array);

/// Check for msg/MotorControl message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_rov_interfaces
bool
rov_interfaces__msg__MotorControl__Sequence__are_equal(const rov_interfaces__msg__MotorControl__Sequence * lhs, const rov_interfaces__msg__MotorControl__Sequence * rhs);

/// Copy an array of msg/MotorControl messages.
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
rov_interfaces__msg__MotorControl__Sequence__copy(
  const rov_interfaces__msg__MotorControl__Sequence * input,
  rov_interfaces__msg__MotorControl__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // ROV_INTERFACES__MSG__DETAIL__MOTOR_CONTROL__FUNCTIONS_H_
