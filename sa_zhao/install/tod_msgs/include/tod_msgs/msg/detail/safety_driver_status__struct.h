// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from tod_msgs:msg/SafetyDriverStatus.idl
// generated code does not contain a copyright notice

#ifndef TOD_MSGS__MSG__DETAIL__SAFETY_DRIVER_STATUS__STRUCT_H_
#define TOD_MSGS__MSG__DETAIL__SAFETY_DRIVER_STATUS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in msg/SafetyDriverStatus in the package tod_msgs.
typedef struct tod_msgs__msg__SafetyDriverStatus
{
  bool vehicle_emergency_stop_released;
  bool vehicle_long_approved;
  bool vehicle_lat_approved;
} tod_msgs__msg__SafetyDriverStatus;

// Struct for a sequence of tod_msgs__msg__SafetyDriverStatus.
typedef struct tod_msgs__msg__SafetyDriverStatus__Sequence
{
  tod_msgs__msg__SafetyDriverStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tod_msgs__msg__SafetyDriverStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TOD_MSGS__MSG__DETAIL__SAFETY_DRIVER_STATUS__STRUCT_H_
