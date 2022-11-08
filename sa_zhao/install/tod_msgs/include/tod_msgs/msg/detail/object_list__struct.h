// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from tod_msgs:msg/ObjectList.idl
// generated code does not contain a copyright notice

#ifndef TOD_MSGS__MSG__DETAIL__OBJECT_LIST__STRUCT_H_
#define TOD_MSGS__MSG__DETAIL__OBJECT_LIST__STRUCT_H_

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
// Member 'object_list'
#include "tod_msgs/msg/detail/object_data__struct.h"

// Struct defined in msg/ObjectList in the package tod_msgs.
typedef struct tod_msgs__msg__ObjectList
{
  std_msgs__msg__Header header;
  tod_msgs__msg__ObjectData__Sequence object_list;
} tod_msgs__msg__ObjectList;

// Struct for a sequence of tod_msgs__msg__ObjectList.
typedef struct tod_msgs__msg__ObjectList__Sequence
{
  tod_msgs__msg__ObjectList * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tod_msgs__msg__ObjectList__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TOD_MSGS__MSG__DETAIL__OBJECT_LIST__STRUCT_H_
