# Rapport
```
Le code permettant de recuperer deux entiers, les comparer et afficher selon leur nombre un mot est fourni avec le present rapport. Tout ceci a ete fait grace a des operateurs ternaires, une meilleure comprehension a ete faite des le traitement du QCM 24. La compilation et l'execution n'ont donne lieu a aucune erreur, le programme a la fin affiche 1 objet pour l'entier egal a 1(s'il y en a un) et n ojets(pour n > 1, ou n est l'entier entre tout cas confondu). 
```
* Un test a ete effectue avec 1 comme premier entier et 5 comme deuxieme entier, le resultat apres compilation et execution donne:
```
$ clang++ main.cpp -o main

user@DESKTOP-DNO62US MINGW64 /d/anime/z/ani-1071/ani-1071/chapitre-02/exo13-trois_ternaires (main)
$ ./main
Entrez le premier entier
1
Entrez le deuxieme entier
5
1 est le plus petit des deux
5 est le plus grand des deux
1 objet pour le premier cas
5 objets pour le deuxieme cas
```
* Enfin, le code source ayant permi d'obtenir ce resultat fait 22 lignes et est presente dans les lignes qui suivent:
```
#include <cstdio>

int main(){

    int n1, n2; // n pour nombre
    printf("Entrez le premier entier\n");
    scanf("%d", &n1);
    printf("Entrez le deuxieme entier\n");
    scanf("%d", &n2);

    //Affichage du plus petit
    printf("%d est le plus petit des deux\n", (n1 < n2)? n1 : n2);

    //Affichage du plus grand
    printf("%d est le plus grand des deux\n", (n1 > n2)? n1 : n2);

    //Affichage du nombre d'objet(s)
    printf("%d %s pour le premier cas\n", n1, (n1 == 1)? "objet" : "objets");
    printf("%d %s pour le deuxieme cas\n", n2, (n2 > 1)? "objets" : "objet");

    return 0;
}
```