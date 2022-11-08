// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from tod_msgs:msg/SafetyDriverStatus.idl
// generated code does not contain a copyright notice
#include "tod_msgs/msg/detail/safety_driver_status__rosidl_typesupport_fastrtps_cpp.hpp"
#include "tod_msgs/msg/detail/safety_driver_status__struct.hpp"

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

namespace tod_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_tod_msgs
cdr_serialize(
  const tod_msgs::msg::SafetyDriverStatus & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: vehicle_emergency_stop_released
  cdr << (ros_message.vehicle_emergency_stop_released ? true : false);
  // Member: vehicle_long_approved
  cdr << (ros_message.vehicle_long_approved ? true : false);
  // Member: vehicle_lat_approved
  cdr << (ros_message.vehicle_lat_approved ? true : false);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_tod_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  tod_msgs::msg::SafetyDriverStatus & ros_message)
{
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

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_tod_msgs
get_serialized_size(
  const tod_msgs::msg::SafetyDriverStatus & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

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

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_tod_msgs
max_serialized_size_SafetyDriverStatus(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


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

  return current_alignment - initial_alignment;
}

static bool _SafetyDriverStatus__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const tod_msgs::msg::SafetyDriverStatus *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _SafetyDriverStatus__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<tod_msgs::msg::SafetyDriverStatus *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _SafetyDriverStatus__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const tod_msgs::msg::SafetyDriverStatus *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _SafetyDriverStatus__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_SafetyDriverStatus(full_bounded, 0);
}

static message_type_support_callbacks_t _SafetyDriverStatus__callbacks = {
  "tod_msgs::msg",
  "SafetyDriverStatus",
  _SafetyDriverStatus__cdr_serialize,
  _SafetyDriverStatus__cdr_deserialize,
  _SafetyDriverStatus__get_serialized_size,
  _SafetyDriverStatus__max_serialized_size
};

static rosidl_message_type_support_t _SafetyDriverStatus__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_SafetyDriverStatus__callbacks,
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
get_message_type_support_handle<tod_msgs::msg::SafetyDriverStatus>()
{
  return &tod_msgs::msg::typesupport_fastrtps_cpp::_SafetyDriverStatus__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, tod_msgs, msg, SafetyDriverStatus)() {
  return &tod_msgs::msg::typesupport_fastrtps_cpp::_SafetyDriverStatus__handle;
}

#ifdef __cplusplus
}
#endif
