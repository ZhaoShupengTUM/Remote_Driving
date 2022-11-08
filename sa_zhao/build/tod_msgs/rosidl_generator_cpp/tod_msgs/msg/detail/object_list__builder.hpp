// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from tod_msgs:msg/ObjectList.idl
// generated code does not contain a copyright notice

#ifndef TOD_MSGS__MSG__DETAIL__OBJECT_LIST__BUILDER_HPP_
#define TOD_MSGS__MSG__DETAIL__OBJECT_LIST__BUILDER_HPP_

#include "tod_msgs/msg/detail/object_list__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace tod_msgs
{

namespace msg
{

namespace builder
{

class Init_ObjectList_object_list
{
public:
  explicit Init_ObjectList_object_list(::tod_msgs::msg::ObjectList & msg)
  : msg_(msg)
  {}
  ::tod_msgs::msg::ObjectList object_list(::tod_msgs::msg::ObjectList::_object_list_type arg)
  {
    msg_.object_list = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tod_msgs::msg::ObjectList msg_;
};

class Init_ObjectList_header
{
public:
  Init_ObjectList_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ObjectList_object_list header(::tod_msgs::msg::ObjectList::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_ObjectList_object_list(msg_);
  }

private:
  ::tod_msgs::msg::ObjectList msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::tod_msgs::msg::ObjectList>()
{
  return tod_msgs::msg::builder::Init_ObjectList_header();
}

}  // namespace tod_msgs

#endif  // TOD_MSGS__MSG__DETAIL__OBJECT_LIST__BUILDER_HPP_
