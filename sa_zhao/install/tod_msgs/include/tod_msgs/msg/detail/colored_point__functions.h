// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from tod_msgs:msg/ColoredPoint.idl
// generated code does not contain a copyright notice

#ifndef TOD_MSGS__MSG__DETAIL__COLORED_POINT__FUNCTIONS_H_
#define TOD_MSGS__MSG__DETAIL__COLORED_POINT__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "tod_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "tod_msgs/msg/detail/colored_point__struct.h"

/// Initialize msg/ColoredPoint message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * tod_msgs__msg__ColoredPoint
 * )) before or use
 * tod_msgs__msg__ColoredPoint__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_tod_msgs
bool
tod_msgs__msg__ColoredPoint__init(tod_msgs__msg__ColoredPoint * msg);

/// Finalize msg/ColoredPoint message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tod_msgs
void
tod_msgs__msg__ColoredPoint__fini(tod_msgs__msg__ColoredPoint * msg);

/// Create msg/ColoredPoint message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * tod_msgs__msg__ColoredPoint__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_tod_msgs
tod_msgs__msg__ColoredPoint *
tod_msgs__msg__ColoredPoint__create();

/// Destroy msg/ColoredPoint message.
/**
 * It calls
 * tod_msgs__msg__ColoredPoint__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tod_msgs
void
tod_msgs__msg__ColoredPoint__destroy(tod_msgs__msg__ColoredPoint * msg);

/// Check for msg/ColoredPoint message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_tod_msgs
bool
tod_msgs__msg__ColoredPoint__are_equal(const tod_msgs__msg__ColoredPoint * lhs, const tod_msgs__msg__ColoredPoint * rhs);

/// Copy a msg/ColoredPoint message.
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
tod_msgs__msg__ColoredPoint__copy(
  const tod_msgs__msg__ColoredPoint * input,
  tod_msgs__msg__ColoredPoint * output);

/// Initialize array of msg/ColoredPoint messages.
/**
 * It allocates the memory for the number of elements and calls
 * tod_msgs__msg__ColoredPoint__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_tod_msgs
bool
tod_msgs__msg__ColoredPoint__Sequence__init(tod_msgs__msg__ColoredPoint__Sequence * array, size_t size);

/// Finalize array of msg/ColoredPoint messages.
/**
 * It calls
 * tod_msgs__msg__ColoredPoint__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tod_msgs
void
tod_msgs__msg__ColoredPoint__Sequence__fini(tod_msgs__msg__ColoredPoint__Sequence * array);

/// Create array of msg/ColoredPoint messages.
/**
 * It allocates the memory for the array and calls
 * tod_msgs__msg__ColoredPoint__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_tod_msgs
tod_msgs__msg__ColoredPoint__Sequence *
tod_msgs__msg__ColoredPoint__Sequence__create(size_t size);

/// Destroy array of msg/ColoredPoint messages.
/**
 * It calls
 * tod_msgs__msg__ColoredPoint__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tod_msgs
void
tod_msgs__msg__ColoredPoint__Sequence__destroy(tod_msgs__msg__ColoredPoint__Sequence * array);

/// Check for msg/ColoredPoint message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_tod_msgs
bool
tod_msgs__msg__ColoredPoint__Sequence__are_equal(const tod_msgs__msg__ColoredPoint__Sequence * lhs, const tod_msgs__msg__ColoredPoint__Sequence * rhs);

/// Copy an array of msg/ColoredPoint messages.
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
tod_msgs__msg__ColoredPoint__Sequence__copy(
  const tod_msgs__msg__ColoredPoint__Sequence * input,
  tod_msgs__msg__ColoredPoint__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // TOD_MSGS__MSG__DETAIL__COLORED_POINT__FUNCTIONS_H_
