// Copyright 2020 Simon Hoffmann
#include <rclcpp/rclcpp.hpp>
#include "CommandCreator.h"

int main(int argc, char **argv) {
    rclcpp::init(argc, argv);
    rclcpp::spin(std::make_shared<CommandCreator>());
    rclcpp::shutdown();
    return 0;
}
