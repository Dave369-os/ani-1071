#include <cstdio>

int nombre;
int main(){
    printf("Entrez un entier\n");
    scanf("%d", &nombre);
    int i = 0;
    if(nombre != 0){
        while (nombre >= 1){
            nombre = nombre / 10;
            i = i + 1;
        }
            printf("Cet entier a %d chiffre(s)", i);
    } 
    else 
        printf("Votre nombre a 1 chiffre");
    
    return 0;
}