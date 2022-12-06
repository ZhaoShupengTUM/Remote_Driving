"""Launch a pure_pursuit controller in a component container."""
import os
from symbol import parameters
import yaml
import launch
from ament_index_python import get_package_share_directory
from launch_ros.actions import ComposableNodeContainer
from launch_ros.descriptions import ComposableNode


def generate_launch_description():
    """Generate launch description with multiple components."""

    configFilepath = os.path.join(
        get_package_share_directory('interactive_trajectory'),
        'config',
        'horizontal_control.param.yaml'
    )

    #load the config file to the composable node
    with open(configFilepath, 'r') as file:
        configParams = yaml.safe_load(file)['pure_pursuit_control']["ros__parameters"]

    container = ComposableNodeContainer(
            name='autoware_container',
            namespace='',
            package='rclcpp_components',
            executable='component_container',
            # parameters = [config],
            composable_node_descriptions=[
                ComposableNode(
                    package='pure_pursuit',
                    plugin='pure_pursuit::PurePursuitNode',
                    name='pure_pursuit_control',
                    parameters=[configParams]
                    )
            ],
            output='screen',
    )

    return launch.LaunchDescription([container])
