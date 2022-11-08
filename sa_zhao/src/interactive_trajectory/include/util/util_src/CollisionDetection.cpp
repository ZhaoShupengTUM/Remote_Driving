#include "util/CollisionDetection.hpp"


std::pair<bool, int32_t> CollisionDetection::check_for_collisions(const std::vector<Pose>& polygon, const std::vector<Pose>& points) {
    int collision {0};
    for(auto point : points)
    {
        collision = collision + point_in_polygon(polygon, point);
    }

    if( collision > 0){
        return std::make_pair(true, collision);
    }
    return std::make_pair(false, collision);
}

bool CollisionDetection::point_in_polygon(const std::vector<Pose>& polygon, const Pose& point) {
    size_t i, j, c=0;
    for (i = 0, j = polygon.size()-1; i < polygon.size(); j = i++) {
        if ( ((polygon.at(i).get_y()>point.get_y()) != (polygon.at(j).get_y()>point.get_y())) &&
                (point.get_x() < (polygon.at(j).get_x()-polygon.at(i).get_x()) * 
                (point.get_y()-polygon.at(i).get_y()) / (polygon.at(j).get_y()-polygon.at(i).get_y()) +
                polygon.at(i).get_x()) )
            c=!c;
    }
    return c;
}
