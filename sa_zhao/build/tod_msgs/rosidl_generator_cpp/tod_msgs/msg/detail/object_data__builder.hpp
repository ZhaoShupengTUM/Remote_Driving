// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from tod_msgs:msg/ObjectData.idl
// generated code does not contain a copyright notice

#ifndef TOD_MSGS__MSG__DETAIL__OBJECT_DATA__BUILDER_HPP_
#define TOD_MSGS__MSG__DETAIL__OBJECT_DATA__BUILDER_HPP_

#include "tod_msgs/msg/detail/object_data__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace tod_msgs
{

namespace msg
{

namespace builder
{

class Init_ObjectData_classification
{
public:
  explicit Init_ObjectData_classification(::tod_msgs::msg::ObjectData & msg)
  : msg_(msg)
  {}
  ::tod_msgs::msg::ObjectData classification(::tod_msgs::msg::ObjectData::_classification_type arg)
  {
    msg_.classification = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tod_msgs::msg::ObjectData msg_;
};

class Init_ObjectData_acceleration_y
{
public:
  explicit Init_ObjectData_acceleration_y(::tod_msgs::msg::ObjectData & msg)
  : msg_(msg)
  {}
  Init_ObjectData_classification acceleration_y(::tod_msgs::msg::ObjectData::_acceleration_y_type arg)
  {
    msg_.acceleration_y = std::move(arg);
    return Init_ObjectData_classification(msg_);
  }

private:
  ::tod_msgs::msg::ObjectData msg_;
};

class Init_ObjectData_acceleration_x
{
public:
  explicit Init_ObjectData_acceleration_x(::tod_msgs::msg::ObjectData & msg)
  : msg_(msg)
  {}
  Init_ObjectData_acceleration_y acceleration_x(::tod_msgs::msg::ObjectData::_acceleration_x_type arg)
  {
    msg_.acceleration_x = std::move(arg);
    return Init_ObjectData_acceleration_y(msg_);
  }

private:
  ::tod_msgs::msg::ObjectData msg_;
};

class Init_ObjectData_speed_y
{
public:
  explicit Init_ObjectData_speed_y(::tod_msgs::msg::ObjectData & msg)
  : msg_(msg)
  {}
  Init_ObjectData_acceleration_x speed_y(::tod_msgs::msg::ObjectData::_speed_y_type arg)
  {
    msg_.speed_y = std::move(arg);
    return Init_ObjectData_acceleration_x(msg_);
  }

private:
  ::tod_msgs::msg::ObjectData msg_;
};

class Init_ObjectData_speed_x
{
public:
  explicit Init_ObjectData_speed_x(::tod_msgs::msg::ObjectData & msg)
  : msg_(msg)
  {}
  Init_ObjectData_speed_y speed_x(::tod_msgs::msg::ObjectData::_speed_x_type arg)
  {
    msg_.speed_x = std::move(arg);
    return Init_ObjectData_speed_y(msg_);
  }

private:
  ::tod_msgs::msg::ObjectData msg_;
};

class Init_ObjectData_dist_center_y
{
public:
  explicit Init_ObjectData_dist_center_y(::tod_msgs::msg::ObjectData & msg)
  : msg_(msg)
  {}
  Init_ObjectData_speed_x dist_center_y(::tod_msgs::msg::ObjectData::_dist_center_y_type arg)
  {
    msg_.dist_center_y = std::move(arg);
    return Init_ObjectData_speed_x(msg_);
  }

private:
  ::tod_msgs::msg::ObjectData msg_;
};

class Init_ObjectData_dist_center_x
{
public:
  explicit Init_ObjectData_dist_center_x(::tod_msgs::msg::ObjectData & msg)
  : msg_(msg)
  {}
  Init_ObjectData_dist_center_y dist_center_x(::tod_msgs::msg::ObjectData::_dist_center_x_type arg)
  {
    msg_.dist_center_x = std::move(arg);
    return Init_ObjectData_dist_center_y(msg_);
  }

private:
  ::tod_msgs::msg::ObjectData msg_;
};

class Init_ObjectData_dim_z
{
public:
  explicit Init_ObjectData_dim_z(::tod_msgs::msg::ObjectData & msg)
  : msg_(msg)
  {}
  Init_ObjectData_dist_center_x dim_z(::tod_msgs::msg::ObjectData::_dim_z_type arg)
  {
    msg_.dim_z = std::move(arg);
    return Init_ObjectData_dist_center_x(msg_);
  }

private:
  ::tod_msgs::msg::ObjectData msg_;
};

class Init_ObjectData_dim_y
{
public:
  explicit Init_ObjectData_dim_y(::tod_msgs::msg::ObjectData & msg)
  : msg_(msg)
  {}
  Init_ObjectData_dim_z dim_y(::tod_msgs::msg::ObjectData::_dim_y_type arg)
  {
    msg_.dim_y = std::move(arg);
    return Init_ObjectData_dim_z(msg_);
  }

private:
  ::tod_msgs::msg::ObjectData msg_;
};

class Init_ObjectData_dim_x
{
public:
  explicit Init_ObjectData_dim_x(::tod_msgs::msg::ObjectData & msg)
  : msg_(msg)
  {}
  Init_ObjectData_dim_y dim_x(::tod_msgs::msg::ObjectData::_dim_x_type arg)
  {
    msg_.dim_x = std::move(arg);
    return Init_ObjectData_dim_y(msg_);
  }

private:
  ::tod_msgs::msg::ObjectData msg_;
};

class Init_ObjectData_yaw_angle
{
public:
  explicit Init_ObjectData_yaw_angle(::tod_msgs::msg::ObjectData & msg)
  : msg_(msg)
  {}
  Init_ObjectData_dim_x yaw_angle(::tod_msgs::msg::ObjectData::_yaw_angle_type arg)
  {
    msg_.yaw_angle = std::move(arg);
    return Init_ObjectData_dim_x(msg_);
  }

private:
  ::tod_msgs::msg::ObjectData msg_;
};

class Init_ObjectData_id
{
public:
  Init_ObjectData_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ObjectData_yaw_angle id(::tod_msgs::msg::ObjectData::_id_type arg)
  {
    msg_.id = std::move(arg);
    return Init_ObjectData_yaw_angle(msg_);
  }

private:
  ::tod_msgs::msg::ObjectData msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::tod_msgs::msg::ObjectData>()
{
  return tod_msgs::msg::builder::Init_ObjectData_id();
}

}  // namespace tod_msgs

#endif  // TOD_MSGS__MSG__DETAIL__OBJECT_DATA__BUILDER_HPP_
