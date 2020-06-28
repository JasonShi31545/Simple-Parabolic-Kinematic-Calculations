#include "../headers.hpp"

double vertical_initial_velocity(double combined_speed, double angle) {
    return combined_speed * sin(angle);
}

double horizontal_initial_velocity(double combined_speed, double angle) {
    return combined_speed * cos(angle);
}
