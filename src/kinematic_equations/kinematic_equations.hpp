#include "headers.hpp"

#ifndef KINE_EQUATIONS_H
#define KINE_EQUATIONS_H


namespace fundamental_equations {

double distance(double average_velocity, double time);
double distance(double initial_velocity, double time1, double acceleration, double time2);
double final_velocity(double initial_velocity, double acceleration, double time);
double final_velocity(double initial_velocity, double acceleration, double distance);

}

namespace derived_equations {

/* FIRST OF ALL, GET THE MAXIMUM DISTANCE USING THE FINAL VELOCITY RULE */

double distance(double final_velocity, double initial_velocity, double acceleration);

/* TIME FOR RISING */

double time(double final_velocity, double initial_velocity, double acceleration);

/* TIME FOR LANDING */

double time(double distance, double acceleration);

/* DISTANCE FROM AVERAGE_VELOCITY */
/* ABOVE IN THE fundamental_equations NAMESPACE */

}

#endif // KINE_EQUATIONS_H
