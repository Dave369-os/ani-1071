#include <cstdio>


int main(){
    int nombre;
    printf("Entrez un nombre entier\n");
    scanf("%d", &nombre);

    //Verification de la parite
    if(nombre % 2 == 0){
        printf("votre entier est pair\n");
    }
    else
        printf("votre entier est impair\n");

    //Verification du signe
    if(nombre > 0){
        printf("votre entier est positif\n");
    }
    else if(nombre < 0){
        printf("votre entier est negatif\n");
    }
    else
        printf("votre entier est nul\n");

    //Verification de la divisibilite par trois(3)
    if(nombre % 3 == 0){
        printf("votre entier est divisible par 3\n");
    }
    else
        printf("votre entier n'est pas divisible par 3\n");

    return 0;
}