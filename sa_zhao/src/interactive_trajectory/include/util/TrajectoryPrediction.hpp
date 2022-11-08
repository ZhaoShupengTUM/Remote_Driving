#pragma once

#include <iostream>
#include <math.h>
#include "VehicleParams.h"
#include <vector>
#include "Pose.hpp"

class TrajectoryPrediction{
    public: 
    //Interactive trajectory generation part:
    //calculate the distance from the pedal input
        double calc_distance(double pedal);

        std::vector<Pose> predict_rear_axle_trajectory_forward(double rwa, double d);

        std::vector<Pose> predict_rear_axle_trajectory_backward(double rwa, double d);

    //EBS part:
    //calculate the beta from the steering wheel angle
        double braking_distance(double velocity, double decel);
        double calc_beta(const double rwa);

    //calculate the vector of the pose -- trajectory
        std::vector<Pose> predict_vehicle_trajectory(double rwa, double d);

};