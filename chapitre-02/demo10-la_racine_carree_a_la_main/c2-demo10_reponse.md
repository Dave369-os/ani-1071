# Rapport
Le fichier source permettant de calculer la racine d'un nombre fourni par l'utilisateur grace a la methode de Heron est fourni avec le present rapport. Ce code fait 24 lignes et se compile et s'execute sans erreur, les types de variable utilisees sont: int pour compter le nombre de tour(s) et double pour les racines(etant donne que manipuler des 'int' ici serait trop risque a cause des arrondies comme le dit si bien le cours). Des tests ont ete effectues avec les nombres 2, 10000 et 1e12. Les resultats des test sont repportes dans les lignes suivantes:

* Avec 2:
```
$ clang++ c2-demo10_main.cpp -o main

user@DESKTOP-DNO62US MINGW64 /d/anime/z/ani-1071/ani-1071/chapitre-02/demo10-la_racine_carree_a_la_main (main)
$ ./main
Entrez un nomre dont je donnerai la racine
2
la racine carree de 2.000000 est 1.414214 trouvee en 5 tour(s)
```

* Avec 1000
```
$ clang++ c2-demo10_main.cpp -o main

user@DESKTOP-DNO62US MINGW64 /d/anime/z/ani-1071/ani-1071/chapitre-02/demo10-la_racine_carree_a_la_main (main)
$ ./main
Entrez un nomre dont je donnerai la racine
1000
la racine carree de 1000.000000 est 31.622777 trouvee en 10 tour(s)
```
* Avec 10^12
```
$ clang++ c2-demo10_main.cpp -o main

user@DESKTOP-DNO62US MINGW64 /d/anime/z/ani-1071/ani-1071/chapitre-02/demo10-la_racine_carree_a_la_main (main)
$ ./main
Entrez un nomre dont je donnerai la racine
1e12
la racine carree de 1000000000000.000000 est 1000000.000000 trouvee en 26 tour(s)
```
Tous les resultats ont ete reverifies et sont corrects, le programme n'admet donc aucune erreur de semantique.
Le code ayant permi d'obtenir ces resultat:
```
#include <cstdio>

int main(){

    double n, i, x;
    int tour = 0;

    printf("Entrez un nomre dont je donnerai la racine\n");
    scanf("%lf", &n);
    x = n;
    do{
        tour += 1;
        i = x;
        x = (x + n/x)/2;
        if((i - x) <= 0.000000001){
            break;
        }
        else
            continue;
    }while(true);
    printf("la racine carree de %f est %f trouvee en %d tour(s)", n, x, tour);

    return 0;
}
```