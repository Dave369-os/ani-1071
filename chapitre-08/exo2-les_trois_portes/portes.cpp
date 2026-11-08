#include <cstdio>
#include <iostream>

class Base{
    public : 
        int publique = 1;
    protected : 
        int protegee = 2;
    private : 
        int privee = 3;
};

class Derivee : public Base{
    public : 
        void afficher(){
            printf("%d", publique);
            printf("%d", protegee);
            //printf("%d", privee);
     }
};

int main(){
    Derivee d;
    printf("%d", d.publique);
    // printf("%d", d.protegee);
    // printf("%d", d.privee);

    // void soigner(Base &b){
    //     b.protegee = 4;
    // }
    return 0;
}