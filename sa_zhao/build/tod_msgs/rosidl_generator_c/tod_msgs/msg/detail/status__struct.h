// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from tod_msgs:msg/Status.idl
// generated code does not contain a copyright notice

#ifndef TOD_MSGS__MSG__DETAIL__STATUS__STRUCT_H_
#define TOD_MSGS__MSG__DETAIL__STATUS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'CONTROL_MODE_DIRECT'.
enum
{
  tod_msgs__msg__Status__CONTROL_MODE_DIRECT = 0
};

/// Constant 'CONTROL_MODE_SHARED'.
enum
{
  tod_msgs__msg__Status__CONTROL_MODE_SHARED = 1
};

/// Constant 'CONTROL_MODE_WAYPOINT'.
enum
{
  tod_msgs__msg__Status__CONTROL_MODE_WAYPOINT = 2
};

/// Constant 'CONTROL_MODE_PATH_GUIDANCE'.
enum
{
  tod_msgs__msg__Status__CONTROL_MODE_PATH_GUIDANCE = 3
};

/// Constant 'CONTROL_MODE_PERCEPTION_MODIFICATION'.
enum
{
  tod_msgs__msg__Status__CONTROL_MODE_PERCEPTION_MODIFICATION = 4
};

/// Constant 'CONTROL_MODE_SAFECORRIDOR'.
enum
{
  tod_msgs__msg__Status__CONTROL_MODE_SAFECORRIDOR = 5
};

/// Constant 'CONTROL_MODE_NONE'.
enum
{
  tod_msgs__msg__Status__CONTROL_MODE_NONE = 99
};

/// Constant 'VIDEO_RATE_CONTROL_MODE_SINGLE'.
enum
{
  tod_msgs__msg__Status__VIDEO_RATE_CONTROL_MODE_SINGLE = 0
};

/// Constant 'VIDEO_RATE_CONTROL_MODE_COLLECTIVE'.
enum
{
  tod_msgs__msg__Status__VIDEO_RATE_CONTROL_MODE_COLLECTIVE = 1
};

/// Constant 'VIDEO_RATE_CONTROL_MODE_AUTOMATIC'.
enum
{
  tod_msgs__msg__Status__VIDEO_RATE_CONTROL_MODE_AUTOMATIC = 2
};

/// Constant 'TOD_STATUS_IDLE'.
enum
{
  tod_msgs__msg__Status__TOD_STATUS_IDLE = 0
};

/// Constant 'TOD_STATUS_UPLINK_ONLY'.
enum
{
  tod_msgs__msg__Status__TOD_STATUS_UPLINK_ONLY = 1
};

/// Constant 'TOD_STATUS_TELEOPERATION'.
enum
{
  tod_msgs__msg__Status__TOD_STATUS_TELEOPERATION = 2
};

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'operator_ip_address'
// Member 'vehicle_ip_address'
// Member 'vehicle_nav_status'
// Member 'vehicle_gps_pos_type'
#include "rosidl_runtime_c/string.h"

// Struct defined in msg/Status in the package tod_msgs.
typedef struct tod_msgs__msg__Status
{
  std_msgs__msg__Header header;
  rosidl_runtime_c__String operator_ip_address;
  uint8_t operator_control_mode;
  uint8_t operator_video_rate_mode;
  uint8_t tod_status;
  rosidl_runtime_c__String vehicle_ip_address;
  bool vehicle_emergency_stop_released;
  bool vehicle_long_approved;
  bool vehicle_lat_approved;
  uint8_t vehicle_control_mode;
  rosidl_runtime_c__String vehicle_nav_status;
  rosidl_runtime_c__String vehicle_gps_pos_type;
} tod_msgs__msg__Status;

// Struct for a sequence of tod_msgs__msg__Status.
typedef struct tod_msgs__msg__Status__Sequence
{
  tod_msgs__msg__Status * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tod_msgs__msg__Status__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TOD_MSGS__MSG__DETAIL__STATUS__STRUCT_H_
