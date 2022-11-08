cmake_minimum_required(VERSION 3.5)
set(PROJECT_NAME tod_command_creation)
project(${PROJECT_NAME})
set(CMAKE_CXX_STANDARD 14)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

find_package(ament_cmake REQUIRED)

find_package(rclcpp REQUIRED)
find_package(tod_msgs REQUIRED)
# find_package(tod_helper REQUIRED)

find_package(traj_interfaces REQUIRED)


option(NOT_OPEN_SOURCE "Build open source and not for open source" ON)

option(OPERATOR "Build operator targets" ON)
if (${OPERATOR})
    add_subdirectory(src/operator)
else()
    message("skipping ${PROJECT_NAME} operator targets")
endif()

# option(VEHICLE "Build vehicle targets" OFF)
# if (${VEHICLE})
#     add_subdirectory(src/vehicle)
# else()
#     message("skipping ${PROJECT_NAME} vehicle targets")
# endif()

install(DIRECTORY 
    launch
    config
    DESTINATION share/${PROJECT_NAME}
    )
    
ament_export_dependencies(rclcpp tod_msgs)
ament_package()