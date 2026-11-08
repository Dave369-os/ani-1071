#include <cstdio>

struct Vec2{
    double x, y;
};
Vec2 operator*(Vec2 p, double t) {return {p.x * t, p.y * t};}
Vec2 operator+(Vec2 p, Vec2 q){return {p.x + q.x, p.y + q.y};}

class Entite{
    protected :
        Vec2 position;
        const char *nom;
    public : 
        Entite(Vec2 p, const char *n) : position(p), nom(n) {}
};

class Joueur : public Entite{
    private :
        double vies;
    public : 
        Joueur(Vec2 p, const char *nom, double vies) : Entite(p, nom), vies(vies) {}
};

class Ennemi : public Entite{
    private : 
        int degats;
    public : 
        Ennemi(Vec2 p, const char *nom, int degats) : Entite(p, nom), degats(degats) {}
        void deplacement(Vec2 vitesse, double dt){
            position = position + vitesse * dt;
        }
};

int main(){
    printf("Vec2        : %zu octet(s)\n", sizeof(Vec2));
    printf("const *char : %zu octet(s)\n", sizeof(const char*));
    printf("Entite      : %zu octet(s)\n", sizeof(Entite));
    printf("Joueur      : %zu octet(s)\n", sizeof(Joueur));
    printf("Ennemi      : %zu octet(s)\n", sizeof(Ennemi));
    
    Ennemi ennemi{{0, 3}, "enn", 5};
    //ennemi.position = {0, 0};

    return 0;
}