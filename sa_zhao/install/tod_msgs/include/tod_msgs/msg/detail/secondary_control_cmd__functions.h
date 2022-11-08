// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from tod_msgs:msg/SecondaryControlCmd.idl
// generated code does not contain a copyright notice

#ifndef TOD_MSGS__MSG__DETAIL__SECONDARY_CONTROL_CMD__FUNCTIONS_H_
#define TOD_MSGS__MSG__DETAIL__SECONDARY_CONTROL_CMD__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "tod_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "tod_msgs/msg/detail/secondary_control_cmd__struct.h"

/// Initialize msg/SecondaryControlCmd message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * tod_msgs__msg__SecondaryControlCmd
 * )) before or use
 * tod_msgs__msg__SecondaryControlCmd__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_tod_msgs
bool
tod_msgs__msg__SecondaryControlCmd__init(tod_msgs__msg__SecondaryControlCmd * msg);

/// Finalize msg/SecondaryControlCmd message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tod_msgs
void
tod_msgs__msg__SecondaryControlCmd__fini(tod_msgs__msg__SecondaryControlCmd * msg);

/// Create msg/SecondaryControlCmd message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * tod_msgs__msg__SecondaryControlCmd__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_tod_msgs
tod_msgs__msg__SecondaryControlCmd *
tod_msgs__msg__SecondaryControlCmd__create();

/// Destroy msg/SecondaryControlCmd message.
/**
 * It calls
 * tod_msgs__msg__SecondaryControlCmd__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tod_msgs
void
tod_msgs__msg__SecondaryControlCmd__destroy(tod_msgs__msg__SecondaryControlCmd * msg);

/// Check for msg/SecondaryControlCmd message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_tod_msgs
bool
tod_msgs__msg__SecondaryControlCmd__are_equal(const tod_msgs__msg__SecondaryControlCmd * lhs, const tod_msgs__msg__SecondaryControlCmd * rhs);

/// Copy a msg/SecondaryControlCmd message.
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
ROSIDL_GENERATOR_C_PUBLIC_tod_msgs
bool
tod_msgs__msg__SecondaryControlCmd__copy(
  const tod_msgs__msg__SecondaryControlCmd * input,
  tod_msgs__msg__SecondaryControlCmd * output);

/// Initialize array of msg/SecondaryControlCmd messages.
/**
 * It allocates the memory for the number of elements and calls
 * tod_msgs__msg__SecondaryControlCmd__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_tod_msgs
bool
tod_msgs__msg__SecondaryControlCmd__Sequence__init(tod_msgs__msg__SecondaryControlCmd__Sequence * array, size_t size);

/// Finalize array of msg/SecondaryControlCmd messages.
/**
 * It calls
 * tod_msgs__msg__SecondaryControlCmd__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tod_msgs
void
tod_msgs__msg__SecondaryControlCmd__Sequence__fini(tod_msgs__msg__SecondaryControlCmd__Sequence * array);

/// Create array of msg/SecondaryControlCmd messages.
/**
 * It allocates the memory for the array and calls
 * tod_msgs__msg__SecondaryControlCmd__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_tod_msgs
tod_msgs__msg__SecondaryControlCmd__Sequence *
tod_msgs__msg__SecondaryControlCmd__Sequence__create(size_t size);

/// Destroy array of msg/SecondaryControlCmd messages.
/**
 * It calls
 * tod_msgs__msg__SecondaryControlCmd__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tod_msgs
void
tod_msgs__msg__SecondaryControlCmd__Sequence__destroy(tod_msgs__msg__SecondaryControlCmd__Sequence * array);

/// Check for msg/SecondaryControlCmd message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_tod_msgs
bool
tod_msgs__msg__SecondaryControlCmd__Sequence__are_equal(const tod_msgs__msg__SecondaryControlCmd__Sequence * lhs, const tod_msgs__msg__SecondaryControlCmd__Sequence * rhs);

/// Copy an array of msg/SecondaryControlCmd messages.
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
ROSIDL_GENERATOR_C_PUBLIC_tod_msgs
bool
tod_msgs__msg__SecondaryControlCmd__Sequence__copy(
  const tod_msgs__msg__SecondaryControlCmd__Sequence * input,
  tod_msgs__msg__SecondaryControlCmd__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // TOD_MSGS__MSG__DETAIL__SECONDARY_CONTROL_CMD__FUNCTIONS_H_
