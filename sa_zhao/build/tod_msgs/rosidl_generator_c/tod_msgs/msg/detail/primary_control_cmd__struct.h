// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from tod_msgs:msg/PrimaryControlCmd.idl
// generated code does not contain a copyright notice

#ifndef TOD_MSGS__MSG__DETAIL__PRIMARY_CONTROL_CMD__STRUCT_H_
#define TOD_MSGS__MSG__DETAIL__PRIMARY_CONTROL_CMD__STRUCT_H_

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

// Struct defined in msg/PrimaryControlCmd in the package tod_msgs.
typedef struct tod_msgs__msg__PrimaryControlCmd
{
  std_msgs__msg__Header header;
  float velocity;
  float acceleration;
  float steering_wheel_angle;
} tod_msgs__msg__PrimaryControlCmd;

// Struct for a sequence of tod_msgs__msg__PrimaryControlCmd.
typedef struct tod_msgs__msg__PrimaryControlCmd__Sequence
{
  tod_msgs__msg__PrimaryControlCmd * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tod_msgs__msg__PrimaryControlCmd__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TOD_MSGS__MSG__DETAIL__PRIMARY_CONTROL_CMD__STRUCT_H_
