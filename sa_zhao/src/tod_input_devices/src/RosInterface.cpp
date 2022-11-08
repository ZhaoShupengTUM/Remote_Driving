// Copyright 2020 Simon Hoffmann

#include "RosInterface.h"
// #include <ros/package.h>
#include "InputDeviceController.h"
#include <QMainWindow>
#include <ament_index_cpp/get_package_share_directory.hpp> // TODO: Move this

RosInterface::RosInterface(int argc, char** pArgv, InputDeviceController* parent)
    : m_Init_argc(argc), m_pInit_argv(pArgv), _parent(parent), Node("InputDevice"){
        RCLCPP_INFO(this->get_logger(), "Node created!!");
    clear_joystick_msg();
}

RosInterface::~RosInterface() {
    rclcpp::shutdown(); 
    _rosThread.join();
}

void RosInterface::set_debug_mode() {
    auto logger_set_result = rcutils_logging_set_logger_level(get_logger().get_name(), RCUTILS_LOG_SEVERITY_DEBUG);
}

bool RosInterface::init() {
    // rclcpp::init(m_Init_argc, m_pInit_argv);
    node = rclcpp::Node::make_shared("InputDevice");
    RCLCPP_INFO(this->get_logger(), "Node created!!");

    bool debug{false};
    RCLCPP_INFO_ONCE(node->get_logger(), "TEST!!!");

    //set the status as teleoperation
    _statusMsg.tod_status = _statusMsg.TOD_STATUS_TELEOPERATION; 

    // nh->getParam(ros::this_node::getName() + "/debug", debug);

    if (debug) // print ROS_DEBUG
        auto logger_set_result = rcutils_logging_set_logger_level("test", RCUTILS_LOG_SEVERITY_DEBUG);

    rclcpp::Time init_time_ = rclcpp::Clock().now();

    _joystickMsgPublisher = node->create_publisher<sensor_msgs::msg::Joy>("joystick", 100);
     _statusMsgPublisher = node->create_publisher<tod_msgs::msg::Status>("status_msg", 100);

    _rosThread = std::thread([=]{ run();});
    return true;
}

bool RosInterface::clear_joystick_msg() {
    _operatorMsg.buttons.assign(31, 0);
    _operatorMsg.axes.assign(4, 0);
    return true;
}

void RosInterface::run() {
    // ros::Rate r(1000);
    rclcpp::Rate r(1000);

    // while ( rclcpp::ok() && _active ) {
    while ( rclcpp::ok()) {
        _operatorMsg.header.stamp = this->get_clock()->now();
        _joystickMsgPublisher->publish(_operatorMsg);
        _statusMsgPublisher->publish(_statusMsg);
        rclcpp::spin_some(node);
        r.sleep();
    }
    if ( _parent != nullptr ) {
        _parent->terminate();
    }
}

std::string RosInterface::get_node_name() {
    // return ros::this_node::getName(); // TODO: Check
    return this->get_name();
}

std::string RosInterface::get_package_path() {
    return ament_index_cpp::get_package_share_directory("tod_input_devices");
}

void RosInterface::set_button(const int &button, const int &state) {
    if ( button > _operatorMsg.buttons.size() - 1 ) {
        RCLCPP_ERROR_STREAM(this->get_logger(), get_node_name() << ": tried to access button  " << button
            << " only buttons between 0 and " << _operatorMsg.buttons.size() - 1
            << " possible!");
        return;
    }
    _operatorMsg.buttons.at(button) = state;
}

void RosInterface::set_axis(const int &axis, const float &value) {
    if ( axis > _operatorMsg.axes.size() - 1 ) {
        RCLCPP_ERROR_STREAM(this->get_logger(), get_node_name() << ": tried to access axis " << axis
            << " only axes between 0 and " << _operatorMsg.axes.size() - 1
            << " possible!");
        return;
    }
    _operatorMsg.axes.at(axis) = value;
}

