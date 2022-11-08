std_msgs/Header header
# see VehicleEnums.h
int8 indicator
int8 gear_position
int8 honk
int8 wiper
int8 head_light
int8 flash_light
float32 steering_wheel_angle         # steering wheel angle position in rad
float32 curvature                  # current vehicle curvature in 1/m
float32 engine_speed                # rpm
float32 longitudinal_speed          # vehicle ACAN data (currently from rear wheel odom)
geometry_msgs/Vector3 linear_acceleration    # m/s^2
