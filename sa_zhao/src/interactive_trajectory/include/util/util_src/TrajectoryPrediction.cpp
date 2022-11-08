#include "util/TrajectoryPrediction.hpp"

//Interactive Trajectory Generation part:
double TrajectoryPrediction::calc_distance(double pedal){
    //the pedal input is between 0 and 1
    //design a relation between pedal input and distance 
    return pedal;
}

std::vector<Pose> TrajectoryPrediction::predict_rear_axle_trajectory_forward(double rwa, double d)
{
    std::vector<Pose> trajectory;

    double ds = 0.1;

    int numberOfPoints = d/ds + 1;
    double r = (VehicleParams::distance_rear_axle + VehicleParams::distance_front_axle) / std::tan(rwa);

    //yawRear [-pi/2, pi/2]
    double xRear{0.0}, yRear{0.0}, yawRear{0.0};
    for(int i=0; i<numberOfPoints; i++) 
    {
        trajectory.emplace_back(xRear, yRear, yawRear);
        xRear += ds * std::cos(yawRear);
        yRear += ds * std::sin(yawRear);
        yawRear += ds / r;
    }

    return trajectory;
}

std::vector<Pose> TrajectoryPrediction::predict_rear_axle_trajectory_backward(double rwa, double d)
{
    std::vector<Pose> trajectory;

    double ds = 0.1;

    int numberOfPoints = d/ds + 1;
    double r = (VehicleParams::distance_rear_axle + VehicleParams::distance_front_axle) / std::tan(rwa);

    //yawRear [-pi/2, pi/2]
    double xRear{0.0}, yRear{0.0}, yawRear{0.0};
    for(int i=0; i<numberOfPoints; i++) 
    {
        trajectory.emplace_back(xRear, yRear, yawRear);
        xRear -= ds * std::cos(yawRear);
        yRear -= ds * std::sin(yawRear);
        yawRear -= ds / r;
    }

    return trajectory;
}


//EBS part:
double TrajectoryPrediction::braking_distance(double velocity, double decel) {
    return pow(velocity,2)/(2.0*decel);
}

double TrajectoryPrediction::calc_beta(const double rwa) {
    return std::atan(VehicleParams::distance_rear_axle * std::tan(rwa) / 
        (VehicleParams::distance_front_axle + VehicleParams::distance_rear_axle));
}

std::vector<Pose> TrajectoryPrediction::predict_vehicle_trajectory(double rwa, double d) {
    std::vector<Pose> trajectory;
    
    int numberOfPoints{20};
    double beta = calc_beta(rwa);
    double ds = d / (numberOfPoints -1);

    double xCoM{0.0}, yCoM{0.0}, yawCoM{0.0};
    for (int i=0; i < numberOfPoints; ++i) {
        trajectory.emplace_back(xCoM, yCoM, yawCoM);
        xCoM +=  ds * std::cos(yawCoM + beta);
        yCoM +=  ds * std::sin(yawCoM + beta);
        yawCoM +=  ds * std::sin(beta) / VehicleParams::distance_rear_axle;
    }
    return trajectory; 
}