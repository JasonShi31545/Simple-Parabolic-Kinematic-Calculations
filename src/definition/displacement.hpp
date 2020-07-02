#include "vector.hpp"

#ifndef DISPLACEMENT_H
#define DISPLACEMENT_H

class Displacement: public Vector {

public:
    
    double distance() {
        return this.magnitude;
    }
    
    double displacement_representation() {
        return (this.direction ? magnitude : -(magnitude));
    }
    
protected:

private:

}

#endif // DISPLACEMENT_H
