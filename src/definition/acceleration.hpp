#include "../headers.hpp"
#include "displacement.hpp"
#include "velocity.hpp"

#ifndef ACCELER_H
#define ACCELER_H

class Acceleration: public Vector {

public:

   Velocity velocity;
   double time;
   
   Velocity() {
       this.magnitude = (velocity.magnitude/abs(time));
       this.direction = velocity.direction;
   }
   
   double acceleration_representation() {
        return (this.direction ? magnitude : -(magnitude));
   }
    
};

#endif // ACCELER_H
