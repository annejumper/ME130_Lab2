// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from me130_interfaces:msg/MotorCommand.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "me130_interfaces/msg/motor_command.hpp"


#ifndef ME130_INTERFACES__MSG__DETAIL__MOTOR_COMMAND__TRAITS_HPP_
#define ME130_INTERFACES__MSG__DETAIL__MOTOR_COMMAND__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "me130_interfaces/msg/detail/motor_command__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace me130_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const MotorCommand & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: u
  {
    out << "u: ";
    rosidl_generator_traits::value_to_yaml(msg.u, out);
    out << ", ";
  }

  // member: mode
  {
    out << "mode: ";
    rosidl_generator_traits::value_to_yaml(msg.mode, out);
    out << ", ";
  }

  // member: freq_hz
  {
    out << "freq_hz: ";
    rosidl_generator_traits::value_to_yaml(msg.freq_hz, out);
    out << ", ";
  }

  // member: amplitude
  {
    out << "amplitude: ";
    rosidl_generator_traits::value_to_yaml(msg.amplitude, out);
    out << ", ";
  }

  // member: step_duty
  {
    out << "step_duty: ";
    rosidl_generator_traits::value_to_yaml(msg.step_duty, out);
    out << ", ";
  }

  // member: segment
  {
    out << "segment: ";
    rosidl_generator_traits::value_to_yaml(msg.segment, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MotorCommand & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: header
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "header:\n";
    to_block_style_yaml(msg.header, out, indentation + 2);
  }

  // member: u
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "u: ";
    rosidl_generator_traits::value_to_yaml(msg.u, out);
    out << "\n";
  }

  // member: mode
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mode: ";
    rosidl_generator_traits::value_to_yaml(msg.mode, out);
    out << "\n";
  }

  // member: freq_hz
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "freq_hz: ";
    rosidl_generator_traits::value_to_yaml(msg.freq_hz, out);
    out << "\n";
  }

  // member: amplitude
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "amplitude: ";
    rosidl_generator_traits::value_to_yaml(msg.amplitude, out);
    out << "\n";
  }

  // member: step_duty
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "step_duty: ";
    rosidl_generator_traits::value_to_yaml(msg.step_duty, out);
    out << "\n";
  }

  // member: segment
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "segment: ";
    rosidl_generator_traits::value_to_yaml(msg.segment, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MotorCommand & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace me130_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use me130_interfaces::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const me130_interfaces::msg::MotorCommand & msg,
  std::ostream & out, size_t indentation = 0)
{
  me130_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use me130_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const me130_interfaces::msg::MotorCommand & msg)
{
  return me130_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<me130_interfaces::msg::MotorCommand>()
{
  return "me130_interfaces::msg::MotorCommand";
}

template<>
inline const char * name<me130_interfaces::msg::MotorCommand>()
{
  return "me130_interfaces/msg/MotorCommand";
}

template<>
struct has_fixed_size<me130_interfaces::msg::MotorCommand>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<me130_interfaces::msg::MotorCommand>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<me130_interfaces::msg::MotorCommand>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ME130_INTERFACES__MSG__DETAIL__MOTOR_COMMAND__TRAITS_HPP_
