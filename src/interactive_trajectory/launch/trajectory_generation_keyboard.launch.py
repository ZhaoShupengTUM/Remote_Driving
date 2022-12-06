#launch the trajectory generation test
from launch_ros.actions import Node
from launch import LaunchDescription

from ament_index_python.packages import get_package_share_path
from launch.actions import DeclareLaunchArgument
from launch.substitutions import Command, LaunchConfiguration

from launch_ros.parameter_descriptions import ParameterValue

def generate_launch_description():

   rviz_config_path =  '/home/zsp/sa_zhao/config/trajectory_generation_test.rviz'

   rviz_arg = DeclareLaunchArgument(
      name='rvizconfig', 
      default_value=str(rviz_config_path),
      description='Absolute path to rviz config file')

   visual_node =  Node(
            package='interactive_trajectory',
            executable='traj_visualization',
            name='traj_visualization',
            output='screen',
            )

   tf_node = Node(
            package='interactive_trajectory',
            executable='tf_path',
            name='tf_path',
            output='screen',
            )

   collect_node = Node(
            package='interactive_trajectory',
            executable='traj_collect',
            name='traj_collect',
            output='screen',
            )

   rviz_node = Node(
            package='rviz2',
            executable='rviz2',
            name='rviz2',
            output = 'screen',
            arguments=['-d',  LaunchConfiguration('rvizconfig')],
         )  

   static_tf2_node = Node(
      package="tf2_ros",
      executable='static_transform_publisher',
      arguments=['0', '0', '0', '0', '0', '0', 'ego_vehicle', 'path_start']
   )

   return LaunchDescription([
         rviz_arg,
         visual_node,
         tf_node,
         collect_node,
         rviz_node,
         static_tf2_node
     ])