// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from tod_msgs:msg/KeyPress.idl
// generated code does not contain a copyright notice

#ifndef TOD_MSGS__MSG__DETAIL__KEY_PRESS__STRUCT_H_
#define TOD_MSGS__MSG__DETAIL__KEY_PRESS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"

// Struct defined in msg/KeyPress in the package tod_msgs.
typedef struct tod_msgs__msg__KeyPress
{
  std_msgs__msg__Header header;
  int32_t key;
} tod_msgs__msg__KeyPress;

// Struct for a sequence of tod_msgs__msg__KeyPress.
typedef struct tod_msgs__msg__KeyPress__Sequence
{
  tod_msgs__msg__KeyPress * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tod_msgs__msg__KeyPress__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TOD_MSGS__MSG__DETAIL__KEY_PRESS__STRUCT_H_
