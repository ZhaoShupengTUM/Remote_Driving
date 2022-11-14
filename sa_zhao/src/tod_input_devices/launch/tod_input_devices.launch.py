import os
import yaml
import launch
import launch_ros
from ament_index_python import get_package_share_directory

def generate_launch_description():

    ld = launch.LaunchDescription()

    paramFilepath = os.path.join(
        get_package_share_directory('tod_input_devices'),
        'config',
        'fanatec.param.yaml'
    )

    with open(paramFilepath, 'r') as file:
        configParams = yaml.safe_load(file)['Operator/InputDevices/UsbInputDevice']["ros__parameters"]

    tod_input_device_node = launch_ros.actions.Node(
        package='tod_input_devices',
        executable='InputDevice',
        name='InputDevice',
        namespace='Operator/InputDevices',
        output='screen',
        parameters=[configParams]
    )

    ld.add_action(tod_input_device_node)

    return ld