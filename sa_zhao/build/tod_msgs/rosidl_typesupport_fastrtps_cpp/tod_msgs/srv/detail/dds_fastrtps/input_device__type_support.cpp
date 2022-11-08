// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from tod_msgs:srv/InputDevice.idl
// generated code does not contain a copyright notice
#include "tod_msgs/srv/detail/input_device__rosidl_typesupport_fastrtps_cpp.hpp"
#include "tod_msgs/srv/detail/input_device__struct.hpp"

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

namespace srv
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_tod_msgs
cdr_serialize(
  const tod_msgs::srv::InputDevice_Request & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: input_device_directory
  cdr << ros_message.input_device_directory;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_tod_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  tod_msgs::srv::InputDevice_Request & ros_message)
{
  // Member: input_device_directory
  cdr >> ros_message.input_device_directory;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_tod_msgs
get_serialized_size(
  const tod_msgs::srv::InputDevice_Request & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: input_device_directory
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.input_device_directory.size() + 1);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_tod_msgs
max_serialized_size_InputDevice_Request(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: input_device_directory
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

static bool _InputDevice_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const tod_msgs::srv::InputDevice_Request *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _InputDevice_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<tod_msgs::srv::InputDevice_Request *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _InputDevice_Request__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const tod_msgs::srv::InputDevice_Request *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _InputDevice_Request__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_InputDevice_Request(full_bounded, 0);
}

static message_type_support_callbacks_t _InputDevice_Request__callbacks = {
  "tod_msgs::srv",
  "InputDevice_Request",
  _InputDevice_Request__cdr_serialize,
  _InputDevice_Request__cdr_deserialize,
  _InputDevice_Request__get_serialized_size,
  _InputDevice_Request__max_serialized_size
};

static rosidl_message_type_support_t _InputDevice_Request__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_InputDevice_Request__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace tod_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_tod_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<tod_msgs::srv::InputDevice_Request>()
{
  return &tod_msgs::srv::typesupport_fastrtps_cpp::_InputDevice_Request__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, tod_msgs, srv, InputDevice_Request)() {
  return &tod_msgs::srv::typesupport_fastrtps_cpp::_InputDevice_Request__handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include <limits>
// already included above
// #include <stdexcept>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
// already included above
// #include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace tod_msgs
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_tod_msgs
cdr_serialize(
  const tod_msgs::srv::InputDevice_Response & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: successfully_changed
  cdr << (ros_message.successfully_changed ? true : false);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_tod_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  tod_msgs::srv::InputDevice_Response & ros_message)
{
  // Member: successfully_changed
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.successfully_changed = tmp ? true : false;
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_tod_msgs
get_serialized_size(
  const tod_msgs::srv::InputDevice_Response & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: successfully_changed
  {
    size_t item_size = sizeof(ros_message.successfully_changed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_tod_msgs
max_serialized_size_InputDevice_Response(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: successfully_changed
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static bool _InputDevice_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const tod_msgs::srv::InputDevice_Response *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _InputDevice_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<tod_msgs::srv::InputDevice_Response *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _InputDevice_Response__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const tod_msgs::srv::InputDevice_Response *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _InputDevice_Response__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_InputDevice_Response(full_bounded, 0);
}

static message_type_support_callbacks_t _InputDevice_Response__callbacks = {
  "tod_msgs::srv",
  "InputDevice_Response",
  _InputDevice_Response__cdr_serialize,
  _InputDevice_Response__cdr_deserialize,
  _InputDevice_Response__get_serialized_size,
  _InputDevice_Response__max_serialized_size
};

static rosidl_message_type_support_t _InputDevice_Response__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_InputDevice_Response__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace tod_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_tod_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<tod_msgs::srv::InputDevice_Response>()
{
  return &tod_msgs::srv::typesupport_fastrtps_cpp::_InputDevice_Response__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, tod_msgs, srv, InputDevice_Response)() {
  return &tod_msgs::srv::typesupport_fastrtps_cpp::_InputDevice_Response__handle;
}

#ifdef __cplusplus
}
#endif

#include "rmw/error_handling.h"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/service_type_support_decl.hpp"

namespace tod_msgs
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

static service_type_support_callbacks_t _InputDevice__callbacks = {
  "tod_msgs::srv",
  "InputDevice",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, tod_msgs, srv, InputDevice_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, tod_msgs, srv, InputDevice_Response)(),
};

static rosidl_service_type_support_t _InputDevice__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_InputDevice__callbacks,
  get_service_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace tod_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_tod_msgs
const rosidl_service_type_support_t *
get_service_type_support_handle<tod_msgs::srv::InputDevice>()
{
  return &tod_msgs::srv::typesupport_fastrtps_cpp::_InputDevice__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, tod_msgs, srv, InputDevice)() {
  return &tod_msgs::srv::typesupport_fastrtps_cpp::_InputDevice__handle;
}

#ifdef __cplusplus
}
#endif
