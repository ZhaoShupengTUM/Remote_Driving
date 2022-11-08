// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from tod_msgs:msg/ObjectData.idl
// generated code does not contain a copyright notice

#ifndef TOD_MSGS__MSG__DETAIL__OBJECT_DATA__STRUCT_H_
#define TOD_MSGS__MSG__DETAIL__OBJECT_DATA__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'CLASSIFICATION_UNKNOWN'.
enum
{
  tod_msgs__msg__ObjectData__CLASSIFICATION_UNKNOWN = 0
};

/// Constant 'CLASSIFICATION_VEHICLE'.
enum
{
  tod_msgs__msg__ObjectData__CLASSIFICATION_VEHICLE = 1
};

/// Constant 'CLASSIFICATION_VRU'.
enum
{
  tod_msgs__msg__ObjectData__CLASSIFICATION_VRU = 2
};

/// Constant 'CLASSIFICATION_ANIMAL'.
enum
{
  tod_msgs__msg__ObjectData__CLASSIFICATION_ANIMAL = 3
};

/// Constant 'CLASSIFICATION_OTHER'.
enum
{
  tod_msgs__msg__ObjectData__CLASSIFICATION_OTHER = 4
};

// Struct defined in msg/ObjectData in the package tod_msgs.
typedef struct tod_msgs__msg__ObjectData
{
  int32_t id;
  float yaw_angle;
  float dim_x;
  float dim_y;
  float dim_z;
  float dist_center_x;
  float dist_center_y;
  float speed_x;
  float speed_y;
  float acceleration_x;
  float acceleration_y;
  uint8_t classification;
} tod_msgs__msg__ObjectData;

// Struct for a sequence of tod_msgs__msg__ObjectData.
typedef struct tod_msgs__msg__ObjectData__Sequence
{
  tod_msgs__msg__ObjectData * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tod_msgs__msg__ObjectData__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TOD_MSGS__MSG__DETAIL__OBJECT_DATA__STRUCT_H_
