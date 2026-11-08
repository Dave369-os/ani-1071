#include <cstdio>

struct Vec2{
    double x, y;
};

struct Entite{
    public : 
        Vec2 position;

};

struct Mobile : virtual public Entite{
    public : 
        Vec2 vitesse;
};

struct Visible : virtual public Entite{
    public : 
        char glyphe;
};

struct Ennemi : public Mobile, public Visible{

};

int main(){
    printf("Entite  : %zu octet(s)\n", sizeof(Entite));
    printf("Mobile  : %zu octet(s)\n", sizeof(Mobile));
    printf("Visible : %zu octet(s)\n", sizeof(Visible));
    printf("Ennemi  : %zu octet(s)\n", sizeof(Ennemi));

    Ennemi e;
    e.position.x = 3.0;

    Mobile &m = e;
    Visible &v = e;
    printf("Mobile&  : %f\n", m.position.x);
    printf("Visible& : %f\n", v.position.x);

    return 0;
}