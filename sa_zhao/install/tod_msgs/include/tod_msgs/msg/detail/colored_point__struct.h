// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from tod_msgs:msg/ColoredPoint.idl
// generated code does not contain a copyright notice

#ifndef TOD_MSGS__MSG__DETAIL__COLORED_POINT__STRUCT_H_
#define TOD_MSGS__MSG__DETAIL__COLORED_POINT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'point'
#include "geometry_msgs/msg/detail/point32__struct.h"
// Member 'color'
#include "std_msgs/msg/detail/color_rgba__struct.h"

// Struct defined in msg/ColoredPoint in the package tod_msgs.
typedef struct tod_msgs__msg__ColoredPoint
{
  geometry_msgs__msg__Point32 point;
  std_msgs__msg__ColorRGBA color;
} tod_msgs__msg__ColoredPoint;

// Struct for a sequence of tod_msgs__msg__ColoredPoint.
typedef struct tod_msgs__msg__ColoredPoint__Sequence
{
  tod_msgs__msg__ColoredPoint * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tod_msgs__msg__ColoredPoint__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TOD_MSGS__MSG__DETAIL__COLORED_POINT__STRUCT_H_
