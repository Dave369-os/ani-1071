# Rapport
Le code demande dans l'ennonce est fourni avec le present rapport. Ce code permet de dessinez une bande de 60 colonnes sur 4 lignes dont l'intensité va du clair au sombre de gauche à droite, il fait 16 lignes et applique la notio de chaine de caracteres pour pourvoir stocker plusieurs caracteres dans la meme variable afin d'obtenir le resultat voulu.

Apres compilation et execution du code, on a:
```
$ clang++ c2-demo5_main.cpp -o main

user@DESKTOP-DNO62US MINGW64 /d/anime/z/ani-1071/ani-1071/chapitre-02/demo5-le_degrade (main)
$ ./main
       .......::::::-------=======++++++*******#######@@@@@@
       .......::::::-------=======++++++*******#######@@@@@@
       .......::::::-------=======++++++*******#######@@@@@@
       .......::::::-------=======++++++*******#######@@@@@@
```

Le code ayant permi d'obtenir ce rresultat est:
```
#include <cstdio>

int main(){

    const char* caracts = " .:-=+*#@";

    for (int ligne = 0; ligne < 4; ligne++){
        for(int x = 0; x < 60; x++){
            int i = x * 9 / 60;
            printf("%c", caracts[i]);
        }
        printf("\n");
    }

    return 0;
}
```