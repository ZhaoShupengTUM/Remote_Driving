// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from tod_msgs:msg/SafetyDriverStatus.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "tod_msgs/msg/detail/safety_driver_status__rosidl_typesupport_introspection_c.h"
#include "tod_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "tod_msgs/msg/detail/safety_driver_status__functions.h"
#include "tod_msgs/msg/detail/safety_driver_status__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void SafetyDriverStatus__rosidl_typesupport_introspection_c__SafetyDriverStatus_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  tod_msgs__msg__SafetyDriverStatus__init(message_memory);
}

void SafetyDriverStatus__rosidl_typesupport_introspection_c__SafetyDriverStatus_fini_function(void * message_memory)
{
  tod_msgs__msg__SafetyDriverStatus__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember SafetyDriverStatus__rosidl_typesupport_introspection_c__SafetyDriverStatus_message_member_array[3] = {
  {
    "vehicle_emergency_stop_released",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tod_msgs__msg__SafetyDriverStatus, vehicle_emergency_stop_released),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "vehicle_long_approved",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tod_msgs__msg__SafetyDriverStatus, vehicle_long_approved),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "vehicle_lat_approved",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tod_msgs__msg__SafetyDriverStatus, vehicle_lat_approved),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers SafetyDriverStatus__rosidl_typesupport_introspection_c__SafetyDriverStatus_message_members = {
  "tod_msgs__msg",  // message namespace
  "SafetyDriverStatus",  // message name
  3,  // number of fields
  sizeof(tod_msgs__msg__SafetyDriverStatus),
  SafetyDriverStatus__rosidl_typesupport_introspection_c__SafetyDriverStatus_message_member_array,  // message members
  SafetyDriverStatus__rosidl_typesupport_introspection_c__SafetyDriverStatus_init_function,  // function to initialize message memory (memory has to be allocated)
  SafetyDriverStatus__rosidl_typesupport_introspection_c__SafetyDriverStatus_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t SafetyDriverStatus__rosidl_typesupport_introspection_c__SafetyDriverStatus_message_type_support_handle = {
  0,
  &SafetyDriverStatus__rosidl_typesupport_introspection_c__SafetyDriverStatus_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_tod_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tod_msgs, msg, SafetyDriverStatus)() {
  if (!SafetyDriverStatus__rosidl_typesupport_introspection_c__SafetyDriverStatus_message_type_support_handle.typesupport_identifier) {
    SafetyDriverStatus__rosidl_typesupport_introspection_c__SafetyDriverStatus_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &SafetyDriverStatus__rosidl_typesupport_introspection_c__SafetyDriverStatus_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
