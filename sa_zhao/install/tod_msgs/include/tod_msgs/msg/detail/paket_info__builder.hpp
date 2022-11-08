// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from tod_msgs:msg/PaketInfo.idl
// generated code does not contain a copyright notice

#ifndef TOD_MSGS__MSG__DETAIL__PAKET_INFO__BUILDER_HPP_
#define TOD_MSGS__MSG__DETAIL__PAKET_INFO__BUILDER_HPP_

#include "tod_msgs/msg/detail/paket_info__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace tod_msgs
{

namespace msg
{

namespace builder
{

class Init_PaketInfo_seq_num
{
public:
  explicit Init_PaketInfo_seq_num(::tod_msgs::msg::PaketInfo & msg)
  : msg_(msg)
  {}
  ::tod_msgs::msg::PaketInfo seq_num(::tod_msgs::msg::PaketInfo::_seq_num_type arg)
  {
    msg_.seq_num = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tod_msgs::msg::PaketInfo msg_;
};

class Init_PaketInfo_size_bit
{
public:
  explicit Init_PaketInfo_size_bit(::tod_msgs::msg::PaketInfo & msg)
  : msg_(msg)
  {}
  Init_PaketInfo_seq_num size_bit(::tod_msgs::msg::PaketInfo::_size_bit_type arg)
  {
    msg_.size_bit = std::move(arg);
    return Init_PaketInfo_seq_num(msg_);
  }

private:
  ::tod_msgs::msg::PaketInfo msg_;
};

class Init_PaketInfo_latency_usec
{
public:
  explicit Init_PaketInfo_latency_usec(::tod_msgs::msg::PaketInfo & msg)
  : msg_(msg)
  {}
  Init_PaketInfo_size_bit latency_usec(::tod_msgs::msg::PaketInfo::_latency_usec_type arg)
  {
    msg_.latency_usec = std::move(arg);
    return Init_PaketInfo_size_bit(msg_);
  }

private:
  ::tod_msgs::msg::PaketInfo msg_;
};

class Init_PaketInfo_header
{
public:
  Init_PaketInfo_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PaketInfo_latency_usec header(::tod_msgs::msg::PaketInfo::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_PaketInfo_latency_usec(msg_);
  }

private:
  ::tod_msgs::msg::PaketInfo msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::tod_msgs::msg::PaketInfo>()
{
  return tod_msgs::msg::builder::Init_PaketInfo_header();
}

}  // namespace tod_msgs

#endif  // TOD_MSGS__MSG__DETAIL__PAKET_INFO__BUILDER_HPP_
