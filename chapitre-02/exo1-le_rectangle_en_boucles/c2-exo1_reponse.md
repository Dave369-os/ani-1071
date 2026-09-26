# Rapport
Le fichier source permettant de dessiner un rectangle avec le caractere '#' grace a des boucles imbriquees est fourni avec le present rapprot et fait 18 lignes. Il s'execute et se compile sans erreur.

* premier cas: le rectangle du chapitre precedent(7 lignes et 20 colonnes)
Le resultat apres compilation et execution avec clang++, on a:
```
$ clang++ c2-exo1_main.cpp -o main

user@DESKTOP-DNO62US MINGW64 /d/anime/z/ani-1071/ani-1071/chapitre-02/exo1-le_rectangle_en_boucles (main)
$ ./main
####################
#                  #
#                  #
#                  #
#                  #
#                  #
####################
```
le code ayant permi d'obtenir ce resultat est:
```
#include <cstdio>

int ligne = 7;
int colone = 20;
int main(){
    for(int i = 0; i < ligne; i++){
            for(int n = 0; n < colone; n++){
                if(i == 0 || i == ligne - 1 || n == 0 || n == colone - 1){
                    printf("#");
                }
                else
                    printf(" ");
            }
        printf("\n");
    }

    return 0;
}
```
Ce rectangle est identique a celui du chapitre precedent, 7 lignes, 20 colonnes et 18 espaces a l'interieur. Cependant, ce code-ci fait 18 lignes, il contient donc plus de lignes que celui du chapitre precedent(12 lignes) . Dans ce cas, le code du premier chapitre est le meilleur.

* Deuxieme cas: le rectangle a 12 lignes et 40 collonnes
Apres compilation et execution on a:
```
$ clang++ c2-exo1_main.cpp -o main

user@DESKTOP-DNO62US MINGW64 /d/anime/z/ani-1071/ani-1071/chapitre-02/exo1-le_rectangle_en_boucles (main)
$ ./main
########################################
#                                      #
#                                      #
#                                      #
#                                      #
#                                      #
#                                      #
#                                      #
#                                      #
#                                      #
#                                      #
########################################
```
Le code ayant permi d'obtenir ce resultat est:
```
#include <cstdio>

int ligne = 12;
int colone = 40;
int main(){
    for(int i = 0; i < ligne; i++){
            for(int n = 0; n < colone; n++){
                if(i == 0 || i == ligne - 1 || n == 0 || n == colone - 1){
                    printf("#");
                }
                else
                    printf(" ");
            }
        printf("\n");
    }

    return 0;
}
```
* Conclusion finale
Ce code fait aussi 18 lignes, le meme resultat avec le code du premier chapitre aurait pris plus de ligne pour completer la hauteur du rectangle(5 lignes de code en plus exactement, pour quitter de 7 lignes a 12 avec des print). Au final le code avec les boucles imbriquees est le meilleur car une variation des mesures du dessin ne le change pas.