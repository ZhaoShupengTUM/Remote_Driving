// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from traj_interfaces:msg/TrajParam.idl
// generated code does not contain a copyright notice
#include "traj_interfaces/msg/detail/traj_param__rosidl_typesupport_fastrtps_cpp.hpp"
#include "traj_interfaces/msg/detail/traj_param__struct.hpp"

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

namespace traj_interfaces
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_traj_interfaces
cdr_serialize(
  const traj_interfaces::msg::TrajParam & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: lenkrad
  cdr << ros_message.lenkrad;
  // Member: pedal
  cdr << ros_message.pedal;
  // Member: taster_confirm
  cdr << (ros_message.taster_confirm ? true : false);
  // Member: r_gear
  cdr << (ros_message.r_gear ? true : false);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_traj_interfaces
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  traj_interfaces::msg::TrajParam & ros_message)
{
  // Member: lenkrad
  cdr >> ros_message.lenkrad;

  // Member: pedal
  cdr >> ros_message.pedal;

  // Member: taster_confirm
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.taster_confirm = tmp ? true : false;
  }

  // Member: r_gear
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.r_gear = tmp ? true : false;
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_traj_interfaces
get_serialized_size(
  const traj_interfaces::msg::TrajParam & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: lenkrad
  {
    size_t item_size = sizeof(ros_message.lenkrad);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: pedal
  {
    size_t item_size = sizeof(ros_message.pedal);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: taster_confirm
  {
    size_t item_size = sizeof(ros_message.taster_confirm);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: r_gear
  {
    size_t item_size = sizeof(ros_message.r_gear);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_traj_interfaces
max_serialized_size_TrajParam(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: lenkrad
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: pedal
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: taster_confirm
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: r_gear
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static bool _TrajParam__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const traj_interfaces::msg::TrajParam *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _TrajParam__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<traj_interfaces::msg::TrajParam *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _TrajParam__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const traj_interfaces::msg::TrajParam *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _TrajParam__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_TrajParam(full_bounded, 0);
}

static message_type_support_callbacks_t _TrajParam__callbacks = {
  "traj_interfaces::msg",
  "TrajParam",
  _TrajParam__cdr_serialize,
  _TrajParam__cdr_deserialize,
  _TrajParam__get_serialized_size,
  _TrajParam__max_serialized_size
};

static rosidl_message_type_support_t _TrajParam__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_TrajParam__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace traj_interfaces

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_traj_interfaces
const rosidl_message_type_support_t *
get_message_type_support_handle<traj_interfaces::msg::TrajParam>()
{
  return &traj_interfaces::msg::typesupport_fastrtps_cpp::_TrajParam__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, traj_interfaces, msg, TrajParam)() {
  return &traj_interfaces::msg::typesupport_fastrtps_cpp::_TrajParam__handle;
}

#ifdef __cplusplus
}
#endif
