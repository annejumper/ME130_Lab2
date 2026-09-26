// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from me130_interfaces:msg/EncoderState.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "me130_interfaces/msg/encoder_state.hpp"


#ifndef ME130_INTERFACES__MSG__DETAIL__ENCODER_STATE__BUILDER_HPP_
#define ME130_INTERFACES__MSG__DETAIL__ENCODER_STATE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "me130_interfaces/msg/detail/encoder_state__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace me130_interfaces
{

namespace msg
{

namespace builder
{

class Init_EncoderState_counts_per_sec
{
public:
  explicit Init_EncoderState_counts_per_sec(::me130_interfaces::msg::EncoderState & msg)
  : msg_(msg)
  {}
  ::me130_interfaces::msg::EncoderState counts_per_sec(::me130_interfaces::msg::EncoderState::_counts_per_sec_type arg)
  {
    msg_.counts_per_sec = std::move(arg);
    return std::move(msg_);
  }

private:
  ::me130_interfaces::msg::EncoderState msg_;
};

class Init_EncoderState_counts
{
public:
  explicit Init_EncoderState_counts(::me130_interfaces::msg::EncoderState & msg)
  : msg_(msg)
  {}
  Init_EncoderState_counts_per_sec counts(::me130_interfaces::msg::EncoderState::_counts_type arg)
  {
    msg_.counts = std::move(arg);
    return Init_EncoderState_counts_per_sec(msg_);
  }

private:
  ::me130_interfaces::msg::EncoderState msg_;
};

class Init_EncoderState_header
{
public:
  Init_EncoderState_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_EncoderState_counts header(::me130_interfaces::msg::EncoderState::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_EncoderState_counts(msg_);
  }

private:
  ::me130_interfaces::msg::EncoderState msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::me130_interfaces::msg::EncoderState>()
{
  return me130_interfaces::msg::builder::Init_EncoderState_header();
}

}  // namespace me130_interfaces

#endif  // ME130_INTERFACES__MSG__DETAIL__ENCODER_STATE__BUILDER_HPP_
