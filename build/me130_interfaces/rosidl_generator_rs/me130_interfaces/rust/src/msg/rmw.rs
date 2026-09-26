#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};


#[link(name = "me130_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__me130_interfaces__msg__PendulumAngle() -> *const std::ffi::c_void;
}

#[link(name = "me130_interfaces__rosidl_generator_c")]
extern "C" {
    fn me130_interfaces__msg__PendulumAngle__init(msg: *mut PendulumAngle) -> bool;
    fn me130_interfaces__msg__PendulumAngle__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<PendulumAngle>, size: usize) -> bool;
    fn me130_interfaces__msg__PendulumAngle__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<PendulumAngle>);
    fn me130_interfaces__msg__PendulumAngle__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<PendulumAngle>, out_seq: *mut rosidl_runtime_rs::Sequence<PendulumAngle>) -> bool;
}

// Corresponds to me130_interfaces__msg__PendulumAngle
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// Pendulum angle from the IMU node.
/// theta is measured from the zero set by the imu_node "zero" service:
/// hanging straight down for the characterization tests, upright for balancing.

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct PendulumAngle {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::rmw::Header,


    // This member is not documented.
    #[allow(missing_docs)]
    pub theta_rad: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub theta_dot_rad_s: f64,

}



impl Default for PendulumAngle {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !me130_interfaces__msg__PendulumAngle__init(&mut msg as *mut _) {
        panic!("Call to me130_interfaces__msg__PendulumAngle__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for PendulumAngle {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { me130_interfaces__msg__PendulumAngle__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { me130_interfaces__msg__PendulumAngle__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { me130_interfaces__msg__PendulumAngle__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for PendulumAngle {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for PendulumAngle where Self: Sized {
  const TYPE_NAME: &'static str = "me130_interfaces/msg/PendulumAngle";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__me130_interfaces__msg__PendulumAngle() }
  }
}


#[link(name = "me130_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__me130_interfaces__msg__EncoderState() -> *const std::ffi::c_void;
}

#[link(name = "me130_interfaces__rosidl_generator_c")]
extern "C" {
    fn me130_interfaces__msg__EncoderState__init(msg: *mut EncoderState) -> bool;
    fn me130_interfaces__msg__EncoderState__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<EncoderState>, size: usize) -> bool;
    fn me130_interfaces__msg__EncoderState__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<EncoderState>);
    fn me130_interfaces__msg__EncoderState__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<EncoderState>, out_seq: *mut rosidl_runtime_rs::Sequence<EncoderState>) -> bool;
}

// Corresponds to me130_interfaces__msg__EncoderState
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// Quadrature encoder on the motor shaft (before the gearbox).

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct EncoderState {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::rmw::Header,


    // This member is not documented.
    #[allow(missing_docs)]
    pub counts: i64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub counts_per_sec: f64,

}



impl Default for EncoderState {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !me130_interfaces__msg__EncoderState__init(&mut msg as *mut _) {
        panic!("Call to me130_interfaces__msg__EncoderState__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for EncoderState {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { me130_interfaces__msg__EncoderState__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { me130_interfaces__msg__EncoderState__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { me130_interfaces__msg__EncoderState__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for EncoderState {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for EncoderState where Self: Sized {
  const TYPE_NAME: &'static str = "me130_interfaces/msg/EncoderState";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__me130_interfaces__msg__EncoderState() }
  }
}


#[link(name = "me130_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__me130_interfaces__msg__MotorCommand() -> *const std::ffi::c_void;
}

#[link(name = "me130_interfaces__rosidl_generator_c")]
extern "C" {
    fn me130_interfaces__msg__MotorCommand__init(msg: *mut MotorCommand) -> bool;
    fn me130_interfaces__msg__MotorCommand__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<MotorCommand>, size: usize) -> bool;
    fn me130_interfaces__msg__MotorCommand__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<MotorCommand>);
    fn me130_interfaces__msg__MotorCommand__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<MotorCommand>, out_seq: *mut rosidl_runtime_rs::Sequence<MotorCommand>) -> bool;
}

// Corresponds to me130_interfaces__msg__MotorCommand
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// Command into the motor node.
///
/// u is the PRE-deadband signed duty in [-1, 1]: sign is direction, magnitude is
/// effort. motor_node applies the deadband feed-forward and the motor sign, so
/// every producer speaks the same units and only one node knows the hardware.
///
/// The remaining fields are test context, carried here so logger_node can write
/// a self-describing CSV without subscribing to each test node individually.

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct MotorCommand {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::rmw::Header,


    // This member is not documented.
    #[allow(missing_docs)]
    pub u: f64,

    /// coast | pd | step | sine
    pub mode: rosidl_runtime_rs::String,

    /// sine drive only, otherwise 0
    pub freq_hz: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub amplitude: f64,

    /// constant-step drive only, otherwise 0
    pub step_duty: f64,

    /// increments once per test segment (one step, or one frequency)
    pub segment: i32,

}



impl Default for MotorCommand {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !me130_interfaces__msg__MotorCommand__init(&mut msg as *mut _) {
        panic!("Call to me130_interfaces__msg__MotorCommand__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for MotorCommand {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { me130_interfaces__msg__MotorCommand__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { me130_interfaces__msg__MotorCommand__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { me130_interfaces__msg__MotorCommand__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for MotorCommand {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for MotorCommand where Self: Sized {
  const TYPE_NAME: &'static str = "me130_interfaces/msg/MotorCommand";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__me130_interfaces__msg__MotorCommand() }
  }
}


