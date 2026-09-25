# Rapport

Les fichiers des codes permettant de calculer le PGCD de deux nombres par les methodes d'euclude et de soustractions succecives recuperes au clavier sont fournis avec le present rapport. Deux fichiers ont ete deposes avec celui du present rapport.

## Methode de soustractions successives
Le code fourni pour ce cas est dans le fichier "c2-exo18_main.cpp" qui fait 29 lignes de code. Deux tests ont ete menes avec les couples (1071, 462) et (1000000, 1), les resultats dans le terminal est:
* le couple (1071, 462)
```
$ clang++ c2-exo18_main.cpp -o main

user@DESKTOP-DNO62US MINGW64 /d/anime/z/ani-1071/ani-1071/chapitre-02/exo18-pgcd_sans_division (main)
$ ./main
Entrez le premier nombre
1071
Entrez le deuxieme nombre
462
le PGCD de vos deux nombres est 21
il a fallu 11 tours pour le trouver
```
* Le couple (1000000, 1)
```
$ clang++ c2-exo18_main.cpp -o main

user@DESKTOP-DNO62US MINGW64 /d/anime/z/ani-1071/ani-1071/chapitre-02/exo18-pgcd_sans_division (main)
$ ./main
Entrez le premier nombre
1000000
Entrez le deuxieme nombre
1
le PGCD de vos deux nombres est 1
il a fallu 999999 tours pour le trouver
```
* Dernier cas: deux nombres similaires(100, 100)
```
$ clang++ c2-exo18_main.cpp -o main

user@DESKTOP-DNO62US MINGW64 /d/anime/z/ani-1071/ani-1071/chapitre-02/exo18-pgcd_sans_division (main)
$ ./main
Entrez le premier nombre
100
Entrez le deuxieme nombre
100
le PGCD de vos nombres est 100
il a fallu 0 tour pour le trouver
```
Le code permis ayant permis d'obtenir le resultat est:
```
#include <cstdio>

int main(){

    int i = 0; //compteur pour le nombre de tour(s)
    int n1, n2; //n pour 'nombre;
    printf("Entrez le premier nombre\n");
    scanf("%d", &n1);
    printf("Entrez le deuxieme nombre\n");
    scanf("%d", &n2);
    if(n1 != n2){
            while(n1 != n2){
                if(n1 > n2)
                    n1 = n1 - n2;
                else
                    n2 = n2 - n1;
                i = i + 1;
            }
            printf("le PGCD de vos deux nombres est %d\n", n1);
            printf("il a fallu %d tours pour le trouver\n", i);

        }
    else{
        printf("le PGCD de vos nombres est %d\n", n1);
        printf("il a fallu %d tour pour le trouver\n", i);
    }

    return 0;
}
```

## Methode de l'algorithme d'euclude
Le code permettant de faire ce cas est dans le fichier "test.cpp" fourni avec le present rapport, ce code fait 27 lignes de code et s'execute sans erreur. Les tests ont ete effectue avec les memes couple que ceux du test passe.

* le couple (1071, 462)
```
$ clang++ test.cpp -o test

user@DESKTOP-DNO62US MINGW64 /d/anime/z/ani-1071/ani-1071/chapitre-02/exo18-pgcd_sans_division (main)
$ ./test
Entrez le premier nombre
1071
Entrez le deuxieme nombre
462
le PGCD de vos deux nombres est 21
il a fallu 3 tours pour le trouver
```
* Le couple (1000000, 1)
```
$ clang++ test.cpp -o test

user@DESKTOP-DNO62US MINGW64 /d/anime/z/ani-1071/ani-1071/chapitre-02/exo18-pgcd_sans_division (main)
$ ./test
Entrez le premier nombre
1000000
Entrez le deuxieme nombre
1
le PGCD de vos deux nombres est 1
il a fallu 1 tours pour le trouver
```
* Dernier cas: deux nombres similaires(100, 100)
```
$ clang++ test.cpp -o test

user@DESKTOP-DNO62US MINGW64 /d/anime/z/ani-1071/ani-1071/chapitre-02/exo18-pgcd_sans_division (main)
$ ./test
Entrez le premier nombre
100
Entrez le deuxieme nombre
100
le PGCD de vos nombres est 100
il a fallu 0 tour pour le trouver
```
Le code ayant mene a ce resultat est:
```
#include <cstdio>

int main(){

    int i = 0; //compteur pour le nombre de tour(s)
    int n1, n2; //n pour 'nombre;
    printf("Entrez le premier nombre\n");
    scanf("%d", &n1);
    printf("Entrez le deuxieme nombre\n");
    scanf("%d", &n2);
    if(n1 != n2){
            while(n1 != 0 && n2 != 0){
                if(n1 > n2)
                    n1 = n1 % n2;
                else
                    n2 = n2 % n1;
                i = i + 1;
            }
            printf("le PGCD de vos deux nombres est %d\n", (n1 != 0)? n1:n2);
            printf("il a fallu %d tours pour le trouver\n", i);
        }
    else{
        printf("le PGCD de vos nombres est %d\n", n1);
        printf("il a fallu %d tour pour le trouver\n", i);
    }

}
```
On contaste que la methode d'euclude demande moins de tours pour calculer le PGCD de deux nombres, en conclusion, elle est la plus efficace et la mieux a utiliser.