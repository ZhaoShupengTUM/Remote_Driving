#pragma once

#include "VehicleParams.h"
#include "Pose.hpp"
#include <vector>
#include <math.h>
#include <algorithm>

class CorridorCreation
{
    public:
    //EBS part
    void calc_vehicle_front_edges(const Pose& poseCoM, Pose& poseFR, Pose& poseFL);
    
    std::vector<Pose> calc_corridor(const std::vector<Pose>& trajectory);

    //FAS part
    void calc_vehicle_left_right_path(const Pose& baseLink, Pose& poseFR, Pose& poseFL);
    // void calc_vehicle_left_right_path_backward(const Pose& baseLink, Pose& poseFR, Pose& poseFL);
};