cmake_minimum_required(VERSION 3.5)
project(random_trajectory)

# Default to C99
if(NOT CMAKE_C_STANDARD)
  set(CMAKE_C_STANDARD 99)
endif()

# Default to C++14
if(NOT CMAKE_CXX_STANDARD)
  set(CMAKE_CXX_STANDARD 14)
endif()

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# find dependencies
find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)
find_package(rclpy REQUIRED)
find_package(std_msgs REQUIRED)
find_package(traj_interfaces REQUIRED)
find_package(nav_msgs REQUIRED)
find_package(tf2 REQUIRED)
find_package(tf2_ros REQUIRED)
find_package(tf2_geometry_msgs REQUIRED)
find_package(visualization_msgs REQUIRED)
find_package(geometry_msgs REQUIRED)
find_package(traj_interfaces REQUIRED)
# uncomment the following section in order to fill in
# further dependencies manually.
# find_package(<dependency> REQUIRED)

add_executable(Lenkrad src/LenkradPub.cpp)
ament_target_dependencies(Lenkrad rclcpp std_msgs)

add_executable(Gaspedal src/GaspedalPub.cpp)
ament_target_dependencies(Gaspedal rclcpp std_msgs)

add_executable(Taster src/TasterPub.cpp)
ament_target_dependencies(Taster rclcpp std_msgs)

add_executable(TrajParam src/TrajPramNode.cpp)
ament_target_dependencies(TrajParam rclcpp std_msgs traj_interfaces)

add_executable(TrajGeneration src/TrajCalcNode.cpp)
ament_target_dependencies(TrajGeneration rclcpp std_msgs nav_msgs tf2 
tf2_ros tf2_geometry_msgs geometry_msgs traj_interfaces)

add_executable(VehicleMarker src/VehicleMarkerNode.cpp)
ament_target_dependencies(VehicleMarker tf2 
tf2_ros tf2_geometry_msgs geometry_msgs nav_msgs rclcpp visualization_msgs)

add_executable(TfPath src/TfPathStartNode.cpp)
ament_target_dependencies(TfPath tf2 
tf2_ros geometry_msgs rclcpp std_msgs nav_msgs)

add_executable(TrajCollect src/TrajCollectNode.cpp)
ament_target_dependencies(TrajCollect rclcpp std_msgs nav_msgs tf2_geometry_msgs tf2)

########### the extern include file###################
#include the extern head file and source file
include_directories(
  include
  ${catkin_INCLUDE_DIRS}
)

#declare this library
add_library(pfas
    include/pfas_head/TrajectoryPrediction.hpp
    include/pfas_src/TrajectoryPrediction.cpp
)

#link the node and library
target_link_libraries(TrajGeneration
pfas 
${catkin_LIBRARIES})
########### the extern include file ends################

install(TARGETS
  Lenkrad
  Gaspedal
  Taster
  TrajParam
  TrajGeneration
  TrajCollect
  VehicleMarker
  TfPath
  DESTINATION lib/${PROJECT_NAME})

if(BUILD_TESTING)
  find_package(ament_lint_auto REQUIRED)
  # the following line skips the linter which checks for copyrights
  # uncomment the line when a copyright and license is not present in all source files
  #set(ament_cmake_copyright_FOUND TRUE)
  # the following line skips cpplint (only works in a git repo)
  # uncomment the line when this package is not in a git repo
  #set(ament_cmake_cpplint_FOUND TRUE)
  ament_lint_auto_find_test_dependencies()
endif()

# Install launch files.
install(DIRECTORY
  launch
  DESTINATION share/${PROJECT_NAME}/
)

#install the config file
# install(DIRECTORY
#   config
#   DESTINATION share/${PROJECT_NAME}/
# )

ament_package()
