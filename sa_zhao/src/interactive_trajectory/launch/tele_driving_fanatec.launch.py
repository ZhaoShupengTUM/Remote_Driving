#basic launch lib
#This launch file will launch the tele_driving with the driving simulator fanactec
from http.server import executable
from modulefinder import packagePathMap
import os
import launch
import launch_ros

from ament_index_python.packages import get_package_share_directory
from launch_ros.parameter_descriptions import ParameterValue

def generate_launch_description():

   # rviz_config_path =  '/home/tofstudent/Remote_Driving/sa_zhao/config/trajInteractive.rviz'
   rviz_config_path =  '/home/zsp/Remote_Driving/sa_zhao/config/trajInteractive.rviz'

   rviz_arg = launch.actions.DeclareLaunchArgument(
      name='rvizconfig', 
      default_value=str(rviz_config_path),
      description='Absolute path to rviz config file')

   visual_node =  launch_ros.actions.Node(
            package='interactive_trajectory',
            executable='traj_visualization',
            name='traj_visualization',
            output='screen',
            remappings=[('/interactive/param', '/Operator/InputDevices/interactive/param')]
            )

   tf_node = launch_ros.actions.Node(
            package='interactive_trajectory',
            executable='tf_path',
            name='tf_pathframe_transfer',
            output='screen',
            remappings=[('/interactive/param', '/Operator/InputDevices/interactive/param')]
            )

   collect_node = launch_ros.actions.Node(
            package='interactive_trajectory',
            executable='traj_collect',
            name='traj_collect',
            output='screen',
            remappings=[('/interactive/param', '/Operator/InputDevices/interactive/param')]
            )

   discrete_pid_node = launch_ros.actions.Node(
            package='interactive_trajectory',
            executable='pid_longitudinal_control',
            name='pid_longitudinal_control',
            output='screen',
            remappings=[('/interactive/param', '/Operator/InputDevices/interactive/param')]
   )

   carla_bridge_node = launch_ros.actions.Node(
            package='interactive_trajectory',
            executable='carla_bridge',
            name='carla_bridge',
            output='screen',
            remappings=[('/interactive/param', '/Operator/InputDevices/interactive/param')]
            )

   corriodor_node = launch_ros.actions.Node(
            package='interactive_trajectory',
            executable='corridor',
            name='corridor',
            output='screen'
            )

   ebs_node = launch_ros.actions.Node(
            package='interactive_trajectory',
            executable='collsion_check',
            name='ebs_collsion_detection',
            output='screen'
            )

   # fanactec_node = launch_ros.actions.Node(
   #          package='tod_command_creation',
   #          executable='OperatorCommandCreator',
   #          name='operator_command_creator',
   #          output='screen'
   #          )

   rviz_node = launch_ros.actions.Node(
            package='rviz2',
            executable='rviz2',
            name='rviz2',
            output = 'screen',
            arguments=['-d',  launch.substitutions.LaunchConfiguration('rvizconfig')],
         )
      
   static_tf2_node = launch_ros.actions.Node(
      package="tf2_ros",
      executable='static_transform_publisher',
      arguments=['-1.44', '0', '0', '0', '0', '0', 'ego_vehicle', 'base_link']
   )
   
   pure_puresuit = launch.actions.IncludeLaunchDescription(launch.launch_description_sources.PythonLaunchDescriptionSource(
      os.path.join
      (
         get_package_share_directory(
            'interactive_trajectory'),
            'launch',
            'pure_pursuit.launch.py'
         )
      )
   )
   
   return launch.LaunchDescription([
         rviz_arg,
         visual_node,
         tf_node,
         collect_node,
         rviz_node,
         discrete_pid_node,
         carla_bridge_node,
         static_tf2_node,
         pure_puresuit,
         corriodor_node,
         ebs_node,
         # fanactec_node
     ])