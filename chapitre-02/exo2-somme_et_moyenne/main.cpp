#include <cstdio>

int main(){
    printf("Entrez 5 entiers\n");
    int somme = 0;
    int entier;
    for(int i = 0; i < 5; i++){
        scanf("%d", &entier);
        somme = somme + entier;
    }
    double moyenne = (double)somme/5.0;
    printf("la somme de vos entiers est de %d et leur moyenne %.3f", somme, moyenne);

    return 0;
}