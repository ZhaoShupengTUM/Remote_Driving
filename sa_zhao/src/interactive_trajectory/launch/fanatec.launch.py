"""Launch a pure_pursuit controller in a component container."""
from http.server import executable
from modulefinder import packagePathMap
import os
import launch
import launch_ros

from ament_index_python.packages import get_package_share_directory
from launch_ros.parameter_descriptions import ParameterValue

def generate_launch_description():

    tod_command_creation = launch.actions.IncludeLaunchDescription(launch.launch_description_sources.PythonLaunchDescriptionSource(
      os.path.join
      (
         get_package_share_directory(
            'tod_command_creation'),
            'launch',
            'tod_command_creation.launch.xml'
         )
      )
   )

    return launch.LaunchDescription([tod_command_creation])
