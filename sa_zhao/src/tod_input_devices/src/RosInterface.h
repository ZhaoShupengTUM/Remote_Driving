// Copyright 2020 Simon Hoffmann
#pragma once
#define BOOST_BIND_NO_PLACEHOLDERS

#include <thread>
#include <memory>
#include <string>
#include <vector>
#include <rclcpp/rclcpp.hpp>
#include "sensor_msgs/msg/joy.hpp"
#include "std_msgs/msg/string.hpp"
#include "rclcpp/logger.hpp"
#include "tod_msgs/srv/input_device.hpp"
#include <boost/bind.hpp>


using namespace std::placeholders;

class InputDeviceController;

class RosInterface : public rclcpp::Node {
public:
    explicit RosInterface(int argc, char **pArgv, InputDeviceController* parent);
    ~RosInterface();
    bool init();
    void terminate() { _active = false; }

    bool has_param(const std::string& paramName){return node->has_parameter(paramName);}
    bool clear_joystick_msg();

    // Getters
    std::string get_node_name();
    static std::string get_package_path();
    // Setters
    void set_axis(const int &axis, const float &value);
    void set_button(const int &button, const int &state);
    void set_debug_mode();

    template <typename T, typename TF, typename... Ts>
    void add_subscriber(
        const std::string& topicName, TF&& func , Ts... args) {
        if (node){
            _subscriber.push_back(node->create_subscription<T>(topicName, 1, boost::bind(func, _1, args...)));
        }
    }

    template<typename T>
    bool get_param(const std::string& paramName, T &retVal) {
        if (!node->get_parameter(paramName).as_bool()){
            RCLCPP_ERROR(this->get_logger(), this->get_node_name().c_str(), paramName.c_str()); //TODO: check
            return false;
        }
        return true;
    }

    template<typename T>
    bool get_optional_param(const std::string& paramName, T &retVal) {
        if (!node->get_parameter(paramName).as_bool()){
            RCLCPP_DEBUG(this->get_logger(), this->get_node_name().c_str(), paramName.c_str()); //TODO: check
            return false;
        }
        return true;
    }

    std::shared_ptr<rclcpp::Node> node;
    std::vector<rclcpp::Service<tod_msgs::srv::InputDevice>::SharedPtr> services;

private:
    int m_Init_argc;
    char** m_pInit_argv;
    bool _active{true};
    std::thread _rosThread;
    sensor_msgs::msg::Joy _operatorMsg;

    std::vector<rclcpp::Subscription<std_msgs::msg::String>::SharedPtr> _subscriber;
    rclcpp::Publisher<sensor_msgs::msg::Joy>::SharedPtr _joystickMsgPublisher;

    InputDeviceController* _parent;
    void run();
};