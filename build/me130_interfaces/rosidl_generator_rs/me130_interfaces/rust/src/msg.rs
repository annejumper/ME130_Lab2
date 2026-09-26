#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};



// Corresponds to me130_interfaces__msg__PendulumAngle
/// Pendulum angle from the IMU node.
/// theta is measured from the zero set by the imu_node "zero" service:
/// hanging straight down for the characterization tests, upright for balancing.

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct PendulumAngle {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::Header,


    // This member is not documented.
    #[allow(missing_docs)]
    pub theta_rad: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub theta_dot_rad_s: f64,

}



impl Default for PendulumAngle {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::PendulumAngle::default())
  }
}

impl rosidl_runtime_rs::Message for PendulumAngle {
  type RmwMsg = super::msg::rmw::PendulumAngle;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        theta_rad: msg.theta_rad,
        theta_dot_rad_s: msg.theta_dot_rad_s,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
      theta_rad: msg.theta_rad,
      theta_dot_rad_s: msg.theta_dot_rad_s,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: std_msgs::msg::Header::from_rmw_message(msg.header),
      theta_rad: msg.theta_rad,
      theta_dot_rad_s: msg.theta_dot_rad_s,
    }
  }
}


// Corresponds to me130_interfaces__msg__EncoderState
/// Quadrature encoder on the motor shaft (before the gearbox).

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct EncoderState {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::Header,


    // This member is not documented.
    #[allow(missing_docs)]
    pub counts: i64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub counts_per_sec: f64,

}



impl Default for EncoderState {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::EncoderState::default())
  }
}

impl rosidl_runtime_rs::Message for EncoderState {
  type RmwMsg = super::msg::rmw::EncoderState;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        counts: msg.counts,
        counts_per_sec: msg.counts_per_sec,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
      counts: msg.counts,
      counts_per_sec: msg.counts_per_sec,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: std_msgs::msg::Header::from_rmw_message(msg.header),
      counts: msg.counts,
      counts_per_sec: msg.counts_per_sec,
    }
  }
}


// Corresponds to me130_interfaces__msg__MotorCommand
/// Command into the motor node.
///
/// u is the PRE-deadband signed duty in [-1, 1]: sign is direction, magnitude is
/// effort. motor_node applies the deadband feed-forward and the motor sign, so
/// every producer speaks the same units and only one node knows the hardware.
///
/// The remaining fields are test context, carried here so logger_node can write
/// a self-describing CSV without subscribing to each test node individually.

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct MotorCommand {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::Header,


    // This member is not documented.
    #[allow(missing_docs)]
    pub u: f64,

    /// coast | pd | step | sine
    pub mode: std::string::String,

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
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::MotorCommand::default())
  }
}

impl rosidl_runtime_rs::Message for MotorCommand {
  type RmwMsg = super::msg::rmw::MotorCommand;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        u: msg.u,
        mode: msg.mode.as_str().into(),
        freq_hz: msg.freq_hz,
        amplitude: msg.amplitude,
        step_duty: msg.step_duty,
        segment: msg.segment,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
      u: msg.u,
        mode: msg.mode.as_str().into(),
      freq_hz: msg.freq_hz,
      amplitude: msg.amplitude,
      step_duty: msg.step_duty,
      segment: msg.segment,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: std_msgs::msg::Header::from_rmw_message(msg.header),
      u: msg.u,
      mode: msg.mode.to_string(),
      freq_hz: msg.freq_hz,
      amplitude: msg.amplitude,
      step_duty: msg.step_duty,
      segment: msg.segment,
    }
  }
}


