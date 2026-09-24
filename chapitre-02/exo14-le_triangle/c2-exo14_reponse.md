# Rapport
* Cet exercice a ete le plus complexe jusque la a mes yeux, j'imagine que le niveau de difficulte augmentera encore.
```
Le fichier source du code permettant de mettre sur pied un triangle de hauteur 'h' est fourni avec le present rapport et a pris 17 lignes de code pour sa mise sur pied complete. Aux premiers abords, l'exercice semblait facile mais une partie de l'ennonce succitait mon incomprehension:
'des espaces avant, des étoiles, rien après.', ce qui signifie qu'aucun espace ne doit etre mis apres l'affichage d'etoiles sur une ligne. La alors se soulevait un probleme de logique, trouver un rapport entre le nombre de lignes, la hauteur et le nombre d'espace, ainsi qu'un deuxieme rapport avec le nombre d'etoiles a inseres(la je l'avoue j'ai eu besoin d'aide, le concept etait assez complique mais est devenu tres facile apres comprehension...)
```
* Le code menant au resultat voule est alors:
```
#include <cstdio>

int main(){

    int h;
    printf("Entrez la hauteur\n");
    scanf("%d", &h);
    for(int k = 1; k <= h; k++){
        for(int n = 0; n <= h - k; n++)
                printf(" ");
        for(int n = 0; n < 2 * k - 1; n++)
            printf("*");
        printf("\n");
    }

    return 0;
}
```
* un test a ete effectue avec le chiffre 4, le resultat apres compilation et execution avec clang++ a donne:
```
$ clang++ main.cpp -o main

user@DESKTOP-DNO62US MINGW64 /d/anime/z/ani-1071/ani-1071/chapitre-02/exo14-le_triangle (main)
$ ./main
Entrez la hauteur
4
    *
   ***
  *****
 *******
 ```