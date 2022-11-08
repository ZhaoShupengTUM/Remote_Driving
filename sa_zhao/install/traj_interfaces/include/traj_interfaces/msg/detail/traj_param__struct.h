// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from traj_interfaces:msg/TrajParam.idl
// generated code does not contain a copyright notice

#ifndef TRAJ_INTERFACES__MSG__DETAIL__TRAJ_PARAM__STRUCT_H_
#define TRAJ_INTERFACES__MSG__DETAIL__TRAJ_PARAM__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in msg/TrajParam in the package traj_interfaces.
typedef struct traj_interfaces__msg__TrajParam
{
  double lenkrad;
  double pedal;
  bool taster_confirm;
  bool r_gear;
} traj_interfaces__msg__TrajParam;

// Struct for a sequence of traj_interfaces__msg__TrajParam.
typedef struct traj_interfaces__msg__TrajParam__Sequence
{
  traj_interfaces__msg__TrajParam * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} traj_interfaces__msg__TrajParam__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TRAJ_INTERFACES__MSG__DETAIL__TRAJ_PARAM__STRUCT_H_
