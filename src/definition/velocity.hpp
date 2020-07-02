#include "../headers.hpp"
#include "displacement.hpp"

#ifndef VELOCITY_H
#define VELOCITY_H


class Velocity: public Vector {

public:

   Displacement displacement;
   double time;
   
   Velocity() {
       this.magnitude = (displacement.magnitude/abs(time));
       this.direction = displacement.direction;
   }
   
   Velocity(const double speed) {
		this.magnitude = speed;
		this.direction = POSITIVE;
   }
   
   double velocity_representation() {
        return (this.direction ? magnitude : -(magnitude));
   }
    
};

#endif // VELOCITY_H
