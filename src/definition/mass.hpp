#include "..headers.hpp"
#include "*.hpp"

class Mass {

public:

    Mass() {
        this.mass = 0;
    }
    
    double mass;
    
    double momentum(Velocity v) {
        return this.mass * v.magnitude;
    }
    
    double net_force(Acceleration a) {
        return mass * acceleration.magnitude;
    }
    
    double centripedal_force(Velocity v, double radius) {
        return (mass * v.magnitude) / radius;
    }
    
    
}
