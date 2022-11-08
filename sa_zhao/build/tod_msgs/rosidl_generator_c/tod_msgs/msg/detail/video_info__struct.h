// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from tod_msgs:msg/VideoInfo.idl
// generated code does not contain a copyright notice

#ifndef TOD_MSGS__MSG__DETAIL__VIDEO_INFO__STRUCT_H_
#define TOD_MSGS__MSG__DETAIL__VIDEO_INFO__STRUCT_H_

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

// Struct defined in msg/VideoInfo in the package tod_msgs.
typedef struct tod_msgs__msg__VideoInfo
{
  std_msgs__msg__Header header;
  uint32_t kbitrate;
  uint32_t framerate;
  uint32_t image_height;
  uint32_t image_width;
  uint32_t image_nof_pixel;
} tod_msgs__msg__VideoInfo;

// Struct for a sequence of tod_msgs__msg__VideoInfo.
typedef struct tod_msgs__msg__VideoInfo__Sequence
{
  tod_msgs__msg__VideoInfo * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tod_msgs__msg__VideoInfo__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TOD_MSGS__MSG__DETAIL__VIDEO_INFO__STRUCT_H_
