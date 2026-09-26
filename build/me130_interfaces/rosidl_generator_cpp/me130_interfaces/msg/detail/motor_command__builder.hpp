// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from me130_interfaces:msg/MotorCommand.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "me130_interfaces/msg/motor_command.hpp"


#ifndef ME130_INTERFACES__MSG__DETAIL__MOTOR_COMMAND__BUILDER_HPP_
#define ME130_INTERFACES__MSG__DETAIL__MOTOR_COMMAND__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "me130_interfaces/msg/detail/motor_command__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace me130_interfaces
{

namespace msg
{

namespace builder
{

class Init_MotorCommand_segment
{
public:
  explicit Init_MotorCommand_segment(::me130_interfaces::msg::MotorCommand & msg)
  : msg_(msg)
  {}
  ::me130_interfaces::msg::MotorCommand segment(::me130_interfaces::msg::MotorCommand::_segment_type arg)
  {
    msg_.segment = std::move(arg);
    return std::move(msg_);
  }

private:
  ::me130_interfaces::msg::MotorCommand msg_;
};

class Init_MotorCommand_step_duty
{
public:
  explicit Init_MotorCommand_step_duty(::me130_interfaces::msg::MotorCommand & msg)
  : msg_(msg)
  {}
  Init_MotorCommand_segment step_duty(::me130_interfaces::msg::MotorCommand::_step_duty_type arg)
  {
    msg_.step_duty = std::move(arg);
    return Init_MotorCommand_segment(msg_);
  }

private:
  ::me130_interfaces::msg::MotorCommand msg_;
};

class Init_MotorCommand_amplitude
{
public:
  explicit Init_MotorCommand_amplitude(::me130_interfaces::msg::MotorCommand & msg)
  : msg_(msg)
  {}
  Init_MotorCommand_step_duty amplitude(::me130_interfaces::msg::MotorCommand::_amplitude_type arg)
  {
    msg_.amplitude = std::move(arg);
    return Init_MotorCommand_step_duty(msg_);
  }

private:
  ::me130_interfaces::msg::MotorCommand msg_;
};

class Init_MotorCommand_freq_hz
{
public:
  explicit Init_MotorCommand_freq_hz(::me130_interfaces::msg::MotorCommand & msg)
  : msg_(msg)
  {}
  Init_MotorCommand_amplitude freq_hz(::me130_interfaces::msg::MotorCommand::_freq_hz_type arg)
  {
    msg_.freq_hz = std::move(arg);
    return Init_MotorCommand_amplitude(msg_);
  }

private:
  ::me130_interfaces::msg::MotorCommand msg_;
};

class Init_MotorCommand_mode
{
public:
  explicit Init_MotorCommand_mode(::me130_interfaces::msg::MotorCommand & msg)
  : msg_(msg)
  {}
  Init_MotorCommand_freq_hz mode(::me130_interfaces::msg::MotorCommand::_mode_type arg)
  {
    msg_.mode = std::move(arg);
    return Init_MotorCommand_freq_hz(msg_);
  }

private:
  ::me130_interfaces::msg::MotorCommand msg_;
};

class Init_MotorCommand_u
{
public:
  explicit Init_MotorCommand_u(::me130_interfaces::msg::MotorCommand & msg)
  : msg_(msg)
  {}
  Init_MotorCommand_mode u(::me130_interfaces::msg::MotorCommand::_u_type arg)
  {
    msg_.u = std::move(arg);
    return Init_MotorCommand_mode(msg_);
  }

private:
  ::me130_interfaces::msg::MotorCommand msg_;
};

class Init_MotorCommand_header
{
public:
  Init_MotorCommand_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MotorCommand_u header(::me130_interfaces::msg::MotorCommand::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_MotorCommand_u(msg_);
  }

private:
  ::me130_interfaces::msg::MotorCommand msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::me130_interfaces::msg::MotorCommand>()
{
  return me130_interfaces::msg::builder::Init_MotorCommand_header();
}

}  // namespace me130_interfaces

#endif  // ME130_INTERFACES__MSG__DETAIL__MOTOR_COMMAND__BUILDER_HPP_
