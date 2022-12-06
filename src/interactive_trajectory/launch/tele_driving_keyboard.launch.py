#basic launch lib
# from http.server import executable
# from modulefinder import packagePathMap
import os
import launch
import launch_ros
#parameter file needed#
import os
import yaml
from ament_index_python import get_package_share_directory


def generate_launch_description():

   # rviz_config_path =  '/home/tofstudent/Remote_Driving/sa_zhao/config/trajInteractive.rviz'
   rviz_config_path =  '/home/zsp/Remote_Driving/sa_zhao/config/trajInteractive.rviz'

   paramFilepath = os.path.join(
        get_package_share_directory('interactive_trajectory'),
        'config',
        'longitudinal_control.param.yaml'
    )

   with open(paramFilepath, 'r') as file:
        configParams = yaml.safe_load(file)['pid_longitudinal_control']["ros__parameters"]

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

   discrete_pid_node = launch_ros.actions.Node(
            package='interactive_trajectory',
            executable='pid_longitudinal_control',
            name='pid_longitudinal_control',
            output='screen',
            parameters=[configParams]
   )

   carla_bridge_node = launch_ros.actions.Node(
            package='interactive_trajectory',
            executable='carla_bridge',
            name='carla_bridge',
            output='screen'
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
         # pure_pursuit_node,
         discrete_pid_node,
         carla_bridge_node,
         static_tf2_node,
         pure_puresuit,
         corriodor_node,
         ebs_node
     ])