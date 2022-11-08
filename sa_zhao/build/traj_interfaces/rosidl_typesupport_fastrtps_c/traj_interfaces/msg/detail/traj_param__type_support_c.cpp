// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from traj_interfaces:msg/TrajParam.idl
// generated code does not contain a copyright notice
#include "traj_interfaces/msg/detail/traj_param__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "traj_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "traj_interfaces/msg/detail/traj_param__struct.h"
#include "traj_interfaces/msg/detail/traj_param__functions.h"
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


using _TrajParam__ros_msg_type = traj_interfaces__msg__TrajParam;

static bool _TrajParam__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _TrajParam__ros_msg_type * ros_message = static_cast<const _TrajParam__ros_msg_type *>(untyped_ros_message);
  // Field name: lenkrad
  {
    cdr << ros_message->lenkrad;
  }

  // Field name: pedal
  {
    cdr << ros_message->pedal;
  }

  // Field name: taster_confirm
  {
    cdr << (ros_message->taster_confirm ? true : false);
  }

  // Field name: r_gear
  {
    cdr << (ros_message->r_gear ? true : false);
  }

  return true;
}

static bool _TrajParam__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _TrajParam__ros_msg_type * ros_message = static_cast<_TrajParam__ros_msg_type *>(untyped_ros_message);
  // Field name: lenkrad
  {
    cdr >> ros_message->lenkrad;
  }

  // Field name: pedal
  {
    cdr >> ros_message->pedal;
  }

  // Field name: taster_confirm
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->taster_confirm = tmp ? true : false;
  }

  // Field name: r_gear
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->r_gear = tmp ? true : false;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_traj_interfaces
size_t get_serialized_size_traj_interfaces__msg__TrajParam(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _TrajParam__ros_msg_type * ros_message = static_cast<const _TrajParam__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name lenkrad
  {
    size_t item_size = sizeof(ros_message->lenkrad);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name pedal
  {
    size_t item_size = sizeof(ros_message->pedal);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name taster_confirm
  {
    size_t item_size = sizeof(ros_message->taster_confirm);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name r_gear
  {
    size_t item_size = sizeof(ros_message->r_gear);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _TrajParam__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_traj_interfaces__msg__TrajParam(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_traj_interfaces
size_t max_serialized_size_traj_interfaces__msg__TrajParam(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: lenkrad
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: pedal
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: taster_confirm
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: r_gear
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static size_t _TrajParam__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_traj_interfaces__msg__TrajParam(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_TrajParam = {
  "traj_interfaces::msg",
  "TrajParam",
  _TrajParam__cdr_serialize,
  _TrajParam__cdr_deserialize,
  _TrajParam__get_serialized_size,
  _TrajParam__max_serialized_size
};

static rosidl_message_type_support_t _TrajParam__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_TrajParam,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, traj_interfaces, msg, TrajParam)() {
  return &_TrajParam__type_support;
}

#if defined(__cplusplus)
}
#endif
