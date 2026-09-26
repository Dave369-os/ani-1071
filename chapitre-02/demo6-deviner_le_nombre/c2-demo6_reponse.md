# Raport

## Premier volet
Le fichier source du code permettant de faire deviner un nombre a l'utilisateur choisi par le programme.Ce code fait 26 lignes et s'execute sans erreur semantique(c'etait le gros du boulot). Comme demande dans l'ennonce "rand() % 100 + 1" a ete utilise pour generer un nombre aleatoirement. Cependant, apres la recherche des actions de cette commande, j'ai ete notifie du fait que le programme genere le meme nombre apres chaque execution, ce qui rend le jeu pru interessant. J'ai donc utilise "srand(time(NULL))" de la bibliotheque "ctime" pour permette de ne pas choisir les meme chiffres au demarrage en lui donnant l'heure.
Un test a ete fait par moi-meme apres compilation et execution pour explicite directement l'efficacite du programme. Les resultats sont portes dans les lignes suivantes:
```
$ clang++ c2-demo6_main.cpp -o main

user@DESKTOP-DNO62US MINGW64 /d/anime/z/ani-1071/ani-1071/chapitre-02/demo6-deviner_le_nombre (main)
$ ./main
Choisissez un entier entre 1 et 100 et je vous dis s'il correspond a ce que je devine en ce moment
10
moins
2
plus
5
moins
3
plus
4
Vous avez trouve!
Il vous a fallu 5 essaie(s) pour arriver a deviner le nombre.
```
Le code ayant permi a ce resultat est:
```
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
```
## Deuxieme volet
Le nombre d'essaies minimum garantissant de trouver le nombre est 7, ceci est une recherche dichotomique, donc, avec la bonne srategie l'utilisisateur divisera l'intervalle en 2 a chaque essaie grace a l'indicatione du programme, il saura qu'il est dans le bon intervalle. au fur et a mesure aue l'on divise l'intervalle, on se rapproche du bon nombre et au septieme essaie, le nombre est trouve a coup sur. Je precise que ce '7' est valable pour cette strategie, c'est mathematique.