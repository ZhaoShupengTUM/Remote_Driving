#basic launch lib
import os
import launch
import launch_ros
#parameter file needed#
import os
import yaml
from ament_index_python import get_package_share_directory


def generate_launch_description():

   rviz_config_path =  '/home/zsp/sa_zhao/config/traj.rviz'

   rviz_arg = launch.actions.DeclareLaunchArgument(
      name='rvizconfig', 
      default_value=str(rviz_config_path),
      description='Absolute path to rviz config file')

   visual_node =  launch_ros.actions.Node(
            package='interactive_trajectory',
            executable='traj_visualization',
            name='traj_visualization',
            output='screen',
            )

   tf_node = launch_ros.actions.Node(
            package='interactive_trajectory',
            executable='tf_path',
            name='tf_pathframe_transfer',
            output='screen',
            )

   collect_node = launch_ros.actions.Node(
            package='interactive_trajectory',
            executable='traj_collect',
            name='traj_collect',
            output='screen'
            )

   obstacle_node = launch_ros.actions.Node(
            package='interactive_trajectory',
            executable='obstacle_show',
            name='obstacle_show',
            output='screen'
            )

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
      arguments=['-1.44', '0', '0', '0', '0', '0', 'map', 'path_start']
   )
   
   return launch.LaunchDescription([
         static_tf2_node,
         tf_node,
         visual_node,
         rviz_arg,
         rviz_node,
         collect_node,
         obstacle_node
     ])