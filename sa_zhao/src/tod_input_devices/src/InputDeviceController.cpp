// Copyright 2020 Simon Hoffmann

#include "InputDeviceController.h"
#include <stdlib.h>
#include <functional>

InputDeviceController::InputDeviceController(int argc, char **argv) {
    _ros = std::make_unique<RosInterface>(argc, argv, this);
    _ros->init();

    _ros->services.push_back(_ros->node->create_service<tod_msgs::srv::InputDevice>(
                            "/change_input_device",
                            std::bind(&InputDeviceController::callback_change_device_request, this, _1, _2)));


    bool debug{false};
    // _ros->get_param(_ros->get_node_name() + "/debug", debug);
    if (debug)
        _ros->set_debug_mode();

    auto axisCallback = std::bind(
        &InputDeviceController::callback_axis_changed, this, _1, _2);
    auto buttonCallback = std::bind(
        &InputDeviceController::callback_button_changed, this, _1, _2);
    auto errorCallback = std::bind(
        &InputDeviceController::callback_error, this, _1);

    // _inputDevices["Virtual"] = std::make_shared<VirtualInputDevice>(axisCallback, buttonCallback);
    _inputDevices["Usb"] = std::make_shared<UsbInputDevice>(axisCallback, buttonCallback, errorCallback);
#if SENSO_MACRO // not for open source
    ROS_INFO("%s: starting with Senso input device", ros::this_node::getName().c_str());
    _inputDevices["Senso"] = std::make_unique<SensoInputDevice>(axisCallback, buttonCallback);
#endif
    change_input_device(); //Default Parameter-File loaded in launch-File
}

InputDeviceController::~InputDeviceController() {
    _ros->terminate();
}

void InputDeviceController::terminate() {
    for ( auto& device : _inputDevices ) { // Deactivate others
        RCLCPP_DEBUG_STREAM(_ros->get_logger(), _ros->get_node_name() << ": Deactivating Input Device: " << device.first);
        device.second->terminate();
    }
}

void InputDeviceController::callback_axis_changed(const int axis, const double value) {
    if ( _configurationMode )
        RCLCPP_INFO_STREAM(_ros->get_logger(), "Axis:" << axis << ", Value: " << value);

    int sign;
    if ( _axisMapping.count(axis) != 0 ) {
        _axisMapping.at(axis).invertAxes ? sign = -1 : sign = 1;
        _ros->set_axis(_axisMapping.at(axis).position, sign*value); //sets Button at MsgPos with HW Button as input
    }
}

void InputDeviceController::callback_button_changed(const int button, const int state) {
    if ( _configurationMode )
        RCLCPP_INFO_STREAM(_ros->get_logger(), "Button:" << button << ", State: " << state);

    if ( _buttonMapping.count(button) != 0 )
        _ros->set_button(_buttonMapping.at(button), state); //sets Button at MsgPos with HW Button as input
}

void InputDeviceController::callback_error(const std::string& errorMsg) {
    RCLCPP_ERROR_STREAM_ONCE(_ros->get_logger(), errorMsg);
    _ros->terminate();
}

bool InputDeviceController::callback_change_device_request(
    const std::shared_ptr<tod_msgs::srv::InputDevice::Request> req,
    const std::shared_ptr<tod_msgs::srv::InputDevice::Response> res)
    {
        std::string cfg_file_path = req->input_device_directory;
        std::string load_command = "rosparam load " + cfg_file_path + " " + _ros->get_node_name();
        namespace fsys = std::filesystem;

        if ( !fsys::exists(cfg_file_path) || !(fsys::is_regular_file(cfg_file_path) || fsys::is_symlink(cfg_file_path)) ) {
            RCLCPP_ERROR_STREAM(_ros->get_logger(), 
                _ros->get_node_name() <<": Could not find or open config file " << cfg_file_path);
            res->successfully_changed = false;
            return false;
        } else {
            RCLCPP_DEBUG_STREAM(_ros->get_logger(), 
                _ros->get_node_name() << ": Executing command: " << load_command);

            int result = std::system(load_command.c_str());
            if ( result != 0 ) {
                res->successfully_changed = false;
                RCLCPP_ERROR_STREAM(_ros->get_logger(), 
                    _ros->get_node_name() <<": Could not load config file " << cfg_file_path);
                return false;
            }
        }
        change_input_device();
        res->successfully_changed = true;
        return true;
    }

void InputDeviceController::change_input_device() {
    std::string inputDeviceType = "Usb";
    // _ros->get_param(_ros->get_node_name()+"/Type", inputDeviceType);
    RCLCPP_DEBUG_STREAM(_ros->get_logger(), _ros->get_node_name() << ": Try changing to Type: " << inputDeviceType);

    // Deactivate all input devices
    for ( auto& device : _inputDevices ) {
        RCLCPP_DEBUG_STREAM(_ros->get_logger(), _ros->get_node_name() << ": Input Device " << device.first 
                            << (device.second->running ? " running" : " not running"));
        if ( device.second->running ) { // if running
            RCLCPP_DEBUG_STREAM(_ros->get_logger(), _ros->get_node_name() << ": Deactivating Input Device: " << device.first);
            device.second->deactivate();
        }
    }
    // Clear
    _ros->clear_joystick_msg();

    // Load new parameters
    update_mapping_from_param_workspace();

    std::string _correction = "10,\
      1,255,32767,32767,18000,18000,\
      1,0,0,0,0,0,\
      1,255,32767,32767,18000,18000,\
      1,0,0,0,0,0,\
      1,0,0,0,0,0,\
      1,255,32767,32767,18000,18000,\
      1,0,0,0,0,0,\
      1,0,0,0,0,0,\
      1,0,0,0,0,0,\
      1,0,0,0,0,0";
    // if (_ros->get_optional_param(_ros->get_node_name() + "/Correction", _correction))
    _inputDevices[inputDeviceType]->set_correction(_correction);

    // Start desired input device
    if ( !_inputDevices[inputDeviceType]->running ) {
         RCLCPP_DEBUG_STREAM(_ros->get_logger(), _ros->get_node_name() << ": Activating Input Device: " << inputDeviceType);
        _inputDevices[inputDeviceType]->activate();
         RCLCPP_DEBUG_STREAM(_ros->get_logger(), _ros->get_node_name() << ": Input Device: " << inputDeviceType << " activated");

    }
    if (_configurationMode) {
        RCLCPP_INFO_STREAM(_ros->get_logger(), "Number Of Axes:" << _inputDevices[inputDeviceType]->get_number_of_axes());
        RCLCPP_INFO_STREAM(_ros->get_logger(), "Number Of buttons:" << _inputDevices[inputDeviceType]->get_number_of_buttons());
    }
}

void InputDeviceController::update_mapping_from_param_workspace() {
    _buttonMapping.clear();
    _axisMapping.clear();
    std::map<std::string, int> buttonConfig =  
    {      
      {"IndicatorLeft" , 11},                
      {"IndicatorRight", 3   },         
      {"FlashLight"    , 9         },           
      {"FrontLight"    , 21        },           
      {"Honk"          , 25},
      {"IncreaseSpeed" , 6     },            
      {"DecreaseSpeed" , 7     },            
      {"IncreaseGear"  , 4       },            
      {"DecreaseGear"  , 5       }            
      };

    // _ros->get_param(_ros->get_node_name() + "/ButtonConfig/", buttonConfig);

    //short explanation:
    //6--increase distance--top right button
    //7--decrease distance--top left button
    //3--conform trajectory--down left button
    //4--reverse gear--right gear shifter

    for ( auto conf : buttonConfig ) {
        if ( conf.first == "IndicatorLeft" )   {_buttonMapping[conf.second] = joystick::ButtonPos::INDICATOR_LEFT;}
        if ( conf.first == "IndicatorRight" )  {_buttonMapping[conf.second] = joystick::ButtonPos::CONFIRM_TRAJ;}
        if ( conf.first == "FlashLight" )      {_buttonMapping[conf.second] = joystick::ButtonPos::FLASHLIGHT;}
        if ( conf.first == "FrontLight" )      {_buttonMapping[conf.second] = joystick::ButtonPos::FRONTLIGHT;}
        if ( conf.first == "Honk" )            {_buttonMapping[conf.second] = joystick::ButtonPos::HONK;}
        if ( conf.first == "IncreaseSpeed" )   {_buttonMapping[conf.second] = joystick::ButtonPos::INCREASE_DISTANCE;}
        if ( conf.first == "DecreaseSpeed" )   {_buttonMapping[conf.second] = joystick::ButtonPos::DECREASE_DISTANCE;}
        if ( conf.first == "IncreaseGear" )    {_buttonMapping[conf.second] = joystick::ButtonPos::REVERSE_GEAR;}
        if ( conf.first == "DecreaseGear" )    {_buttonMapping[conf.second] = joystick::ButtonPos::INDICATOR_RIGHT;}
    }

    std::map<std::string, bool> invertAxisConfig = {
        {"Steering", true},
        {"Throttle", true},
        {"Brake", true}
    };

    std::map<std::string, int> axisConfig = {
        {"Steering", 0},
        {"Throttle", 2},
        {"Brake", 5}
    };

    // _ros->get_param(_ros->get_node_name() + "/InvertAxis/", invertAxisConfig);
    // _ros->get_param(_ros->get_node_name() + "/AxisConfig/", axisConfig);
    _configurationMode = true;
    // _ros->get_param(_ros->get_node_name() + "/ConfigMode/", _configurationMode);

    for ( auto conf : axisConfig ) {
        if ( conf.first == "Steering" ) {
            _axisMapping.insert(std::make_pair(
                conf.second, AxisItem(joystick::AxesPos::STEERING, invertAxisConfig.at("Steering"))));
        }
        if ( conf.first == "Throttle" ) {
            _axisMapping.insert(
                std::make_pair(conf.second, AxisItem(joystick::AxesPos::THROTTLE, invertAxisConfig.at("Throttle"))));
        }
        if ( conf.first == "Brake" ) {
            _axisMapping.insert(
                std::make_pair(conf.second, AxisItem(joystick::AxesPos::BRAKE, invertAxisConfig.at("Brake"))));
        }
    }
}