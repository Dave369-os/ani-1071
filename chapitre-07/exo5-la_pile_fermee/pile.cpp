#include <cstdio>

class Pile{
    private : 
        static const int CAPACITE = 100;
        int  elements[100];
        int  nombre;

    public : 
        Pile() : nombre(0){}
        void empiler(Pile& p, int v) { if (p.nombre < CAPACITE) p.elements[p.nombre++] = v; }
        int  depiler(Pile& p)        { return (p.nombre > 0) ? p.elements[--p.nombre] : -1; }
        int  sommet(const Pile& p)   { return (p.nombre > 0) ? p.elements[p.nombre - 1] : -1; }
        bool vide(const Pile& p)     { return p.nombre == 0; }
        bool pleine(Pile p) const {return p.nombre = CAPACITE;}
        int taille() const {return nombre;}


};

class File{
    private : 
        static const int CAPACITE = 100;
        int elements[CAPACITE];
        int tete;              // d'où l'on sort
        int queue;             // où l'on entre
        int nombre;

    public : 
        File() : tete(0), queue(0), nombre(0) {}
        void enfiler(File& f, int v){
            if (f.nombre == CAPACITE) return;
            f.elements[f.queue] = v;
                f.queue = (f.queue + 1) % CAPACITE;        // le compteur qui tourne
        f.nombre++;
    }
        int defiler(File& f){
            if (f.nombre == 0) return -1;
            int v = f.elements[f.tete];
            f.tete = (f.tete + 1) % CAPACITE;
            f.nombre--;
            return v;
    }
        bool pleine(Pile p) const {return nombre == CAPACITE;}
        int taille() const {return nombre;}

};

int main(){

    Pile p;
    //p.nombre = -5;
    File f;
    //f.tete = 7;
    printf("**PILE**\n");
    for(int i = 0; i < 150; i++) p.empiler(p, i);
    printf("Apres 150 empiler : taille = %d\n", p.taille());
    for(int i = 0; i < 200; i++) p.depiler(p);
    printf("Apres 200 depiler : taille = %d\n\n", p.taille());


    printf("**FILES**\n");
    for(int i = 0; i < 150; i++) f.enfiler(f, i);
    printf("Apres 150 enfiler : taille = %d\n", f.taille());
    for(int i = 0; i < 50; i++) f.defiler(f);
    printf("Apres 50 defiler : taille = %d\n", f.taille());
    for(int i = 0; i < 60; i++) f.enfiler(f, i);
    printf("Apres 60 re-enfiler : taille = %d\n", f.taille());

    return 0;
}