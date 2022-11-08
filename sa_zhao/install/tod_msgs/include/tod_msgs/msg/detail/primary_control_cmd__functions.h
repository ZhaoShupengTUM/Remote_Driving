// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from tod_msgs:msg/PrimaryControlCmd.idl
// generated code does not contain a copyright notice

#ifndef TOD_MSGS__MSG__DETAIL__PRIMARY_CONTROL_CMD__FUNCTIONS_H_
#define TOD_MSGS__MSG__DETAIL__PRIMARY_CONTROL_CMD__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "tod_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "tod_msgs/msg/detail/primary_control_cmd__struct.h"

/// Initialize msg/PrimaryControlCmd message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * tod_msgs__msg__PrimaryControlCmd
 * )) before or use
 * tod_msgs__msg__PrimaryControlCmd__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_tod_msgs
bool
tod_msgs__msg__PrimaryControlCmd__init(tod_msgs__msg__PrimaryControlCmd * msg);

/// Finalize msg/PrimaryControlCmd message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tod_msgs
void
tod_msgs__msg__PrimaryControlCmd__fini(tod_msgs__msg__PrimaryControlCmd * msg);

/// Create msg/PrimaryControlCmd message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * tod_msgs__msg__PrimaryControlCmd__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_tod_msgs
tod_msgs__msg__PrimaryControlCmd *
tod_msgs__msg__PrimaryControlCmd__create();

/// Destroy msg/PrimaryControlCmd message.
/**
 * It calls
 * tod_msgs__msg__PrimaryControlCmd__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tod_msgs
void
tod_msgs__msg__PrimaryControlCmd__destroy(tod_msgs__msg__PrimaryControlCmd * msg);

/// Check for msg/PrimaryControlCmd message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_tod_msgs
bool
tod_msgs__msg__PrimaryControlCmd__are_equal(const tod_msgs__msg__PrimaryControlCmd * lhs, const tod_msgs__msg__PrimaryControlCmd * rhs);

/// Copy a msg/PrimaryControlCmd message.
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
tod_msgs__msg__PrimaryControlCmd__copy(
  const tod_msgs__msg__PrimaryControlCmd * input,
  tod_msgs__msg__PrimaryControlCmd * output);

/// Initialize array of msg/PrimaryControlCmd messages.
/**
 * It allocates the memory for the number of elements and calls
 * tod_msgs__msg__PrimaryControlCmd__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_tod_msgs
bool
tod_msgs__msg__PrimaryControlCmd__Sequence__init(tod_msgs__msg__PrimaryControlCmd__Sequence * array, size_t size);

/// Finalize array of msg/PrimaryControlCmd messages.
/**
 * It calls
 * tod_msgs__msg__PrimaryControlCmd__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tod_msgs
void
tod_msgs__msg__PrimaryControlCmd__Sequence__fini(tod_msgs__msg__PrimaryControlCmd__Sequence * array);

/// Create array of msg/PrimaryControlCmd messages.
/**
 * It allocates the memory for the array and calls
 * tod_msgs__msg__PrimaryControlCmd__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_tod_msgs
tod_msgs__msg__PrimaryControlCmd__Sequence *
tod_msgs__msg__PrimaryControlCmd__Sequence__create(size_t size);

/// Destroy array of msg/PrimaryControlCmd messages.
/**
 * It calls
 * tod_msgs__msg__PrimaryControlCmd__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tod_msgs
void
tod_msgs__msg__PrimaryControlCmd__Sequence__destroy(tod_msgs__msg__PrimaryControlCmd__Sequence * array);

/// Check for msg/PrimaryControlCmd message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_tod_msgs
bool
tod_msgs__msg__PrimaryControlCmd__Sequence__are_equal(const tod_msgs__msg__PrimaryControlCmd__Sequence * lhs, const tod_msgs__msg__PrimaryControlCmd__Sequence * rhs);

/// Copy an array of msg/PrimaryControlCmd messages.
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
tod_msgs__msg__PrimaryControlCmd__Sequence__copy(
  const tod_msgs__msg__PrimaryControlCmd__Sequence * input,
  tod_msgs__msg__PrimaryControlCmd__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // TOD_MSGS__MSG__DETAIL__PRIMARY_CONTROL_CMD__FUNCTIONS_H_
