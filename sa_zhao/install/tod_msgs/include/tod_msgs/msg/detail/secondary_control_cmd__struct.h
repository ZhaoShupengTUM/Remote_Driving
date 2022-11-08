// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from tod_msgs:msg/SecondaryControlCmd.idl
// generated code does not contain a copyright notice

#ifndef TOD_MSGS__MSG__DETAIL__SECONDARY_CONTROL_CMD__STRUCT_H_
#define TOD_MSGS__MSG__DETAIL__SECONDARY_CONTROL_CMD__STRUCT_H_

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

// Struct defined in msg/SecondaryControlCmd in the package tod_msgs.
typedef struct tod_msgs__msg__SecondaryControlCmd
{
  std_msgs__msg__Header header;
  int8_t indicator;
  int8_t gear_position;
  int8_t honk;
  int8_t wiper;
  int8_t head_light;
  int8_t flash_light;
} tod_msgs__msg__SecondaryControlCmd;

// Struct for a sequence of tod_msgs__msg__SecondaryControlCmd.
typedef struct tod_msgs__msg__SecondaryControlCmd__Sequence
{
  tod_msgs__msg__SecondaryControlCmd * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tod_msgs__msg__SecondaryControlCmd__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TOD_MSGS__MSG__DETAIL__SECONDARY_CONTROL_CMD__STRUCT_H_
