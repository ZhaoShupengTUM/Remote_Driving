// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from tod_msgs:msg/ObjectData.idl
// generated code does not contain a copyright notice
#include "tod_msgs/msg/detail/object_data__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "tod_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "tod_msgs/msg/detail/object_data__struct.h"
#include "tod_msgs/msg/detail/object_data__functions.h"
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


using _ObjectData__ros_msg_type = tod_msgs__msg__ObjectData;

static bool _ObjectData__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _ObjectData__ros_msg_type * ros_message = static_cast<const _ObjectData__ros_msg_type *>(untyped_ros_message);
  // Field name: id
  {
    cdr << ros_message->id;
  }

  // Field name: yaw_angle
  {
    cdr << ros_message->yaw_angle;
  }

  // Field name: dim_x
  {
    cdr << ros_message->dim_x;
  }

  // Field name: dim_y
  {
    cdr << ros_message->dim_y;
  }

  // Field name: dim_z
  {
    cdr << ros_message->dim_z;
  }

  // Field name: dist_center_x
  {
    cdr << ros_message->dist_center_x;
  }

  // Field name: dist_center_y
  {
    cdr << ros_message->dist_center_y;
  }

  // Field name: speed_x
  {
    cdr << ros_message->speed_x;
  }

  // Field name: speed_y
  {
    cdr << ros_message->speed_y;
  }

  // Field name: acceleration_x
  {
    cdr << ros_message->acceleration_x;
  }

  // Field name: acceleration_y
  {
    cdr << ros_message->acceleration_y;
  }

  // Field name: classification
  {
    cdr << ros_message->classification;
  }

  return true;
}

static bool _ObjectData__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _ObjectData__ros_msg_type * ros_message = static_cast<_ObjectData__ros_msg_type *>(untyped_ros_message);
  // Field name: id
  {
    cdr >> ros_message->id;
  }

  // Field name: yaw_angle
  {
    cdr >> ros_message->yaw_angle;
  }

  // Field name: dim_x
  {
    cdr >> ros_message->dim_x;
  }

  // Field name: dim_y
  {
    cdr >> ros_message->dim_y;
  }

  // Field name: dim_z
  {
    cdr >> ros_message->dim_z;
  }

  // Field name: dist_center_x
  {
    cdr >> ros_message->dist_center_x;
  }

  // Field name: dist_center_y
  {
    cdr >> ros_message->dist_center_y;
  }

  // Field name: speed_x
  {
    cdr >> ros_message->speed_x;
  }

  // Field name: speed_y
  {
    cdr >> ros_message->speed_y;
  }

  // Field name: acceleration_x
  {
    cdr >> ros_message->acceleration_x;
  }

  // Field name: acceleration_y
  {
    cdr >> ros_message->acceleration_y;
  }

  // Field name: classification
  {
    cdr >> ros_message->classification;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_tod_msgs
size_t get_serialized_size_tod_msgs__msg__ObjectData(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _ObjectData__ros_msg_type * ros_message = static_cast<const _ObjectData__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name id
  {
    size_t item_size = sizeof(ros_message->id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name yaw_angle
  {
    size_t item_size = sizeof(ros_message->yaw_angle);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name dim_x
  {
    size_t item_size = sizeof(ros_message->dim_x);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name dim_y
  {
    size_t item_size = sizeof(ros_message->dim_y);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name dim_z
  {
    size_t item_size = sizeof(ros_message->dim_z);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name dist_center_x
  {
    size_t item_size = sizeof(ros_message->dist_center_x);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name dist_center_y
  {
    size_t item_size = sizeof(ros_message->dist_center_y);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name speed_x
  {
    size_t item_size = sizeof(ros_message->speed_x);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name speed_y
  {
    size_t item_size = sizeof(ros_message->speed_y);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name acceleration_x
  {
    size_t item_size = sizeof(ros_message->acceleration_x);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name acceleration_y
  {
    size_t item_size = sizeof(ros_message->acceleration_y);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name classification
  {
    size_t item_size = sizeof(ros_message->classification);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _ObjectData__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_tod_msgs__msg__ObjectData(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_tod_msgs
size_t max_serialized_size_tod_msgs__msg__ObjectData(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: id
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: yaw_angle
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: dim_x
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: dim_y
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: dim_z
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: dist_center_x
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: dist_center_y
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: speed_x
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: speed_y
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: acceleration_x
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: acceleration_y
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: classification
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static size_t _ObjectData__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_tod_msgs__msg__ObjectData(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_ObjectData = {
  "tod_msgs::msg",
  "ObjectData",
  _ObjectData__cdr_serialize,
  _ObjectData__cdr_deserialize,
  _ObjectData__get_serialized_size,
  _ObjectData__max_serialized_size
};

static rosidl_message_type_support_t _ObjectData__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_ObjectData,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, tod_msgs, msg, ObjectData)() {
  return &_ObjectData__type_support;
}

#if defined(__cplusplus)
}
#endif
