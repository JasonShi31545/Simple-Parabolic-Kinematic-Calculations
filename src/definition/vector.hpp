#include "../header.hpp"


#define POSITIVE true
#define NEGATIVE false

class Vector_1D {

public:
    
    Vector() {
        this.magnitude = 0;
        this.direction = POSITIVE;
    }
    
    ~Vector() {
        std::cout << "VECTOR SUCCESSFULLY DESTRUCTED" << std::endl;
    }
    
    double magnitude;
    bool direction;    
    
protected:

private:

}
