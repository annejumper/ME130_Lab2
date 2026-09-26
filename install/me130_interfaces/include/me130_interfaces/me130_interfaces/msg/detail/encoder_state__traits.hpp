// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from me130_interfaces:msg/EncoderState.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "me130_interfaces/msg/encoder_state.hpp"


#ifndef ME130_INTERFACES__MSG__DETAIL__ENCODER_STATE__TRAITS_HPP_
#define ME130_INTERFACES__MSG__DETAIL__ENCODER_STATE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "me130_interfaces/msg/detail/encoder_state__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace me130_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const EncoderState & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: counts
  {
    out << "counts: ";
    rosidl_generator_traits::value_to_yaml(msg.counts, out);
    out << ", ";
  }

  // member: counts_per_sec
  {
    out << "counts_per_sec: ";
    rosidl_generator_traits::value_to_yaml(msg.counts_per_sec, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const EncoderState & msg,
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

  // member: counts
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "counts: ";
    rosidl_generator_traits::value_to_yaml(msg.counts, out);
    out << "\n";
  }

  // member: counts_per_sec
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "counts_per_sec: ";
    rosidl_generator_traits::value_to_yaml(msg.counts_per_sec, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const EncoderState & msg, bool use_flow_style = false)
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
  const me130_interfaces::msg::EncoderState & msg,
  std::ostream & out, size_t indentation = 0)
{
  me130_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use me130_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const me130_interfaces::msg::EncoderState & msg)
{
  return me130_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<me130_interfaces::msg::EncoderState>()
{
  return "me130_interfaces::msg::EncoderState";
}

template<>
inline const char * name<me130_interfaces::msg::EncoderState>()
{
  return "me130_interfaces/msg/EncoderState";
}

template<>
struct has_fixed_size<me130_interfaces::msg::EncoderState>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<me130_interfaces::msg::EncoderState>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<me130_interfaces::msg::EncoderState>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ME130_INTERFACES__MSG__DETAIL__ENCODER_STATE__TRAITS_HPP_
