#include <iostream>
#include <vec2.h>

namespace ani {
    namespace{float carre(float v) {return v * v;}}
    void doubler(Vec2 &a){ a.x = a.x * 2, a.y = a.y * 2;}
    void tripler(Vec2 & a){  a.x = a.x * 3, a.y = a.y * 3;}
    void quadrupler(Vec2 &a){ a.x = a.x * 4, a.y = a.y * 4;}
    
}