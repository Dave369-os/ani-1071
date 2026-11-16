#include <iostream>
#include "vec2.h"
//#include "Vec2.h"



Vec2 addition(Vec2 a, Vec2 b){return {a.x + b.x, a.y + b.y};};
Vec2 soustraction(Vec2 a, Vec2 b){return {a.x - b.x, a.y - b.y};};
Vec2 produit(Vec2 a, Vec2 b){return {a.x * b.x, a.y * b.y};};
namespace {
    void aide(){
        std::cout<<"ce projet permet de manipuler des structures";
    }
}