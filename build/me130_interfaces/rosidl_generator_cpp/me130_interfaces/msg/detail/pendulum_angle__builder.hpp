// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from me130_interfaces:msg/PendulumAngle.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "me130_interfaces/msg/pendulum_angle.hpp"


#ifndef ME130_INTERFACES__MSG__DETAIL__PENDULUM_ANGLE__BUILDER_HPP_
#define ME130_INTERFACES__MSG__DETAIL__PENDULUM_ANGLE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "me130_interfaces/msg/detail/pendulum_angle__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace me130_interfaces
{

namespace msg
{

namespace builder
{

class Init_PendulumAngle_theta_dot_rad_s
{
public:
  explicit Init_PendulumAngle_theta_dot_rad_s(::me130_interfaces::msg::PendulumAngle & msg)
  : msg_(msg)
  {}
  ::me130_interfaces::msg::PendulumAngle theta_dot_rad_s(::me130_interfaces::msg::PendulumAngle::_theta_dot_rad_s_type arg)
  {
    msg_.theta_dot_rad_s = std::move(arg);
    return std::move(msg_);
  }

private:
  ::me130_interfaces::msg::PendulumAngle msg_;
};

class Init_PendulumAngle_theta_rad
{
public:
  explicit Init_PendulumAngle_theta_rad(::me130_interfaces::msg::PendulumAngle & msg)
  : msg_(msg)
  {}
  Init_PendulumAngle_theta_dot_rad_s theta_rad(::me130_interfaces::msg::PendulumAngle::_theta_rad_type arg)
  {
    msg_.theta_rad = std::move(arg);
    return Init_PendulumAngle_theta_dot_rad_s(msg_);
  }

private:
  ::me130_interfaces::msg::PendulumAngle msg_;
};

class Init_PendulumAngle_header
{
public:
  Init_PendulumAngle_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PendulumAngle_theta_rad header(::me130_interfaces::msg::PendulumAngle::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_PendulumAngle_theta_rad(msg_);
  }

private:
  ::me130_interfaces::msg::PendulumAngle msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::me130_interfaces::msg::PendulumAngle>()
{
  return me130_interfaces::msg::builder::Init_PendulumAngle_header();
}

}  // namespace me130_interfaces

#endif  // ME130_INTERFACES__MSG__DETAIL__PENDULUM_ANGLE__BUILDER_HPP_
