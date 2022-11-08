// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from tod_msgs:msg/VideoInfo.idl
// generated code does not contain a copyright notice

#ifndef TOD_MSGS__MSG__DETAIL__VIDEO_INFO__BUILDER_HPP_
#define TOD_MSGS__MSG__DETAIL__VIDEO_INFO__BUILDER_HPP_

#include "tod_msgs/msg/detail/video_info__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace tod_msgs
{

namespace msg
{

namespace builder
{

class Init_VideoInfo_image_nof_pixel
{
public:
  explicit Init_VideoInfo_image_nof_pixel(::tod_msgs::msg::VideoInfo & msg)
  : msg_(msg)
  {}
  ::tod_msgs::msg::VideoInfo image_nof_pixel(::tod_msgs::msg::VideoInfo::_image_nof_pixel_type arg)
  {
    msg_.image_nof_pixel = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tod_msgs::msg::VideoInfo msg_;
};

class Init_VideoInfo_image_width
{
public:
  explicit Init_VideoInfo_image_width(::tod_msgs::msg::VideoInfo & msg)
  : msg_(msg)
  {}
  Init_VideoInfo_image_nof_pixel image_width(::tod_msgs::msg::VideoInfo::_image_width_type arg)
  {
    msg_.image_width = std::move(arg);
    return Init_VideoInfo_image_nof_pixel(msg_);
  }

private:
  ::tod_msgs::msg::VideoInfo msg_;
};

class Init_VideoInfo_image_height
{
public:
  explicit Init_VideoInfo_image_height(::tod_msgs::msg::VideoInfo & msg)
  : msg_(msg)
  {}
  Init_VideoInfo_image_width image_height(::tod_msgs::msg::VideoInfo::_image_height_type arg)
  {
    msg_.image_height = std::move(arg);
    return Init_VideoInfo_image_width(msg_);
  }

private:
  ::tod_msgs::msg::VideoInfo msg_;
};

class Init_VideoInfo_framerate
{
public:
  explicit Init_VideoInfo_framerate(::tod_msgs::msg::VideoInfo & msg)
  : msg_(msg)
  {}
  Init_VideoInfo_image_height framerate(::tod_msgs::msg::VideoInfo::_framerate_type arg)
  {
    msg_.framerate = std::move(arg);
    return Init_VideoInfo_image_height(msg_);
  }

private:
  ::tod_msgs::msg::VideoInfo msg_;
};

class Init_VideoInfo_kbitrate
{
public:
  explicit Init_VideoInfo_kbitrate(::tod_msgs::msg::VideoInfo & msg)
  : msg_(msg)
  {}
  Init_VideoInfo_framerate kbitrate(::tod_msgs::msg::VideoInfo::_kbitrate_type arg)
  {
    msg_.kbitrate = std::move(arg);
    return Init_VideoInfo_framerate(msg_);
  }

private:
  ::tod_msgs::msg::VideoInfo msg_;
};

class Init_VideoInfo_header
{
public:
  Init_VideoInfo_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_VideoInfo_kbitrate header(::tod_msgs::msg::VideoInfo::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_VideoInfo_kbitrate(msg_);
  }

private:
  ::tod_msgs::msg::VideoInfo msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::tod_msgs::msg::VideoInfo>()
{
  return tod_msgs::msg::builder::Init_VideoInfo_header();
}

}  // namespace tod_msgs

#endif  // TOD_MSGS__MSG__DETAIL__VIDEO_INFO__BUILDER_HPP_
