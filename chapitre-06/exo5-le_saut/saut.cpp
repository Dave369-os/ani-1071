#include <cstdio>
#include <cmath>

struct Vec2
{
    double x;
    double y;
};


void eulerSemiImplicite(Vec2& p, Vec2& v, Vec2 a, double dt);

int main(){
    double h = 3, g = 9.81, dt = 1.0 / 200, h_max = 0;
    double v0 = sqrt(2 * g * h);
    Vec2 p = {0, 0}, v = {0, v0}, a = {0, -9.81};
    //printf("%f\n", v0);

    while(p.y >= 0){
        if(p.y > h_max)
            h_max = p.y;
        //printf("p : {%f, %f}, v : {%f, %f}\n\n", p.x, p.y, v.x, v.y);
        eulerSemiImplicite(p, v, a, dt);
    }
    printf("%f\n\n", h_max);

    return 0;
}

void eulerSemiImplicite(Vec2 &p, Vec2 &v, Vec2 a, double dt){
    v.x = v.x + a.x * dt;
    v.y = v.y + a.y * dt;

    p.y = p.y + v.y * dt;
    p.x = p.x + v.x * dt;
}