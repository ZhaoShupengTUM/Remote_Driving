// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from tod_msgs:msg/VehicleData.idl
// generated code does not contain a copyright notice

#ifndef TOD_MSGS__MSG__DETAIL__VEHICLE_DATA__STRUCT_H_
#define TOD_MSGS__MSG__DETAIL__VEHICLE_DATA__STRUCT_H_

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
// Member 'linear_acceleration'
#include "geometry_msgs/msg/detail/vector3__struct.h"

// Struct defined in msg/VehicleData in the package tod_msgs.
typedef struct tod_msgs__msg__VehicleData
{
  std_msgs__msg__Header header;
  int8_t indicator;
  int8_t gear_position;
  int8_t honk;
  int8_t wiper;
  int8_t head_light;
  int8_t flash_light;
  float steering_wheel_angle;
  float curvature;
  float engine_speed;
  float longitudinal_speed;
  geometry_msgs__msg__Vector3 linear_acceleration;
} tod_msgs__msg__VehicleData;

// Struct for a sequence of tod_msgs__msg__VehicleData.
typedef struct tod_msgs__msg__VehicleData__Sequence
{
  tod_msgs__msg__VehicleData * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tod_msgs__msg__VehicleData__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TOD_MSGS__MSG__DETAIL__VEHICLE_DATA__STRUCT_H_
