#include <cstdio>

int choix;
int main(){
    printf("CHOISISSEZ UNE OPTION\n\n");
    printf("1- Nouvelle partie\n2-charger\n3-option\n4-quitter\n");
    scanf("%d", &choix);
    switch (choix){
        case 1: 
            printf("Lancement d'une nouvelle partie...\n");
            break;
         case 2:
            printf("Chargement...\n")   ;
            break;
        case 3:
            printf("Ouverture des options...\n");
            break;
        case 4:
            printf("Fermeture du programme...\n");
            break;
        default:
            printf("Choix invalide\n");
            break;
    }
    
    return 0;
}