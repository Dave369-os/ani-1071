# Rapport
Le code du fichier permettant de simuler une horloge defilant de 23 : 59 : 58 a 00 : 00 : 00 est fourni avec le present rapport, ce code fait 16 lignes et s'execute correctement, ici est utilise la fonction 'sleep()' de la bibliotheque 'unistd.h', les secondes defilent bel et bien dans ce cas. pour les faires se succeder, il faut a chaque iteration tout convertir en secondes, en ajouter  et tout reconvertir comme il se doit.
le resultat apres compilation et execution est:
```
user@DESKTOP-DNO62US MINGW64 /d/anime/z/ani-1071/ani-1071/chapitre-02/demo8-le_compteur_qui_tourne (main)
$ ./main
23 : 58 : 58
23 : 58 : 59
23 : 59 : 00
```

Le code ayant servi a obtenir ce resultat est:
```
#include <cstdio>
#include <unistd.h>

int main(){

    int h = 23, m = 59, s = 58;
    for(int i = 0; i < 3; i++){
        printf("%02d : %02d : %02d\n", h, m, s);
        sleep(1);
        int total = h * 3600 + m * 60 + s + 1;
        h = (total / 3600) % 24;
        m = (total / 60) % 60;
        s = total % 60;
    }
    return 0;
}
```