// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from rov_interfaces:srv/Led.idl
// generated code does not contain a copyright notice

#ifndef ROV_INTERFACES__SRV__DETAIL__LED__FUNCTIONS_H_
#define ROV_INTERFACES__SRV__DETAIL__LED__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "rov_interfaces/msg/rosidl_generator_c__visibility_control.h"

#include "rov_interfaces/srv/detail/led__struct.h"

/// Initialize srv/Led message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * rov_interfaces__srv__Led_Request
 * )) before or use
 * rov_interfaces__srv__Led_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_rov_interfaces
bool
rov_interfaces__srv__Led_Request__init(rov_interfaces__srv__Led_Request * msg);

/// Finalize srv/Led message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rov_interfaces
void
rov_interfaces__srv__Led_Request__fini(rov_interfaces__srv__Led_Request * msg);

/// Create srv/Led message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * rov_interfaces__srv__Led_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_rov_interfaces
rov_interfaces__srv__Led_Request *
rov_interfaces__srv__Led_Request__create();

/// Destroy srv/Led message.
/**
 * It calls
 * rov_interfaces__srv__Led_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rov_interfaces
void
rov_interfaces__srv__Led_Request__destroy(rov_interfaces__srv__Led_Request * msg);

/// Check for srv/Led message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_rov_interfaces
bool
rov_interfaces__srv__Led_Request__are_equal(const rov_interfaces__srv__Led_Request * lhs, const rov_interfaces__srv__Led_Request * rhs);

/// Copy a srv/Led message.
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
rov_interfaces__srv__Led_Request__copy(
  const rov_interfaces__srv__Led_Request * input,
  rov_interfaces__srv__Led_Request * output);

/// Initialize array of srv/Led messages.
/**
 * It allocates the memory for the number of elements and calls
 * rov_interfaces__srv__Led_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_rov_interfaces
bool
rov_interfaces__srv__Led_Request__Sequence__init(rov_interfaces__srv__Led_Request__Sequence * array, size_t size);

/// Finalize array of srv/Led messages.
/**
 * It calls
 * rov_interfaces__srv__Led_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rov_interfaces
void
rov_interfaces__srv__Led_Request__Sequence__fini(rov_interfaces__srv__Led_Request__Sequence * array);

/// Create array of srv/Led messages.
/**
 * It allocates the memory for the array and calls
 * rov_interfaces__srv__Led_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_rov_interfaces
rov_interfaces__srv__Led_Request__Sequence *
rov_interfaces__srv__Led_Request__Sequence__create(size_t size);

/// Destroy array of srv/Led messages.
/**
 * It calls
 * rov_interfaces__srv__Led_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rov_interfaces
void
rov_interfaces__srv__Led_Request__Sequence__destroy(rov_interfaces__srv__Led_Request__Sequence * array);

/// Check for srv/Led message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_rov_interfaces
bool
rov_interfaces__srv__Led_Request__Sequence__are_equal(const rov_interfaces__srv__Led_Request__Sequence * lhs, const rov_interfaces__srv__Led_Request__Sequence * rhs);

/// Copy an array of srv/Led messages.
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
rov_interfaces__srv__Led_Request__Sequence__copy(
  const rov_interfaces__srv__Led_Request__Sequence * input,
  rov_interfaces__srv__Led_Request__Sequence * output);

/// Initialize srv/Led message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * rov_interfaces__srv__Led_Response
 * )) before or use
 * rov_interfaces__srv__Led_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_rov_interfaces
bool
rov_interfaces__srv__Led_Response__init(rov_interfaces__srv__Led_Response * msg);

/// Finalize srv/Led message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rov_interfaces
void
rov_interfaces__srv__Led_Response__fini(rov_interfaces__srv__Led_Response * msg);

/// Create srv/Led message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * rov_interfaces__srv__Led_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_rov_interfaces
rov_interfaces__srv__Led_Response *
rov_interfaces__srv__Led_Response__create();

/// Destroy srv/Led message.
/**
 * It calls
 * rov_interfaces__srv__Led_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rov_interfaces
void
rov_interfaces__srv__Led_Response__destroy(rov_interfaces__srv__Led_Response * msg);

/// Check for srv/Led message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_rov_interfaces
bool
rov_interfaces__srv__Led_Response__are_equal(const rov_interfaces__srv__Led_Response * lhs, const rov_interfaces__srv__Led_Response * rhs);

/// Copy a srv/Led message.
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
rov_interfaces__srv__Led_Response__copy(
  const rov_interfaces__srv__Led_Response * input,
  rov_interfaces__srv__Led_Response * output);

/// Initialize array of srv/Led messages.
/**
 * It allocates the memory for the number of elements and calls
 * rov_interfaces__srv__Led_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_rov_interfaces
bool
rov_interfaces__srv__Led_Response__Sequence__init(rov_interfaces__srv__Led_Response__Sequence * array, size_t size);

/// Finalize array of srv/Led messages.
/**
 * It calls
 * rov_interfaces__srv__Led_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rov_interfaces
void
rov_interfaces__srv__Led_Response__Sequence__fini(rov_interfaces__srv__Led_Response__Sequence * array);

/// Create array of srv/Led messages.
/**
 * It allocates the memory for the array and calls
 * rov_interfaces__srv__Led_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_rov_interfaces
rov_interfaces__srv__Led_Response__Sequence *
rov_interfaces__srv__Led_Response__Sequence__create(size_t size);

/// Destroy array of srv/Led messages.
/**
 * It calls
 * rov_interfaces__srv__Led_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rov_interfaces
void
rov_interfaces__srv__Led_Response__Sequence__destroy(rov_interfaces__srv__Led_Response__Sequence * array);

/// Check for srv/Led message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_rov_interfaces
bool
rov_interfaces__srv__Led_Response__Sequence__are_equal(const rov_interfaces__srv__Led_Response__Sequence * lhs, const rov_interfaces__srv__Led_Response__Sequence * rhs);

/// Copy an array of srv/Led messages.
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
rov_interfaces__srv__Led_Response__Sequence__copy(
  const rov_interfaces__srv__Led_Response__Sequence * input,
  rov_interfaces__srv__Led_Response__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // ROV_INTERFACES__SRV__DETAIL__LED__FUNCTIONS_H_
