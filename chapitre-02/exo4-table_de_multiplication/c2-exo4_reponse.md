# Rapport
Le fichier source du code permettent d'afficher la table de multiplication de 1 a 10 sous forme de grilles avec des colonnes alignees est fourni avec le present rapport, ce code fait 15 lignes et est compile sans erreur aussi bien syntaxique que semantique. 

Ce code est:
```
#include <cstdio>

int main(){

    for(int i = 1; i <= 10; i++){
        printf("-------------------\n");
        for(int j = 0; j <= 10; j++){
            printf("|%-4d * %4d =", i, j);
            printf("%4d|\n", i*j);
        }
    }
    printf("-------------------\n");

    return 0;
}
```
* Explication de "%4d"
```
"%4d" permet d'afficher un nombre affiche avec printf sur 4 caractere a droite. quand le nombre fait moins de 4 caracteres, il les range a droite et le surplus de caracteres reserves pour ce dernier est mis a gauche comme caractere d'espace. l'inverse est fait pour l'option "%-4"(les espaces droite et le nombre a gauche s'il y a un surplus. Je l'ai su avec des recherches plus poussees). Cela a ete utile dans le cardre de notre exercice car il aurait ete galere d'aligner les branches separant les grilles et les limites des grilles elles-memes(trop de conditions auraient ete faites alors que l'ennonce nous facilite la tache avec cette aide). De plus, il sera toujour util ici car aucun des nombres imprimes ne depassera 4 caracteres(car la table est deja connue a l'avance).
```
* Resultat final
Apres compilation et execution avec clang++, il est obtenu:
```
$ clang++ c2-exo4_main.cpp -o main

user@DESKTOP-DNO62US MINGW64 /d/anime/z/ani-1071/ani-1071/chapitre-02/exo4-table_de_multiplication (main)
$ ./main
-------------------
|1    *    0 =   0|
|1    *    1 =   1|
|1    *    2 =   2|
|1    *    3 =   3|
|1    *    4 =   4|
|1    *    5 =   5|
|1    *    6 =   6|
|1    *    7 =   7|
|1    *    8 =   8|
|1    *    9 =   9|
|1    *   10 =  10|
-------------------
|2    *    0 =   0|
|2    *    1 =   2|
|2    *    2 =   4|
|2    *    3 =   6|
|2    *    4 =   8|
|2    *    5 =  10|
|2    *    6 =  12|
|2    *    7 =  14|
|2    *    8 =  16|
|2    *    9 =  18|
|2    *   10 =  20|
-------------------
|3    *    0 =   0|
|3    *    1 =   3|
|3    *    2 =   6|
|3    *    3 =   9|
|3    *    4 =  12|
|3    *    5 =  15|
|3    *    6 =  18|
|3    *    7 =  21|
|3    *    8 =  24|
|3    *    9 =  27|
|3    *   10 =  30|
-------------------
|4    *    0 =   0|
|4    *    1 =   4|
|4    *    2 =   8|
|4    *    3 =  12|
|4    *    4 =  16|
|4    *    5 =  20|
|4    *    6 =  24|
|4    *    7 =  28|
|4    *    8 =  32|
|4    *    9 =  36|
|4    *   10 =  40|
-------------------
|5    *    0 =   0|
|5    *    1 =   5|
|5    *    2 =  10|
|5    *    3 =  15|
|5    *    4 =  20|
|5    *    5 =  25|
|5    *    6 =  30|
|5    *    7 =  35|
|5    *    8 =  40|
|5    *    9 =  45|
|5    *   10 =  50|
-------------------
|6    *    0 =   0|
|6    *    1 =   6|
|6    *    2 =  12|
|6    *    3 =  18|
|6    *    4 =  24|
|6    *    5 =  30|
|6    *    6 =  36|
|6    *    7 =  42|
|6    *    8 =  48|
|6    *    9 =  54|
|6    *   10 =  60|
-------------------
|7    *    0 =   0|
|7    *    1 =   7|
|7    *    2 =  14|
|7    *    3 =  21|
|7    *    4 =  28|
|7    *    5 =  35|
|7    *    6 =  42|
|7    *    7 =  49|
|7    *    8 =  56|
|7    *    9 =  63|
|7    *   10 =  70|
-------------------
|8    *    0 =   0|
|8    *    1 =   8|
|8    *    2 =  16|
|8    *    3 =  24|
|8    *    4 =  32|
|8    *    5 =  40|
|8    *    6 =  48|
|8    *    7 =  56|
|8    *    8 =  64|
|8    *    9 =  72|
|8    *   10 =  80|
-------------------
|9    *    0 =   0|
|9    *    1 =   9|
|9    *    2 =  18|
|9    *    3 =  27|
|9    *    4 =  36|
|9    *    5 =  45|
|9    *    6 =  54|
|9    *    7 =  63|
|9    *    8 =  72|
|9    *    9 =  81|
|9    *   10 =  90|
-------------------
|10   *    0 =   0|
|10   *    1 =  10|
|10   *    2 =  20|
|10   *    3 =  30|
|10   *    4 =  40|
|10   *    5 =  50|
|10   *    6 =  60|
|10   *    7 =  70|
|10   *    8 =  80|
|10   *    9 =  90|
|10   *   10 = 100|
-------------------
```