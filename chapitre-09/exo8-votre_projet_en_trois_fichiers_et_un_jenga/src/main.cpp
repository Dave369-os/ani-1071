#include <iostream>
#include <vec2.h>

int main() {
    std::cout << "Hello from Ani1071!" << std::endl;
    
    ani::Vec2 a{5, 9};
    
    doubler(a);
    tripler(a);
    quadrupler(a);
    //carre(5);
    
    return 0;
}
