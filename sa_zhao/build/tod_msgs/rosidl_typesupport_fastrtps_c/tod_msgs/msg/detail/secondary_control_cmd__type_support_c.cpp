// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from tod_msgs:msg/SecondaryControlCmd.idl
// generated code does not contain a copyright notice
#include "tod_msgs/msg/detail/secondary_control_cmd__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "tod_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "tod_msgs/msg/detail/secondary_control_cmd__struct.h"
#include "tod_msgs/msg/detail/secondary_control_cmd__functions.h"
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

#include "std_msgs/msg/detail/header__functions.h"  // header

// forward declare type support functions
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_tod_msgs
size_t get_serialized_size_std_msgs__msg__Header(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_tod_msgs
size_t max_serialized_size_std_msgs__msg__Header(
  bool & full_bounded,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_tod_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, std_msgs, msg, Header)();


using _SecondaryControlCmd__ros_msg_type = tod_msgs__msg__SecondaryControlCmd;

static bool _SecondaryControlCmd__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _SecondaryControlCmd__ros_msg_type * ros_message = static_cast<const _SecondaryControlCmd__ros_msg_type *>(untyped_ros_message);
  // Field name: header
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, std_msgs, msg, Header
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->header, cdr))
    {
      return false;
    }
  }

  // Field name: indicator
  {
    cdr << ros_message->indicator;
  }

  // Field name: gear_position
  {
    cdr << ros_message->gear_position;
  }

  // Field name: honk
  {
    cdr << ros_message->honk;
  }

  // Field name: wiper
  {
    cdr << ros_message->wiper;
  }

  // Field name: head_light
  {
    cdr << ros_message->head_light;
  }

  // Field name: flash_light
  {
    cdr << ros_message->flash_light;
  }

  return true;
}

static bool _SecondaryControlCmd__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _SecondaryControlCmd__ros_msg_type * ros_message = static_cast<_SecondaryControlCmd__ros_msg_type *>(untyped_ros_message);
  // Field name: header
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, std_msgs, msg, Header
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->header))
    {
      return false;
    }
  }

  // Field name: indicator
  {
    cdr >> ros_message->indicator;
  }

  // Field name: gear_position
  {
    cdr >> ros_message->gear_position;
  }

  // Field name: honk
  {
    cdr >> ros_message->honk;
  }

  // Field name: wiper
  {
    cdr >> ros_message->wiper;
  }

  // Field name: head_light
  {
    cdr >> ros_message->head_light;
  }

  // Field name: flash_light
  {
    cdr >> ros_message->flash_light;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_tod_msgs
size_t get_serialized_size_tod_msgs__msg__SecondaryControlCmd(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _SecondaryControlCmd__ros_msg_type * ros_message = static_cast<const _SecondaryControlCmd__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name header

  current_alignment += get_serialized_size_std_msgs__msg__Header(
    &(ros_message->header), current_alignment);
  // field.name indicator
  {
    size_t item_size = sizeof(ros_message->indicator);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name gear_position
  {
    size_t item_size = sizeof(ros_message->gear_position);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name honk
  {
    size_t item_size = sizeof(ros_message->honk);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name wiper
  {
    size_t item_size = sizeof(ros_message->wiper);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name head_light
  {
    size_t item_size = sizeof(ros_message->head_light);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name flash_light
  {
    size_t item_size = sizeof(ros_message->flash_light);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _SecondaryControlCmd__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_tod_msgs__msg__SecondaryControlCmd(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_tod_msgs
size_t max_serialized_size_tod_msgs__msg__SecondaryControlCmd(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: header
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_std_msgs__msg__Header(
        full_bounded, current_alignment);
    }
  }
  // member: indicator
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: gear_position
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: honk
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: wiper
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: head_light
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: flash_light
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static size_t _SecondaryControlCmd__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_tod_msgs__msg__SecondaryControlCmd(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_SecondaryControlCmd = {
  "tod_msgs::msg",
  "SecondaryControlCmd",
  _SecondaryControlCmd__cdr_serialize,
  _SecondaryControlCmd__cdr_deserialize,
  _SecondaryControlCmd__get_serialized_size,
  _SecondaryControlCmd__max_serialized_size
};

static rosidl_message_type_support_t _SecondaryControlCmd__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_SecondaryControlCmd,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, tod_msgs, msg, SecondaryControlCmd)() {
  return &_SecondaryControlCmd__type_support;
}

#if defined(__cplusplus)
}
#endif
