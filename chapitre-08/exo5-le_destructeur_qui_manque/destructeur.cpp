#include <cstdio>
#include <vector>

struct Trace{
    ~Trace(){ printf("~Trace\n");}
};

class Ennemi{
    public : 
        virtual void deplacer() {}
         ~Ennemi() {printf("~Ennemi\n");}
};

class Fantome : public Ennemi{
    public : 
        std::vector<int> mille_cases;
        Fantome() : memoire(1000){printf("~Fantome\n");  printf("%zu\n", sizeof(Fantome));}
        void deplacer() override {}
        ~Fantome() {}
        private : 
            std::vector<int> memoire;
            Trace trace;
};

int main(){
    Ennemi *e = new Fantome();
    delete e;

    Fantome *f = new Fantome();
    delete f;

    return 0;
}