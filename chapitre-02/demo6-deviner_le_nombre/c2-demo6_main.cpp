#include <cstdio>
#include <cstdlib>
#include<ctime>

int main(){
    
    srand(time(NULL));
    int nombre = rand() % 100 + 1;
    int choix, tour = 0;
    printf("Choisissez un entier entre 1 et 100 et je vous dis s'il correspond a ce que je devine en ce moment\n"); 
    do{
        scanf("%d", &choix);
        if(choix == nombre)
        printf("Vous avez trouve!\n");
        else{
            if(choix > nombre)
                printf("moins\n");
            else
                printf("plus\n");
        }
        tour += 1;
    } while (choix != nombre);
    printf("Il vous a fallu %d essaie(s) pour arriver a deviner le nombre.\n", tour);

    return 0;
}