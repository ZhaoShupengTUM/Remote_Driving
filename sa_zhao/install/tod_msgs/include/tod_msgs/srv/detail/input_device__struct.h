// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from tod_msgs:srv/InputDevice.idl
// generated code does not contain a copyright notice

#ifndef TOD_MSGS__SRV__DETAIL__INPUT_DEVICE__STRUCT_H_
#define TOD_MSGS__SRV__DETAIL__INPUT_DEVICE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'input_device_directory'
#include "rosidl_runtime_c/string.h"

// Struct defined in srv/InputDevice in the package tod_msgs.
typedef struct tod_msgs__srv__InputDevice_Request
{
  rosidl_runtime_c__String input_device_directory;
} tod_msgs__srv__InputDevice_Request;

// Struct for a sequence of tod_msgs__srv__InputDevice_Request.
typedef struct tod_msgs__srv__InputDevice_Request__Sequence
{
  tod_msgs__srv__InputDevice_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tod_msgs__srv__InputDevice_Request__Sequence;


// Constants defined in the message

// Struct defined in srv/InputDevice in the package tod_msgs.
typedef struct tod_msgs__srv__InputDevice_Response
{
  bool successfully_changed;
} tod_msgs__srv__InputDevice_Response;

// Struct for a sequence of tod_msgs__srv__InputDevice_Response.
typedef struct tod_msgs__srv__InputDevice_Response__Sequence
{
  tod_msgs__srv__InputDevice_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tod_msgs__srv__InputDevice_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TOD_MSGS__SRV__DETAIL__INPUT_DEVICE__STRUCT_H_
