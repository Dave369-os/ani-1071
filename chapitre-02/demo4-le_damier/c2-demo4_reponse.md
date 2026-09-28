# Rapport
Le fichier source permettant d'afficher un damier 8x8 est fourni avec le present rapport. Ce code fait 13 lignes et se compile sans erreur. Le principe de mise dsur pied des condition est assez simple a comprendre:
Une premiere boucle pour parcourir les lignes du damier, une deuxieme imbriquee pour les colones du meme dessin et un operateur ternaire pour verifier si la somme des coordonnees de chaque case est paire ou impaire. si elle est pair, une case avec des caracteres espace est mise, sinon la case sera mise avec des "#".
Le resultat apres compilation et execution donne:
```
$ clang++ c2-demo4_main.cpp -o main

user@DESKTOP-DNO62US MINGW64 /d/anime/z/ani-1071/ani-1071/chapitre-02/demo4-le_damier (main)
$ ./main
    ####    ####    ####    ####
    ####    ####    ####    ####
####    ####    ####    ####    
####    ####    ####    ####    
    ####    ####    ####    ####
    ####    ####    ####    ####
####    ####    ####    ####    
####    ####    ####    ####    
    ####    ####    ####    ####
    ####    ####    ####    ####
####    ####    ####    ####    
####    ####    ####    ####    
    ####    ####    ####    ####
    ####    ####    ####    ####
####    ####    ####    ####    
####    ####    ####    #### 
```

Le code ayant permit de l'obtenir est:
```
#include <cstdio>

int main(){

    for(int y = 0; y < 16; y++){
        for(int x = 0; x < 32; x++){
            printf(((x/4 + y/2) % 2 == 0)? " " : "#");
        }
        printf(("\n"));
    }

    return 0;
}
```