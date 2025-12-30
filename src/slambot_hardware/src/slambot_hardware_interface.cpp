#include "slambot_hardware/slambot_hardware_interface.hpp"
#include <chrono>
#include <cmath>
#include <limits>
#include <memory>
#include <vector>

#include "hardware_interface/types/hardware_interface_type_values.hpp"
#include "rclcpp/rclcpp.hpp"

namespace slambot_hardware {

hardware_interface::CallbackReturn SlambotHardwareInterface::on_init(
    const hardware_interface::HardwareComponentInterfaceParams & params)
{
    if (hardware_interface::SystemInterface::on_init(params) !=
        hardware_interface::CallbackReturn::SUCCESS)
    {
        return hardware_interface::CallbackReturn::ERROR;
    }


  info_ = params.hardware_info;

    
  cfg_.left_wheel_name = info_.hardware_parameters["left_wheel_name"];
  cfg_.right_wheel_name = info_.hardware_parameters["right_wheel_name"];
  cfg_.loop_rate = std::stof(info_.hardware_parameters["loop_rate"]);
  cfg_.device = info_.hardware_parameters["device"];
  cfg_.baud_rate = std::stoi(info_.hardware_parameters["baud_rate"]);
  cfg_.timeout_ms = std::stoi(info_.hardware_parameters["timeout_ms"]);
  cfg_.enc_counts_per_rev = std::stoi(info_.hardware_parameters["enc_counts_per_rev"]);


  wheel_l_.setup(cfg_.left_wheel_name, cfg_.enc_counts_per_rev);
  wheel_r_.setup(cfg_.right_wheel_name, cfg_.enc_counts_per_rev);


  for (const hardware_interface::ComponentInfo & joint : info_.joints)
  {
    // DiffBotSystem has exactly two states and one command interface on each joint
    if (joint.command_interfaces.size() != 1)
    {
      RCLCPP_FATAL(
        rclcpp::get_logger("SlambotHardware"),
        "Joint '%s' has %zu command interfaces found. 1 expected.", joint.name.c_str(),
        joint.command_interfaces.size());
      return hardware_interface::CallbackReturn::ERROR;
    }

    if (joint.command_interfaces[0].name != hardware_interface::HW_IF_VELOCITY)
    {
      RCLCPP_FATAL(
        rclcpp::get_logger("SlambotHardware"),
        "Joint '%s' have %s command interfaces found. '%s' expected.", joint.name.c_str(),
        joint.command_interfaces[0].name.c_str(), hardware_interface::HW_IF_VELOCITY);
      return hardware_interface::CallbackReturn::ERROR;
    }

    if (joint.state_interfaces.size() != 2)
    {
      RCLCPP_FATAL(
        rclcpp::get_logger("SlambotHardware"),
        "Joint '%s' has %zu state interface. 2 expected.", joint.name.c_str(),
        joint.state_interfaces.size());
      return hardware_interface::CallbackReturn::ERROR;
    }

    if (joint.state_interfaces[0].name != hardware_interface::HW_IF_POSITION)
    {
      RCLCPP_FATAL(
        rclcpp::get_logger("SlambotHardware"),
        "Joint '%s' have '%s' as first state interface. '%s' expected.", joint.name.c_str(),
        joint.state_interfaces[0].name.c_str(), hardware_interface::HW_IF_POSITION);
      return hardware_interface::CallbackReturn::ERROR;
    }

    if (joint.state_interfaces[1].name != hardware_interface::HW_IF_VELOCITY)
    {
      RCLCPP_FATAL(
        rclcpp::get_logger("SlambotHardware"),
        "Joint '%s' have '%s' as second state interface. '%s' expected.", joint.name.c_str(),
        joint.state_interfaces[1].name.c_str(), hardware_interface::HW_IF_VELOCITY);
      return hardware_interface::CallbackReturn::ERROR;
    }
  }


    return hardware_interface::CallbackReturn::SUCCESS;
}

hardware_interface::CallbackReturn SlambotHardwareInterface::on_configure(
    const rclcpp_lifecycle::State & previous_state)
{
    (void)previous_state;

    // for (const auto & [name, descr] : joint_command_interfaces_)
    // {
    //     RCLCPP_INFO(get_logger(), "COMMAND INTERFACE NAME: ");
    //     RCLCPP_INFO(get_logger(), name.c_str());
    // }
    // for (const auto & [name, descr] : joint_state_interfaces_)
    // {
    //     RCLCPP_INFO(get_logger(), "STATE INTERFACE NAME: ");
    //     RCLCPP_INFO(get_logger(), name.c_str());
    // }

      RCLCPP_INFO(rclcpp::get_logger("SlambotHardware"), "Configuring ...please wait...");
  if (comms_.connected())
  {
    comms_.disconnect();
  }
  comms_.connect(cfg_.device, cfg_.baud_rate, cfg_.timeout_ms);
  RCLCPP_INFO(rclcpp::get_logger("SlambotHardware"), "Successfully configured!");

    return hardware_interface::CallbackReturn::SUCCESS;
}

hardware_interface::CallbackReturn SlambotHardwareInterface::on_activate(
    const rclcpp_lifecycle::State & previous_state)
{
    (void)previous_state;
    set_state("revolution_3/velocity", 0.0);
    set_state("revolution_5/velocity", 0.0);
    set_state("revolution_3/position", 0.0);
    set_state("revolution_5/position", 0.0);




  RCLCPP_INFO(rclcpp::get_logger("SlambotHardware"), "Activating ...please wait...");
  if (!comms_.connected())
  {
    return hardware_interface::CallbackReturn::ERROR;
  }
  RCLCPP_INFO(rclcpp::get_logger("SlambotHardware"), "Successfully activated!");

    return hardware_interface::CallbackReturn::SUCCESS;
}

hardware_interface::CallbackReturn SlambotHardwareInterface::on_deactivate(
    const rclcpp_lifecycle::State & previous_state)
{
    (void)previous_state;


  RCLCPP_INFO(rclcpp::get_logger("SlambotHardware"), "Deactivating ...please wait...");
  RCLCPP_INFO(rclcpp::get_logger("SlambotHardware"), "Successfully deactivated!");

  return hardware_interface::CallbackReturn::SUCCESS;
}


hardware_interface::CallbackReturn SlambotHardwareInterface::on_cleanup(
  const rclcpp_lifecycle::State & previous_state)
{
  (void)previous_state;

  RCLCPP_INFO(rclcpp::get_logger("SlambotHardware"), "Cleaning up ...please wait...");
  if (comms_.connected())
  {
    comms_.disconnect();
  }
  RCLCPP_INFO(rclcpp::get_logger("SlambotHardware"), "Successfully cleaned up!");

  return hardware_interface::CallbackReturn::SUCCESS;
}



hardware_interface::return_type SlambotHardwareInterface::read(
  const rclcpp::Time &, const rclcpp::Duration & period)
{

    // double left_vel = driver_->getVelocityRadianPerSec(left_motor_id_);
    // double right_vel = -1.0 * driver_->getVelocityRadianPerSec(right_motor_id_);
    // if (abs(left_vel) < 0.03) { left_vel = 0.0; }
    // if (abs(right_vel) < 0.03) { right_vel = 0.0; }
    // set_state("base_left_wheel_joint/velocity", left_vel);
    // set_state("base_right_wheel_joint/velocity", right_vel);
    // set_state("base_left_wheel_joint/position", get_state("base_left_wheel_joint/position") + left_vel * period.seconds());
    // set_state("base_right_wheel_joint/position", get_state("base_right_wheel_joint/position") + right_vel * period.seconds());
    // RCLCPP_INFO(get_logger(), "left vel: %lf, right vel: %lf, left pos: %lf, right pos: %lf",
    //          left_vel, right_vel, get_state("base_left_wheel_joint/position"), get_state("base_right_wheel_joint/position"));
   
  if (!comms_.connected())
    return hardware_interface::return_type::ERROR;

  comms_.read_encoder_values(wheel_l_.enc, wheel_r_.enc);

  // LEFT
  double prev_pos = wheel_l_.pos;
  wheel_l_.pos += wheel_l_.enc * wheel_l_.rads_per_count;
  wheel_l_.vel = (wheel_l_.pos - prev_pos) / period.seconds();

  set_state("revolution_3/position", wheel_l_.pos);
  set_state("revolution_3/velocity", wheel_l_.vel);

  // RIGHT
  prev_pos = wheel_r_.pos;
  wheel_r_.pos += wheel_r_.enc * wheel_r_.rads_per_count;
  wheel_r_.vel = (wheel_r_.pos - prev_pos) / period.seconds();

  set_state("revolution_5/position", wheel_r_.pos);
  set_state("revolution_5/velocity", wheel_r_.vel);

  return hardware_interface::return_type::OK;
}


hardware_interface::return_type SlambotHardwareInterface::write(
  const rclcpp::Time &, const rclcpp::Duration & period)
{
    (void)time;
    (void)period;
    // RCLCPP_INFO(get_logger(), "left vel: %lf, right vel: %lf", get_command("base_left_wheel_joint/velocity"), 
    //                     get_command("base_right_wheel_joint/velocity"));

  if (!comms_.connected())
    return hardware_interface::return_type::ERROR;

  wheel_l_.cmd = get_command("revolution_3/velocity");
  wheel_r_.cmd = get_command("revolution_5/velocity");

  std::stringstream ss;
  ss << "m " << wheel_l_.cmd << " " << wheel_r_.cmd << "\n";

  comms_.send_msg(ss.str(), false);

  return hardware_interface::return_type::OK;
}


} // namespace slambot_hardware

#include "pluginlib/class_list_macros.hpp"

PLUGINLIB_EXPORT_CLASS(slambot_hardware::SlambotHardwareInterface, hardware_interface::SystemInterface)