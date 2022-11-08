// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from tod_msgs:msg/ObjectList.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "tod_msgs/msg/detail/object_list__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace tod_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void ObjectList_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) tod_msgs::msg::ObjectList(_init);
}

void ObjectList_fini_function(void * message_memory)
{
  auto typed_message = static_cast<tod_msgs::msg::ObjectList *>(message_memory);
  typed_message->~ObjectList();
}

size_t size_function__ObjectList__object_list(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<tod_msgs::msg::ObjectData> *>(untyped_member);
  return member->size();
}

const void * get_const_function__ObjectList__object_list(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<tod_msgs::msg::ObjectData> *>(untyped_member);
  return &member[index];
}

void * get_function__ObjectList__object_list(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<tod_msgs::msg::ObjectData> *>(untyped_member);
  return &member[index];
}

void resize_function__ObjectList__object_list(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<tod_msgs::msg::ObjectData> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember ObjectList_message_member_array[2] = {
  {
    "header",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<std_msgs::msg::Header>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tod_msgs::msg::ObjectList, header),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "object_list",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<tod_msgs::msg::ObjectData>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tod_msgs::msg::ObjectList, object_list),  // bytes offset in struct
    nullptr,  // default value
    size_function__ObjectList__object_list,  // size() function pointer
    get_const_function__ObjectList__object_list,  // get_const(index) function pointer
    get_function__ObjectList__object_list,  // get(index) function pointer
    resize_function__ObjectList__object_list  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers ObjectList_message_members = {
  "tod_msgs::msg",  // message namespace
  "ObjectList",  // message name
  2,  // number of fields
  sizeof(tod_msgs::msg::ObjectList),
  ObjectList_message_member_array,  // message members
  ObjectList_init_function,  // function to initialize message memory (memory has to be allocated)
  ObjectList_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t ObjectList_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &ObjectList_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace tod_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<tod_msgs::msg::ObjectList>()
{
  return &::tod_msgs::msg::rosidl_typesupport_introspection_cpp::ObjectList_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, tod_msgs, msg, ObjectList)() {
  return &::tod_msgs::msg::rosidl_typesupport_introspection_cpp::ObjectList_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
