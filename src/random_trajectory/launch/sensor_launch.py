#basic launch lib
from launch_ros.actions import Node
from launch import LaunchDescription

from ament_index_python.packages import get_package_share_path

from launch.actions import DeclareLaunchArgument
from launch.substitutions import Command, LaunchConfiguration
from launch_ros.parameter_descriptions import ParameterValue


def generate_launch_description():

    rviz_config_path =  '/home/zsp/sa_zhao/config/trajRandom.rviz'

    rviz_arg = DeclareLaunchArgument(
      name='rvizconfig', 
      default_value=str(rviz_config_path),
      description='Absolute path to rviz config file')

    gaspedel_node =  Node(
            package='random_trajectory',
            executable='Gaspedal',
            name='Gaspedal',
            output='screen',
            )

    lenkrad_node = Node(
            package='random_trajectory',
            executable='Lenkrad',
            name='Lenkrad',
            output='screen',
            )

    taster_node = Node(
            package='random_trajectory',
            executable='Taster',
            name='Taster',
            output='screen',
            )

    rviz_node = Node(
            package='rviz2',
            executable='rviz2',
            name='rviz2',
            output = 'screen',
            arguments=['-d',  LaunchConfiguration('rvizconfig')],
            )

    return LaunchDescription([
        rviz_arg,
        gaspedel_node,
        lenkrad_node,
        taster_node,
        rviz_node         
        #  Node(
        #     package="tf2_ros",
        #     executable="static_transform_publisher",
        #     output="screen",
        #     arguments=["0", "0", "0.868", "0", "0", "0", "map", "vehicle_frame"]
        # ),
    ])
