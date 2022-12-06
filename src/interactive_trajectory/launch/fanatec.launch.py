"""Launch a pure_pursuit controller in a component container."""
# from http.server import executable
# from modulefinder import packagePathMap
import os
import launch
import launch_ros
from launch.launch_description_sources import PythonLaunchDescriptionSource

from ament_index_python.packages import get_package_share_directory
# from launch_ros.parameter_descriptions import ParameterValue

def generate_launch_description():

   ld = launch.LaunchDescription()

   launch_tod_command = launch.actions.IncludeLaunchDescription(PythonLaunchDescriptionSource(
      os.path.join
      (
         get_package_share_directory(
            'tod_command_creation'),
            'launch',
            'tod_command_creation.launch.py'
         )
      )
   )

   launch_tod_devices = launch.actions.IncludeLaunchDescription(PythonLaunchDescriptionSource(
      os.path.join
      (
         get_package_share_directory(
            'tod_input_devices'),
            'launch',
            'tod_input_devices.launch.py'
         )
      )
   )

   ld.add_action(launch_tod_command)
   ld.add_action(launch_tod_devices)

   return ld
