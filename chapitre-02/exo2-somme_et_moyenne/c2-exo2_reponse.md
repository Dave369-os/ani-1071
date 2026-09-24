# Rapport
```
Le code ecrit premettant de recuperer cinq(5) entiers et afficherer leur somme et leur moyenne s'ettend sur quinze(15) lignes et affiche la moyenne avec 3 chiffres  apres la virgule.
Apres compilation et execution avec clang++ dans le terminal gitbash de ce code on obtient avec les nombres 7, 8, 9, 10 puis 10 a nouveau:

user@DESKTOP-DNO62US MINGW64 /d/anime/z/ani-1071/ani-1071/chapitre-02/exo2-somme_et_moyenne (main)
$ clang++ main.cpp -o main

user@DESKTOP-DNO62US MINGW64 /d/anime/z/ani-1071/ani-1071/chapitre-02/exo2-somme_et_moyenne (main)
$ ./main
Entrez 5 entiers
7
8
9
10
10
la somme de vos entiers est de 44 et leur moyenne 8.800
```
* Le code ayant permis d'obtenir ce resultat est:
```
#include <cstdio>

int main(){
    printf("Entrez 5 entiers\n");
    int somme = 0;
    int entier;
    for(int i = 0; i < 5; i++){
        scanf("%d", &entier);
        somme = somme + entier;
    }
    double moyenne = (double)somme/5.0;
    printf("la somme de vos entiers est de %d et leur moyenne %.3f", somme, moyenne);

    return 0;
}
```