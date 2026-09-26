// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from me130_interfaces:msg/EncoderState.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "me130_interfaces/msg/encoder_state.h"


#ifndef ME130_INTERFACES__MSG__DETAIL__ENCODER_STATE__STRUCT_H_
#define ME130_INTERFACES__MSG__DETAIL__ENCODER_STATE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"

/// Struct defined in msg/EncoderState in the package me130_interfaces.
/**
  * Quadrature encoder on the motor shaft (before the gearbox).
 */
typedef struct me130_interfaces__msg__EncoderState
{
  std_msgs__msg__Header header;
  int64_t counts;
  double counts_per_sec;
} me130_interfaces__msg__EncoderState;

// Struct for a sequence of me130_interfaces__msg__EncoderState.
typedef struct me130_interfaces__msg__EncoderState__Sequence
{
  me130_interfaces__msg__EncoderState * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} me130_interfaces__msg__EncoderState__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ME130_INTERFACES__MSG__DETAIL__ENCODER_STATE__STRUCT_H_
