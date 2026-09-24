# Rapport
```
Le code ecrit avec goto a ete reecris avec la boucle 'while'(l'exercice demandait d'en choisis une), ce code fat 16 lignes de code. 'got' est un commande permettant de sauter un partie du code et d'en execiter une autre marquee par un 'etiquette'. Il semblerait que le code fourni affiche les nombre de 1 a 20 en excluant les multiples de 3.
```
* Le resultat dans gitbash apres compilation du fichier source et execution du programme donne:

```
$ clang++ c2-exo12_main.cpp -o main

user@DESKTOP-DNO62US MINGW64 /d/anime/z/ani-1071/ani-1071/chapitre-02/exo12-sans_goto (main)
$ ./main
1       2       4       5       7       8       10      11      13      14      16      17      19      20
```
* Le code ayant permis d'obtenir ce resultat est:
```
#include <cstdio>

int main(){
    int n = 1;
    while(n <= 20){
        if(n % 3 == 0){
            n++;
            continue;
        }
        else
            printf("%d\t", n);
            n++;
    }

    return 0;
}
```
* NB: Des tabulations ont ete utilisees grace au caractere '\t'.
```
Dans un mois je pense que je serai capable de lire avec les deux sana aucun probleme mais serai plus a l'aise avec 'while' car j'ai eu plusieurs aventure avec cette derniere par le passe alors que l'apprentissange de 'goto s'est fait aujourd'huit
```