// Copyright 2020 Simon Hoffmann
#pragma once
#include <stdio.h>
#include <rclcpp/rclcpp.hpp>
#include <map>
#include <string>
#include <memory>
#include <utility>
// #include "VirtualInputDevice.h"
#include "UsbInputDevice.h"
#if SENSO_MACRO // not for open source
#include "SensoInputDevice.h"
#endif
#include "RosInterface.h"
#include "tod_msgs/joystickConfig.h"
#include "tod_msgs/inputDevice.h"
#include "sensor_msgs/msg/joy.h"
#include <filesystem>
#include "tod_msgs/srv/input_device.hpp"

struct AxisItem{
    AxisItem(joystick::AxesPos pos, bool inv): position(pos), invertAxes(inv) {}
    joystick::AxesPos position;
    bool invertAxes;
};

class InputDeviceController {
public:
    explicit InputDeviceController(int argc, char** argv);

    ~InputDeviceController();
    void terminate();

private:
    // Input Device Configuration
    std::map<std::string, std::shared_ptr<MyInputDevice>> _inputDevices;
    std::map<int, joystick::ButtonPos> _buttonMapping;
    std::map<int, AxisItem> _axisMapping;

    // Input Devices Callback
    void callback_axis_changed(const int axis, const double value);
    void callback_button_changed(const int button, const int state);
    void callback_error(const std::string& errorMsg);

    // Service Callback
    bool callback_change_device_request(
        const std::shared_ptr<tod_msgs::srv::InputDevice::Request> request,
        const std::shared_ptr<tod_msgs::srv::InputDevice::Response> response);

    // other Member Variables
    bool _configurationMode{false};
    std::shared_ptr<RosInterface> _ros;

    // other Member Functions
    void change_input_device();
    void update_mapping_from_param_workspace();
};
