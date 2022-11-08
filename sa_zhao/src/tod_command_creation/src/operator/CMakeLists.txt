set(TARGETS ${TARGETS} OperatorCommandCreator)
add_executable(OperatorCommandCreator CommandCreatorNode.cpp CommandCreator.cpp)
ament_target_dependencies(OperatorCommandCreator rclcpp tod_msgs traj_interfaces)
target_include_directories(OperatorCommandCreator PRIVATE ${tod_msgs_INCLUDE_DIRS})

# set(TARGETS ${TARGETS} OperatorPrimaryCommandSender)
# add_executable(OperatorPrimaryCommandSender PrimaryCommandSender.cpp)
# ament_target_dependencies(OperatorPrimaryCommandSender rclcpp tod_msgs tod_network)

# set(TARGETS ${TARGETS} OperatorSecondaryCommandSender)
# add_executable(OperatorSecondaryCommandSender SecondaryCommandSender.cpp)
# ament_target_dependencies(OperatorSecondaryCommandSender rclcpp tod_msgs tod_network)

#set(TARGETS ${TARGETS} ForceFeedbackController)
#add_executable(ForceFeedbackController ForceFeedbackControllerNode.cpp ForceFeedbackController.cpp)
#ament_target_dependencies(ForceFeedbackController rclcpp tod_msgs tod_core)

install(
    TARGETS ${TARGETS}
    DESTINATION lib/${PROJECT_NAME}
)
