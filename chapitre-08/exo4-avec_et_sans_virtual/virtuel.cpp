#include <cstdio>

 int gFantome = 0, gEnnemi = 0, gRobot = 0;

class Ennemi{
    public : 
        virtual void deplacer(double dt){
            gEnnemi += 1;
        }
        virtual ~Ennemi(){}
};

class Fantome : public Ennemi{
    public : 
        void deplacr(double dt){
            gFantome += 1;
        }
};

class Robot : public Ennemi{
    public : 
        void deplacer(double dt){
            gRobot += 1;
        }
};


int main(){

    Ennemi *ennemis[6] = {new Ennemi, new Robot, new Robot, new Fantome, new Fantome, new Fantome};

    for(int i = 0; i < 10; i++){
        for (Ennemi *e : ennemis) e->deplacer(0.2); 
    }
    printf("Ennemi : %d\n", gEnnemi);
    printf("Robot : %d\n", gRobot);
    printf("Fantome : %d\n", gFantome);

    for(Ennemi *e : ennemis) delete e;

    return 0;
}