#include <iostream>
#include "vec2.cpp"
#include "vec2.h"

int main() {
    Vec2 a = {5, 5}, b = {1, 3};
    Vec2 c = addition(a, b);
    Vec2 d = soustraction(a, b);
    Vec2 e = produit(a, b);
    
        
    return 0;
}
