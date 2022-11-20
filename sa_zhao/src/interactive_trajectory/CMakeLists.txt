cmake_minimum_required(VERSION 3.5)
project(interactive_trajectory)

# Default to C99
if(NOT CMAKE_C_STANDARD)
  set(CMAKE_C_STANDARD 99)
endif()

# Default to C++17
if(NOT CMAKE_CXX_STANDARD)
  set(CMAKE_CXX_STANDARD 17)
endif()

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# find dependencies from ros2
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
find_package(geometry_msgs REQUIRED)
find_package(sensor_msgs REQUIRED)
find_package(ackermann_msgs REQUIRED)

# find the customized interface
find_package(traj_interfaces REQUIRED)

#find the autoware packages
find_package(autoware_auto_planning_msgs REQUIRED)
find_package(autoware_auto_control_msgs REQUIRED)

#find the carla packages
find_package(carla_msgs REQUIRED)

#find the pcl library
find_package(PCL 1.1 REQUIRED COMPONENTS common io)
include_directories(${PCL_INCLUDE_DIRS})
link_directories(${PCL_LIBRARY_DIRS})
add_definitions(${PCL_DEFINITIONS})

#add execuable
add_executable(auto_teleop_key src/telecontrolNode.cpp)
ament_target_dependencies(auto_teleop_key rclcpp geometry_msgs std_msgs traj_interfaces tf2 tf2_ros carla_msgs)

add_executable(traj_visualization src/TrajVisualisationNode.cpp)
ament_target_dependencies(traj_visualization rclcpp std_msgs nav_msgs tf2 tf2_ros tf2_geometry_msgs geometry_msgs traj_interfaces )

add_executable(tf_path src/TfPathStartNode.cpp)
ament_target_dependencies(tf_path tf2 
tf2_ros geometry_msgs rclcpp std_msgs nav_msgs traj_interfaces)

add_executable(traj_collect src/TrajCollectNode.cpp)
ament_target_dependencies(traj_collect rclcpp std_msgs nav_msgs tf2_geometry_msgs tf2 traj_interfaces autoware_auto_planning_msgs)

add_executable(corridor src/CorridorCreationNode.cpp)
ament_target_dependencies(corridor rclcpp std_msgs nav_msgs geometry_msgs ackermann_msgs)

add_executable(carla_bridge src/CarlaBridgeNode.cpp)
ament_target_dependencies(carla_bridge rclcpp carla_msgs nav_msgs tf2_ros tf2 geometry_msgs autoware_auto_control_msgs ackermann_msgs traj_interfaces sensor_msgs)

add_executable(pid_longitudinal_control src/LongitudinalControlNode.cpp)
ament_target_dependencies(pid_longitudinal_control rclcpp nav_msgs  tf2_ros tf2 autoware_auto_planning_msgs traj_interfaces ackermann_msgs carla_msgs)

add_executable(collsion_check src/CollisionDetectionNode.cpp)
ament_target_dependencies(collsion_check rclcpp geometry_msgs sensor_msgs std_msgs)
target_link_libraries(collsion_check ${PCL_LIBRARIES})

########### generate and use the util library###################
include_directories(
  include
  ${catkin_INCLUDE_DIRS}
)

#add util library
add_library(util
    include/util/util_src/TrajectoryPrediction.cpp
    include/util/util_src/CorridorCreation.cpp
    include/util/util_src/DiscretePIDController.cpp
    include/util/util_src/KosTransform.cpp
    include/util/util_src/TrajectoryLength.cpp
    include/util/util_src/CollisionDetection.cpp
)

ament_target_dependencies(util rclcpp)

#link the node and library
target_link_libraries(corridor util)
target_link_libraries(traj_visualization util)
target_link_libraries(traj_collect util)
target_link_libraries(carla_bridge util)
target_link_libraries(pid_longitudinal_control util)
target_link_libraries(collsion_check util)
target_link_libraries(tf_path util)
target_link_libraries(auto_teleop_key util)
########### the util library ends################

#add install
install(TARGETS 
auto_teleop_key
traj_visualization
tf_path
traj_collect
corridor
carla_bridge
pid_longitudinal_control
collsion_check
  DESTINATION lib/${PROJECT_NAME})

if(BUILD_TESTING)
  find_package(ament_lint_auto REQUIRED)
  ament_lint_auto_find_test_dependencies()
endif()

# Install launch files.
install(DIRECTORY
  launch
  DESTINATION share/${PROJECT_NAME}/
)

ament_export_include_directories(src)
#the last call
ament_package()
