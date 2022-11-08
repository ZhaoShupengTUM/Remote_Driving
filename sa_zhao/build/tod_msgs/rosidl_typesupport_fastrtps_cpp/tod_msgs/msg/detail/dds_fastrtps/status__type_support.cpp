// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from tod_msgs:msg/Status.idl
// generated code does not contain a copyright notice
#include "tod_msgs/msg/detail/status__rosidl_typesupport_fastrtps_cpp.hpp"
#include "tod_msgs/msg/detail/status__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions
namespace std_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const std_msgs::msg::Header &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  std_msgs::msg::Header &);
size_t get_serialized_size(
  const std_msgs::msg::Header &,
  size_t current_alignment);
size_t
max_serialized_size_Header(
  bool & full_bounded,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace std_msgs


namespace tod_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_tod_msgs
cdr_serialize(
  const tod_msgs::msg::Status & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: header
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.header,
    cdr);
  // Member: operator_ip_address
  cdr << ros_message.operator_ip_address;
  // Member: operator_control_mode
  cdr << ros_message.operator_control_mode;
  // Member: operator_video_rate_mode
  cdr << ros_message.operator_video_rate_mode;
  // Member: tod_status
  cdr << ros_message.tod_status;
  // Member: vehicle_ip_address
  cdr << ros_message.vehicle_ip_address;
  // Member: vehicle_emergency_stop_released
  cdr << (ros_message.vehicle_emergency_stop_released ? true : false);
  // Member: vehicle_long_approved
  cdr << (ros_message.vehicle_long_approved ? true : false);
  // Member: vehicle_lat_approved
  cdr << (ros_message.vehicle_lat_approved ? true : false);
  // Member: vehicle_control_mode
  cdr << ros_message.vehicle_control_mode;
  // Member: vehicle_nav_status
  cdr << ros_message.vehicle_nav_status;
  // Member: vehicle_gps_pos_type
  cdr << ros_message.vehicle_gps_pos_type;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_tod_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  tod_msgs::msg::Status & ros_message)
{
  // Member: header
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.header);

  // Member: operator_ip_address
  cdr >> ros_message.operator_ip_address;

  // Member: operator_control_mode
  cdr >> ros_message.operator_control_mode;

  // Member: operator_video_rate_mode
  cdr >> ros_message.operator_video_rate_mode;

  // Member: tod_status
  cdr >> ros_message.tod_status;

  // Member: vehicle_ip_address
  cdr >> ros_message.vehicle_ip_address;

  // Member: vehicle_emergency_stop_released
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.vehicle_emergency_stop_released = tmp ? true : false;
  }

  // Member: vehicle_long_approved
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.vehicle_long_approved = tmp ? true : false;
  }

  // Member: vehicle_lat_approved
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.vehicle_lat_approved = tmp ? true : false;
  }

  // Member: vehicle_control_mode
  cdr >> ros_message.vehicle_control_mode;

  // Member: vehicle_nav_status
  cdr >> ros_message.vehicle_nav_status;

  // Member: vehicle_gps_pos_type
  cdr >> ros_message.vehicle_gps_pos_type;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_tod_msgs
get_serialized_size(
  const tod_msgs::msg::Status & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: header

  current_alignment +=
    std_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.header, current_alignment);
  // Member: operator_ip_address
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.operator_ip_address.size() + 1);
  // Member: operator_control_mode
  {
    size_t item_size = sizeof(ros_message.operator_control_mode);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: operator_video_rate_mode
  {
    size_t item_size = sizeof(ros_message.operator_video_rate_mode);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: tod_status
  {
    size_t item_size = sizeof(ros_message.tod_status);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: vehicle_ip_address
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.vehicle_ip_address.size() + 1);
  // Member: vehicle_emergency_stop_released
  {
    size_t item_size = sizeof(ros_message.vehicle_emergency_stop_released);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: vehicle_long_approved
  {
    size_t item_size = sizeof(ros_message.vehicle_long_approved);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: vehicle_lat_approved
  {
    size_t item_size = sizeof(ros_message.vehicle_lat_approved);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: vehicle_control_mode
  {
    size_t item_size = sizeof(ros_message.vehicle_control_mode);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: vehicle_nav_status
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.vehicle_nav_status.size() + 1);
  // Member: vehicle_gps_pos_type
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.vehicle_gps_pos_type.size() + 1);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_tod_msgs
max_serialized_size_Status(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: header
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        std_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_Header(
        full_bounded, current_alignment);
    }
  }

  // Member: operator_ip_address
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Member: operator_control_mode
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: operator_video_rate_mode
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: tod_status
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: vehicle_ip_address
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Member: vehicle_emergency_stop_released
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: vehicle_long_approved
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: vehicle_lat_approved
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: vehicle_control_mode
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: vehicle_nav_status
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Member: vehicle_gps_pos_type
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

static bool _Status__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const tod_msgs::msg::Status *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _Status__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<tod_msgs::msg::Status *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _Status__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const tod_msgs::msg::Status *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _Status__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_Status(full_bounded, 0);
}

static message_type_support_callbacks_t _Status__callbacks = {
  "tod_msgs::msg",
  "Status",
  _Status__cdr_serialize,
  _Status__cdr_deserialize,
  _Status__get_serialized_size,
  _Status__max_serialized_size
};

static rosidl_message_type_support_t _Status__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_Status__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace tod_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_tod_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<tod_msgs::msg::Status>()
{
  return &tod_msgs::msg::typesupport_fastrtps_cpp::_Status__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, tod_msgs, msg, Status)() {
  return &tod_msgs::msg::typesupport_fastrtps_cpp::_Status__handle;
}

#ifdef __cplusplus
}
#endif
