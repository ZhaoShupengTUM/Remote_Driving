#pragma once

#include <iostream>
#include <math.h>
#include "VehicleParams.h"
#include <vector>
#include "Pose.hpp"

class TrajectoryPrediction{
    public: 
    //calculate the distance from the pedal input
        double calc_distance(double pedal);

    //calculate the beta from the steering wheel angle
        double calc_beta(const double rwa);

    //calculate the vector of the pose -- trajectory
        std::vector<Pose> predict_vehicle_trajectory(double rwa, double d);
};