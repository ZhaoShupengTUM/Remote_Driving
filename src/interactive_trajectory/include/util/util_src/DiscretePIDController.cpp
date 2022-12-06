#include "util/DiscretePIDController.hpp"
#include <assert.h>
#include <iostream>

PIDController::PIDController(const double kp, const double ki, const double kd) {
    kp_ = kp;
    ki_ = ki;
    kd_ = kd;
    previous_error_ = 0.0;
    previous_output_ = 0.0;
    integral_ = 0.0;
    first_hit_ = true;
}

double PIDController::Control(const double error, const double dt) {
    assert(dt > 0 && "dt must be positive!!!");  
    previous_output_ = current_output; 

    if(first_hit_) {
        first_hit_ = false;
    } else {
        first_hit_ = true;
        derivative_part = (error - previous_error_)/dt * kd_;
    }

    proportional_part = kp_ * error;

    integral_ += error*dt;
    integral_part =  integral_ * ki_;

    current_output = proportional_part + derivative_part + integral_part;

    previous_error_ = error;
    return current_output;
}

void PIDController::Reset() {
    previous_error_ = 0.0;
    previous_output_ = 0.0;
    integral_ = 0.0;
    first_hit_ = false;

    proportional_part = 0;
    integral_part = 0;
    derivative_part = 0;
    current_output = 0;
}

void PIDController::Setpid(double kp, double ki, double kd)  {
    kp_ = kp;
    ki_ = ki;
    kd_ = kd; 
}



// namespace PID {

// double pid_accel(struct pid &my_pid, struct dynamic_limitations &my_vehicle){
//         my_pid.integral += my_pid.error;
//         my_pid.derivative = my_pid.error - my_pid.last_error;
//         // if(my_pid.derivative == 0) {
//         //     my_pid.derivative = -0.01;   //like hand brake when vehicle is stop
//         // }
//         my_pid.last_error = my_pid.error;
//         double accel = (my_pid.kp*my_pid.error) + (my_pid.ki*my_pid.integral) + (my_pid.kd*my_pid.derivative);
//         //limit the output
//         if(accel>0) {
//             if(accel>=my_vehicle.max_accel) 
//             {
//                 return my_vehicle.max_accel;
//             }
//             else if (accel<=my_vehicle.min_accel)
//             {
//                 return my_vehicle.min_accel;
//             }
//             else
//             {
//                 return accel;
//             }
//         } 
//         else {
//             if(accel<my_vehicle.max_decel)
//             {
//                 return my_vehicle.max_decel;
//             }
//             else
//             {
//                 return accel;
//             }
//         }
//     }

//     double accel_vel(double accel, double v_current, double timeStep) {
//         double desired_v = v_current + timeStep*accel;
//         if(desired_v<0){
//             desired_v = 0;
//         }
//         return desired_v;
//     }

// }