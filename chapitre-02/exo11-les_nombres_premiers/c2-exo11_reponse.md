# Rapport
## Premier volet
```
Le fichier du code permettant d'afficher tous les nombres premier inferieurs a 100 est fourni avec le present rapport. Ce code a demande 20 lignes de code pour un fonctionnement optimal et sans erreur de compilation et d'execution. Pour un bon resultat, nous avons utilise deux boubles, un break et une variable booleene(premier). La compilation s'est faite avec clang++($ clang++ c2-exo11_main.cpp -o main) dans le terminal gitbash. 
```

Le resultat apres execution donne:
```
$ ./main.exe
2
3
5
7
11
13
17
19
23
29
31
37
41
43
47
53
59
61
67
71
73
79
83
89
97
```
* Le code permettant d'obtenir ce resultat est:
```
#include <cstdio>

int main(){

bool premier = true;
    for(int i = 2; i < 100; i++){
        for(int n = 2; n < i; n++){
            if(i % n == 0){
                premier = false;
                break;
            }
        }
        if(premier == true){
            printf("%d\n", i);
        }
        premier = true;
    }

    return 0;
}
```

## Deuxieme volet
```
Il suffit de tester les valeurs jusqu'a la racine carree car les diviseurs vont de paire:
si un nombre n est le diviseur d'un entier, alors le nombre n2 dont la multiplication par n donne l'entier est a l'oppose de n par rapport a la racine de cet entier. De ce fait, deux membres d'une meme paire ne peuvent etre en meme temps ni inferieurs ni superieurs a la racine de l'entier. D'ou la simplicite de s'arrete a la racine carree.
```
Ainsi, le meme test a ete effectue en testant les valeurs jusqu'a la racine carree et les resultats apres compilaton et execution sont(ici a ete utilisee ls fonction sqrt de la bibliotheque cmath):

```
$ clang++ c2-exo11_main.cpp -o main

user@DESKTOP-DNO62US MINGW64 /d/anime/z/ani-1071/ani-1071/chapitre-02/exo11-les_nombres_premiers (main)
$ ./main
2
3
5
7
11
13
17
19
23
29
31
37
41
43
47
53
59
61
67
71
73
79
83
89
97
```
Et le code source ayant servit a ce resultat est:
```
#include <cstdio>
#include <cmath>

int main(){

bool premier = true;
    for(int i = 2; i < 100; i++){
        for(int n = 2; n <= sqrt(i); n++){
            if(i % n == 0){
                premier = false;
                break;
            }
        }
        if(premier == true){
            printf("%d\n", i);
        }
        premier = true;
    }

    return 0;
}
```