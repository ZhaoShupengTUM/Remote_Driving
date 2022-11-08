from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():

   param_node = Node(
            package='random_trajectory',
            executable='TrajParam',
            name='TrajParam',
            output='screen',
            )

   tf_node = Node(
            package='random_trajectory',
            executable='TfPath',
            name='TfPath',
            output='screen',
            )

   generation_node = Node(
            package='random_trajectory',
            executable='TrajGeneration',
            name='TrajGeneration',
            output='screen',
            )

   collect_node = Node(
            package='random_trajectory',
            executable='TrajCollect',
            name='TrajCollect',
            output='screen',
            )


   return LaunchDescription([
          param_node,
          tf_node,
          generation_node,
          collect_node      
     ])