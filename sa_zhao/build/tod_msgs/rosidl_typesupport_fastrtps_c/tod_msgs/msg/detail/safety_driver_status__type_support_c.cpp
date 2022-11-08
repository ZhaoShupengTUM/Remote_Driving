// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from tod_msgs:msg/SafetyDriverStatus.idl
// generated code does not contain a copyright notice
#include "tod_msgs/msg/detail/safety_driver_status__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "tod_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "tod_msgs/msg/detail/safety_driver_status__struct.h"
#include "tod_msgs/msg/detail/safety_driver_status__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


using _SafetyDriverStatus__ros_msg_type = tod_msgs__msg__SafetyDriverStatus;

static bool _SafetyDriverStatus__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _SafetyDriverStatus__ros_msg_type * ros_message = static_cast<const _SafetyDriverStatus__ros_msg_type *>(untyped_ros_message);
  // Field name: vehicle_emergency_stop_released
  {
    cdr << (ros_message->vehicle_emergency_stop_released ? true : false);
  }

  // Field name: vehicle_long_approved
  {
    cdr << (ros_message->vehicle_long_approved ? true : false);
  }

  // Field name: vehicle_lat_approved
  {
    cdr << (ros_message->vehicle_lat_approved ? true : false);
  }

  return true;
}

static bool _SafetyDriverStatus__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _SafetyDriverStatus__ros_msg_type * ros_message = static_cast<_SafetyDriverStatus__ros_msg_type *>(untyped_ros_message);
  // Field name: vehicle_emergency_stop_released
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->vehicle_emergency_stop_released = tmp ? true : false;
  }

  // Field name: vehicle_long_approved
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->vehicle_long_approved = tmp ? true : false;
  }

  // Field name: vehicle_lat_approved
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->vehicle_lat_approved = tmp ? true : false;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_tod_msgs
size_t get_serialized_size_tod_msgs__msg__SafetyDriverStatus(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _SafetyDriverStatus__ros_msg_type * ros_message = static_cast<const _SafetyDriverStatus__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name vehicle_emergency_stop_released
  {
    size_t item_size = sizeof(ros_message->vehicle_emergency_stop_released);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name vehicle_long_approved
  {
    size_t item_size = sizeof(ros_message->vehicle_long_approved);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name vehicle_lat_approved
  {
    size_t item_size = sizeof(ros_message->vehicle_lat_approved);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _SafetyDriverStatus__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_tod_msgs__msg__SafetyDriverStatus(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_tod_msgs
size_t max_serialized_size_tod_msgs__msg__SafetyDriverStatus(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: vehicle_emergency_stop_released
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: vehicle_long_approved
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: vehicle_lat_approved
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static size_t _SafetyDriverStatus__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_tod_msgs__msg__SafetyDriverStatus(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_SafetyDriverStatus = {
  "tod_msgs::msg",
  "SafetyDriverStatus",
  _SafetyDriverStatus__cdr_serialize,
  _SafetyDriverStatus__cdr_deserialize,
  _SafetyDriverStatus__get_serialized_size,
  _SafetyDriverStatus__max_serialized_size
};

static rosidl_message_type_support_t _SafetyDriverStatus__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_SafetyDriverStatus,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, tod_msgs, msg, SafetyDriverStatus)() {
  return &_SafetyDriverStatus__type_support;
}

#if defined(__cplusplus)
}
#endif
