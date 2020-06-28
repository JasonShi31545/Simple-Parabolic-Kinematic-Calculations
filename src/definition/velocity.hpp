#include "../headers.hpp"
#include "displacement.hpp"

class Velocity: public Vector {

public:

   Displacement displacement;
   double time;
   
   Velocity() {
       this.magnitude = (displacement.magnitude/abs(time));
       this.direction = displacement.direction;
   }
   
   double velocity_representation() {
        return (this.direction ? magnitude : -(magnitude));
   }
    
};
