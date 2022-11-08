// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from tod_msgs:msg/Status.idl
// generated code does not contain a copyright notice
#include "tod_msgs/msg/detail/status__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "tod_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "tod_msgs/msg/detail/status__struct.h"
#include "tod_msgs/msg/detail/status__functions.h"
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

#include "rosidl_runtime_c/string.h"  // operator_ip_address, vehicle_gps_pos_type, vehicle_ip_address, vehicle_nav_status
#include "rosidl_runtime_c/string_functions.h"  // operator_ip_address, vehicle_gps_pos_type, vehicle_ip_address, vehicle_nav_status
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


using _Status__ros_msg_type = tod_msgs__msg__Status;

static bool _Status__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _Status__ros_msg_type * ros_message = static_cast<const _Status__ros_msg_type *>(untyped_ros_message);
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

  // Field name: operator_ip_address
  {
    const rosidl_runtime_c__String * str = &ros_message->operator_ip_address;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: operator_control_mode
  {
    cdr << ros_message->operator_control_mode;
  }

  // Field name: operator_video_rate_mode
  {
    cdr << ros_message->operator_video_rate_mode;
  }

  // Field name: tod_status
  {
    cdr << ros_message->tod_status;
  }

  // Field name: vehicle_ip_address
  {
    const rosidl_runtime_c__String * str = &ros_message->vehicle_ip_address;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

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

  // Field name: vehicle_control_mode
  {
    cdr << ros_message->vehicle_control_mode;
  }

  // Field name: vehicle_nav_status
  {
    const rosidl_runtime_c__String * str = &ros_message->vehicle_nav_status;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: vehicle_gps_pos_type
  {
    const rosidl_runtime_c__String * str = &ros_message->vehicle_gps_pos_type;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  return true;
}

static bool _Status__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _Status__ros_msg_type * ros_message = static_cast<_Status__ros_msg_type *>(untyped_ros_message);
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

  // Field name: operator_ip_address
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->operator_ip_address.data) {
      rosidl_runtime_c__String__init(&ros_message->operator_ip_address);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->operator_ip_address,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'operator_ip_address'\n");
      return false;
    }
  }

  // Field name: operator_control_mode
  {
    cdr >> ros_message->operator_control_mode;
  }

  // Field name: operator_video_rate_mode
  {
    cdr >> ros_message->operator_video_rate_mode;
  }

  // Field name: tod_status
  {
    cdr >> ros_message->tod_status;
  }

  // Field name: vehicle_ip_address
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->vehicle_ip_address.data) {
      rosidl_runtime_c__String__init(&ros_message->vehicle_ip_address);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->vehicle_ip_address,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'vehicle_ip_address'\n");
      return false;
    }
  }

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

  // Field name: vehicle_control_mode
  {
    cdr >> ros_message->vehicle_control_mode;
  }

  // Field name: vehicle_nav_status
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->vehicle_nav_status.data) {
      rosidl_runtime_c__String__init(&ros_message->vehicle_nav_status);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->vehicle_nav_status,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'vehicle_nav_status'\n");
      return false;
    }
  }

  // Field name: vehicle_gps_pos_type
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->vehicle_gps_pos_type.data) {
      rosidl_runtime_c__String__init(&ros_message->vehicle_gps_pos_type);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->vehicle_gps_pos_type,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'vehicle_gps_pos_type'\n");
      return false;
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_tod_msgs
size_t get_serialized_size_tod_msgs__msg__Status(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _Status__ros_msg_type * ros_message = static_cast<const _Status__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name header

  current_alignment += get_serialized_size_std_msgs__msg__Header(
    &(ros_message->header), current_alignment);
  // field.name operator_ip_address
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->operator_ip_address.size + 1);
  // field.name operator_control_mode
  {
    size_t item_size = sizeof(ros_message->operator_control_mode);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name operator_video_rate_mode
  {
    size_t item_size = sizeof(ros_message->operator_video_rate_mode);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name tod_status
  {
    size_t item_size = sizeof(ros_message->tod_status);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name vehicle_ip_address
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->vehicle_ip_address.size + 1);
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
  // field.name vehicle_control_mode
  {
    size_t item_size = sizeof(ros_message->vehicle_control_mode);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name vehicle_nav_status
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->vehicle_nav_status.size + 1);
  // field.name vehicle_gps_pos_type
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->vehicle_gps_pos_type.size + 1);

  return current_alignment - initial_alignment;
}

static uint32_t _Status__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_tod_msgs__msg__Status(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_tod_msgs
size_t max_serialized_size_tod_msgs__msg__Status(
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
  // member: operator_ip_address
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: operator_control_mode
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: operator_video_rate_mode
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: tod_status
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: vehicle_ip_address
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
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
  // member: vehicle_control_mode
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: vehicle_nav_status
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: vehicle_gps_pos_type
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _Status__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_tod_msgs__msg__Status(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_Status = {
  "tod_msgs::msg",
  "Status",
  _Status__cdr_serialize,
  _Status__cdr_deserialize,
  _Status__get_serialized_size,
  _Status__max_serialized_size
};

static rosidl_message_type_support_t _Status__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_Status,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, tod_msgs, msg, Status)() {
  return &_Status__type_support;
}

#if defined(__cplusplus)
}
#endif
