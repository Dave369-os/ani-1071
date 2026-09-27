# Rapport
Le fichier source du code permettant d'ajouter des rebonds dans l'action de chutte de la balle est donne avec le present rapport.
Le resultat apres compilation et execution du code est:
```
$ clang++ c2-demo2_main.cpp -o main

user@DESKTOP-DNO62US MINGW64 /d/anime/z/ani-1071/ani-1071/chapitre-02/demo2-le_rebond (main)
$ ./main
Rebond 1 : vitesse = 35.47 m/s, hauteur max = 64.14 m
Rebond 2 : vitesse = 28.36 m/s, hauteur max = 41.00 m
Rebond 3 : vitesse = 22.67 m/s, hauteur max = 26.20 m
Rebond 4 : vitesse = 18.12 m/s, hauteur max = 16.74 m
Rebond 5 : vitesse = 14.46 m/s, hauteur max = 10.66 m
Rebond 6 : vitesse = 11.50 m/s, hauteur max = 6.74 m
Rebond 7 : vitesse = 9.16 m/s, hauteur max = 4.28 m
Rebond 8 : vitesse = 7.27 m/s, hauteur max = 2.69 m
Rebond 9 : vitesse = 5.80 m/s, hauteur max = 1.72 m
Rebond 10 : vitesse = 4.62 m/s, hauteur max = 1.09 m
Rebond 11 : vitesse = 3.68 m/s, hauteur max = 0.69 m
Rebond 12 : vitesse = 2.94 m/s, hauteur max = 0.44 m
Rebond 13 : vitesse = 2.28 m/s, hauteur max = 0.26 m
Rebond 14 : vitesse = 1.79 m/s, hauteur max = 0.16 m
Rebond 15 : vitesse = 1.39 m/s, hauteur max = 0.10 m
Rebond 16 : vitesse = 1.08 m/s, hauteur max = 0.06 m
Rebond 17 : vitesse = 0.86 m/s, hauteur max = 0.04 m
Rebond 18 : vitesse = 0.65 m/s, hauteur max = 0.02 m
Rebond 19 : vitesse = 0.50 m/s, hauteur max = 0.01 m
Rebond 20 : vitesse = 0.38 m/s, hauteur max = 0.01 m
Rebond 21 : vitesse = 0.24 m/s, hauteur max = 0.00 m
Rebond 22 : vitesse = 0.12 m/s, hauteur max = 0.00 m
Nombre total de rebonds: 22
```
Cette balle fait 22 rebonds au total avec dt = 0.01. A la fin du code on remarque que la hauteur max est egale a 0, ce qui confirme l'arret du mouvement de la balle(car la balle se situe au sol).Cette hauteur decroit bien au cours de l'execution du programme.

Le code ayant servi a l'obtention de ce resultat est:
```
#include <cstdio>

int main(){

    double y  = 100.0;   // hauteur, en mètres
    double v  = 0.0;    // vitesse, en m/s (vers le haut)
    double g  = -9.81;  // gravité
    double dt = 0.01;    // un dixième de s

    int rebonds = 0;

    for (int tour = 0; ; tour++)
    {
        v += g * dt;
        y += v * dt;

        if(y <= 0.0){
            y = 0.0;
            if(-v < 0.1)
                break;
            v = -v * 0.8;
            rebonds++;

            double hmax = (v * v) / (2.0 * 9.81);
            printf("Rebond %d : vitesse = %.2f m/s, hauteur max = %.2f m\n", rebonds, v, hmax);

        }
    }
    printf("Nombre total de rebonds: %d", rebonds);

    return 0;
}
```