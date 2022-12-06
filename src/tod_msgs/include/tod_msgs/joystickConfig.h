// Copyright 2020 TUMFTM
#pragma once

namespace joystick {
enum ButtonPos {
    INDICATOR_LEFT  = 0,
    INDICATOR_RIGHT = 8,
    FLASHLIGHT      = 2,
    FRONTLIGHT      = 3,
    HONK            = 4,
    INCREASE_DISTANCE  = 5,
    DECREASE_DISTANCE  = 6,
    REVERSE_GEAR    = 7,   //INCREASE_GEAR   = 7,
    CONFIRM_TRAJ      = 1    //DECREASE_GEAR   = 8
};

enum AxesPos {
    STEERING = 0,
    THROTTLE = 1,
    BRAKE = 2
};
}; // namespace joystick
