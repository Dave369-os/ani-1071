#include <cstdio>

int annee;
int main(){

    printf("Entrez une annee\n");
    scanf("%d", &annee);
    if(!(annee % 4 == 0)){
        printf("l'annee n'est pas bissextile\n");
    }
    else if(!(annee % 100 == 0)){
        printf("l'annee est bissextile");
    }
    else if(!(annee % 400 == 0)){
        printf("l'annee n'est pas bissextile");
    }
    else
        printf("l'annee est bissextile");


    return 0;
}
