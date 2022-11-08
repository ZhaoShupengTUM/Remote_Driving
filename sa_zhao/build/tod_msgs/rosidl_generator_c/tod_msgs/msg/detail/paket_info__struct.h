// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from tod_msgs:msg/PaketInfo.idl
// generated code does not contain a copyright notice

#ifndef TOD_MSGS__MSG__DETAIL__PAKET_INFO__STRUCT_H_
#define TOD_MSGS__MSG__DETAIL__PAKET_INFO__STRUCT_H_

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

// Struct defined in msg/PaketInfo in the package tod_msgs.
typedef struct tod_msgs__msg__PaketInfo
{
  std_msgs__msg__Header header;
  int64_t latency_usec;
  int32_t size_bit;
  uint64_t seq_num;
} tod_msgs__msg__PaketInfo;

// Struct for a sequence of tod_msgs__msg__PaketInfo.
typedef struct tod_msgs__msg__PaketInfo__Sequence
{
  tod_msgs__msg__PaketInfo * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tod_msgs__msg__PaketInfo__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TOD_MSGS__MSG__DETAIL__PAKET_INFO__STRUCT_H_
