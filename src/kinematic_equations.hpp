#include "headers.hpp"

namespace fundamental_equations {

double distance(double average_velocity, double time);
double distance(double initial_velocity, double time1, double acceleration, double time2);
double final_velocity(double initial_velocity, double acceleration, double time);
double final_velocity(double initial_velocity, double acceleration, double distance);

}

namespace derived_equations {

/* FIRST OF ALL, GET THE MAXIMUM DISTANCE USING THE FINAL VELOCITY RULE */

double distance(double final_velocity, double initial_velocity, double acceleration);

/* GET THE TIME OF FALL FROM ACCELERATION. */

double time(double distance, double acceleration);

/* GET THE HORIZONTAL DISTANCE USING THE FUNDAMENTAL EQUATION 1 */
/* d = va * t */

}

