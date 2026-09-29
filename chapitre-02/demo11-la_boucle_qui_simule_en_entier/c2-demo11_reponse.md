# Rapport
Le code de chute avec des valeurs de types int et changement des garndeurs des unites est fourni avec le present rapport. Ce code fait 18 lignes et se compile sans erreur. Apres compilation et execution on  obtient:
```
$ clang++ c2-demo11_main.cpp -o main

user@DESKTOP-DNO62US MINGW64 /d/anime/z/ani-1071/ani-1071/chapitre-02/demo11-la_boucle_qui_simule_en_entier (main)
$ ./main
t = 0 ms   y = 9991 mm
t = 100 ms   y = 9972 mm
t = 200 ms   y = 9943 mm
t = 300 ms   y = 9904 mm
t = 400 ms   y = 9855 mm
t = 500 ms   y = 9797 mm
t = 600 ms   y = 9729 mm
t = 700 ms   y = 9651 mm
t = 800 ms   y = 9563 mm
t = 900 ms   y = 9465 mm
t = 1000 ms   y = 9358 mm
t = 1100 ms   y = 9241 mm
t = 1200 ms   y = 9114 mm
t = 1300 ms   y = 8977 mm
t = 1400 ms   y = 8830 mm
t = 1500 ms   y = 8674 mm
t = 1600 ms   y = 8508 mm
t = 1700 ms   y = 8332 mm
t = 1800 ms   y = 8146 mm
t = 1900 ms   y = 7950 mm
t = 2000 ms   y = 7745 mm
t = 2100 ms   y = 7530 mm
t = 2200 ms   y = 7305 mm
t = 2300 ms   y = 7070 mm
t = 2400 ms   y = 6825 mm
t = 2500 ms   y = 6571 mm
t = 2600 ms   y = 6307 mm
t = 2700 ms   y = 6033 mm
t = 2800 ms   y = 5749 mm
t = 2900 ms   y = 5455 mm
t = 3000 ms   y = 5152 mm
t = 3100 ms   y = 4839 mm
t = 3200 ms   y = 4516 mm
t = 3300 ms   y = 4183 mm
t = 3400 ms   y = 3840 mm
t = 3500 ms   y = 3488 mm
t = 3600 ms   y = 3126 mm
t = 3700 ms   y = 2754 mm
t = 3800 ms   y = 2372 mm
t = 3900 ms   y = 1980 mm
t = 4000 ms   y = 1579 mm
t = 4100 ms   y = 1168 mm
t = 4200 ms   y = 747 mm
t = 4300 ms   y = 316 mm
t = 4400 ms   y = -125 mm
```
Le temps d'impact ici est de 4.4 ms qui est donc plus petit que celui de la demo 1, des générations de consoles ont calculé toute leur physique ainsi car cela faisait gagner en vitesse lors de manipulation de personnages. Malheureusement, une partie de la precision etait perdue.

Le code permettant d'obtenir ce resultat est:
```
#include <cstdio>

int main(){

    int y  = 10000;
    int v  = 0;
    int g  = -9810; 
    int dt = 100;

    for (int tour = 0; y > 0; tour++)
    {
        v += g * dt / 10000;
        y += v * dt / 1000;
        printf("t = %d ms   y = %d mm\n", tour * dt, y);
    }

    return 0;
}
```