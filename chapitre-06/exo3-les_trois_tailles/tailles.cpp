#include <cstdio>

struct Vec2
{
    double x;
    double y;
};

struct Particule
{
    Vec2   position;
    Vec2   vitesse;
    double vie;
};

struct A { char c; int n; };
struct B { char c; double d; char e; };
struct C { double d; char c; char e; };

struct ParticuleEtat
{
    double vie;
    Vec2   vitesse;
    char etat;
    Vec2   position;
};

int main(){
    printf(" Vec2      : %2zu octets\n", sizeof(Vec2));
    printf(" Particule : %2zu octets\n", sizeof(Particule));
    printf(" A         : %2zu octets\n", sizeof(A));
    printf(" B         : %2zu octets\n", sizeof(B));
    printf(" C         : %2zu octets\n", sizeof(C));
    printf(" ParticuleEtat : %2zu octets\n", sizeof(ParticuleEtat));



    return 0;
}

