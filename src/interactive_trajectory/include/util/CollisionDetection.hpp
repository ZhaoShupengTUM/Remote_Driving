#pragma once
#include <vector>
#include "Pose.hpp"
#include <iostream>

class CollisionDetection {
    public:
        std::pair<bool, int32_t> check_for_collisions(const std::vector<Pose>& polygon, const std::vector<Pose>& pose);

        bool point_in_polygon(const std::vector<Pose>& polygon, const Pose& pose);
};