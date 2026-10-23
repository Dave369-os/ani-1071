#include <cstdio>
#include <cmath>

struct Vec2
{
    double x;
    double y;
};

void bougerCopie(Vec2 p);
void bougerRef(Vec2& p);
double longueurRef(const Vec2& p);

int main(){

    Vec2 p = {1, 0};
    //printf("x : %.2f\ny : %.2f\n\n", p.x, p.y);

    bougerCopie(p);
    printf("x : %.2f\ny : %.2f\n\n", p.x, p.y);

    bougerRef(p);
    printf("x : %.2f\ny : %.2f\n\n", p.x, p.y);

    longueurRef(p);
    printf("x : %.2f\ny : %.2f\n", p.x, p.y);

    return 0;
}

void bougerCopie(Vec2 p){
    p.x = p.x + 1;
}

void bougerRef(Vec2& p){
    p.x = p.x + 1;  
}

double longueurRef(const Vec2& p){
    //p.x = 0;
    return sqrt((p.x * p.x) + (p.y * p.y));
}