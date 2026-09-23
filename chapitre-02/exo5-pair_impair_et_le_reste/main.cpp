#include <cstdio>

int nombre;
int main(){
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
        printf("votre entier entier est positif\n");
    }
    else if(nombre < 0){
        printf("votre entier est negatif\n");
    }
    else
        printf("votre entier est nul\n");

    //Verification de la divisibilitre par troi(3)
    if(nombre % 3 == 0){
        printf("votre entier est divisible par 3");
    }
    else
        printf("votre entier n'est pas divisible par 3\n");

    
    return 0;
}