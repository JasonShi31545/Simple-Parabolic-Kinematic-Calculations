#include "vector.hpp"

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
