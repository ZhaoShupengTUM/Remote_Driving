#ifndef PID_H
#define PID_H

class PIDController
{
    public:
        PIDController(const double kp, const double ki, const double kd);
        ~PIDController() = default;

        /**
         * @brief compute control value based on the error
         * @param error error value, the difference between
         * a desired value and a measured value
         * @param dt sampling time interval
         * @return control value based on PID terms
         */
        double Control(const double error, const double dt);

        void Reset();
        void Setpid(double kp, double ki, double kd);

    // protected:
        double kp_ = 0.0;
        double ki_ = 0.0;
        double kd_ = 0.0;
        double previous_error_ = 0.0;
        double previous_output_ = 0.0;
        double integral_ = 0.0;
        bool first_hit_ = false;

        double proportional_part = 0;
        double integral_part = 0;
        double derivative_part = 0;
        double current_output = 0;
};

// namespace PID
// {
//     struct pid {
//         double kp{};
//         double ki{};
//         double kd{};
//         double error{};
//         double last_error{};
//         double integral{};
//         double derivative{};
//     };

//     struct dynamic_limitations
//     {
//         double max_speed{50.0};
//         double max_accel{3.0};
//         double max_decel{-8.0};
//         double min_accel{0.0};
//     };
    
//     //the sign of the accel: forward: +accel, -deccel; reverse: +accel, -dccel
//     //the sign of the velocity means forward and reverse driving
//     double pid_accel(struct pid &my_pid, struct dynamic_limitations &my_vehicle);

//     //calcalate the target v according to the accel
//     double accel_vel(double accel, double v_current, double timeStep);

// }

#endif