#pragma once

namespace VehicleParams{
    //Tesla Model 3 official datas, based on geometrical center 
    const float distance_front_axle {1.437};
    const float distance_rear_axle {1.437};
    const float wheel_base {2.875};
    const float width_edge_to_edge {1.849};
    const float width_edge_to_edge_safe {2.500};
    const float height {1.443};
    const float distance_front_bumper {2.347};
    const float distance_rear_bumper {2.100};
    const float length_edge_to_edge {4.694};

    const float distance_rearAxle_frontBumper = distance_front_bumper + distance_rear_axle;
    const float distance_rearAxle_rearBumper = distance_rear_bumper - distance_rear_axle;

    //the sensor mounted position
    const float lidar_position_x {2.4};
    const float lidar_position_y {0.0};
    const float lidar_position_z {0.4};

    //not using until now
    const float mass {2887.0};
    const float yaw_inertia {4700.0};
    const float track_width {1.651};
    const float cornering_force_front {280666.0};
    const float cornering_force_rear {278903.0};
    const float maximum_road_wheel_angle {1.000};
    const float maximum_steering_wheel_angle {7.8538};

}
