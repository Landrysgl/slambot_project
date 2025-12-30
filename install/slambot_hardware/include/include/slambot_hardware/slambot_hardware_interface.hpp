#ifndef SLAMBOT_HARDWARE_INTERFACE_HPP
#define SLAMBOT_HARDWARE_INTERFACE_HPP

#include "hardware_interface/system_interface.hpp"
#include "slambot_hardware/esp32_driver.hpp"
#include "slambot_hardware/wheel.hpp"

#include <memory>
#include <string>
#include <vector>

namespace slambot_hardware {

class SlambotHardwareInterface : public hardware_interface::SystemInterface
{

    struct Config
{
  std::string left_wheel_name = "";
  std::string right_wheel_name = "";
  float loop_rate = 0.0;
  std::string device = "";
  int baud_rate = 0;
  int timeout_ms = 0;
  int enc_counts_per_rev = 0;
};

public:
    // Lifecycle node override
    hardware_interface::CallbackReturn
        on_configure(const rclcpp_lifecycle::State & previous_state) override;
    hardware_interface::CallbackReturn
        on_activate(const rclcpp_lifecycle::State & previous_state) override;
    hardware_interface::CallbackReturn
        on_deactivate(const rclcpp_lifecycle::State & previous_state) override;
    hardware_interface::CallbackReturn
        on_cleanup(const rclcpp_lifecycle::State & previous_state) override;

    // SystemInterface override
hardware_interface::CallbackReturn on_init(
    const hardware_interface::HardwareComponentInterfaceParams & params) override;
    hardware_interface::return_type
        read(const rclcpp::Time & time, const rclcpp::Duration & period) override;
    hardware_interface::return_type
        write(const rclcpp::Time & time, const rclcpp::Duration & period) override;

private:

    EspComms comms_;
    Config cfg_;
    Wheel wheel_l_;
    Wheel wheel_r_;

}; // class SlambotHardwareInterface

} // namespace slambot_hardware


#endif
