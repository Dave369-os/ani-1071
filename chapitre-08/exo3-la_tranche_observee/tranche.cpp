#include <cstdio>

class Entite{
    public : 
         virtual const char *nom() {return "entite";}
         virtual ~Entite() {}
};

class Ennemi : public Entite{
    public : 
        const char *nom() override { return "ennemi"; }
        int degats;
};

void f(Entite e) {printf("%s\n", e.nom());}
void g(Entite &e) {printf("%s\n", e.nom());}
void h(Entite *e) {printf("%s\n", e->nom());}

int main(){
    Ennemi n;
    n.nom();
    f(n);
    g(n);
    h(&n);

    printf("Entite : %zu octet(s)\n", sizeof(Entite));
    printf("Ennemi : %zu octet(s)\n", sizeof(Ennemi));

    return 0;
}