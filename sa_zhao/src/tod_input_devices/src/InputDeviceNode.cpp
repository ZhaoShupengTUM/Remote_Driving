//Copyright 2020 Simon Hoffmann

#include <rclcpp/rclcpp.hpp>
#include <QtWidgets/QApplication>
#include "InputDeviceController.h"

int main(int argc, char **argv) {
  QApplication a(argc, argv);
  rclcpp::init(argc, argv);

  InputDeviceController device(argc, argv);

  a.setQuitOnLastWindowClosed(false);
  return a.exec();
}
