#include "kinematic_equations.hpp"

double fundamental_equations::distance(double average_velocity, double time) {
    return average_velocity * time;
}


double fundamental_equations::distance(
    double initial_velocity, 
    double time1, 
    double acceleration, 
    double time2) {
    
    return (initial_velocity *time1) + ((1/2) * acceleration * pow(time2, 2));
    
}

double fundamental_equations::final_velocity(
    double initial_velocity, 
    double acceleration, 
    double time) {
    
    return initial_velocity + (acceleration * time);
    
}

double fundamental_equations::final_velocity(
    double initial_velocity, 
    double acceleration, 
    double distance) {
    
    return sqrt(pow(initial_velocity, 2) + (2 * acceleration * distance));
}

