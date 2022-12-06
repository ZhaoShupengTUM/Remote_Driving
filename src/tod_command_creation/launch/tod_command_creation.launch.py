import launch
import os  #
import yaml #
import launch_ros
from launch.actions import DeclareLaunchArgument
from launch.substitutions import TextSubstitution
from ament_index_python import get_package_share_directory  #

def generate_launch_description():
    ld = launch.LaunchDescription()

    isVehicle = DeclareLaunchArgument(
        "isVehicle", default_value=TextSubstitution(text="false")
    )

    isOperator = DeclareLaunchArgument(
        "isOperator", default_value=TextSubstitution(text="true")
    )

    # isVehicle.default_value

    paramFilepath = os.path.join(
        get_package_share_directory('tod_command_creation'),
        'config',
        'tod_command_creation.param.yaml'
    )

    with open(paramFilepath, 'r') as file:
        configParams = yaml.safe_load(file)['Operator/InputDevices/command_creator']["ros__parameters"]

    tod_command_creation_node = launch_ros.actions.Node(
        package='tod_command_creation',
        executable='OperatorCommandCreator',
        name='command_creator',
        namespace='Operator/InputDevices',
        output='screen',
        parameters=[configParams]
    )

    ld.add_action(tod_command_creation_node)
    ld.add_action(isVehicle)
    ld.add_action(isOperator)

    return ld