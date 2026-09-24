# Rapport
```
Le code ecrit permettent de verifier la parite, le signe et la divisibilite par est fourni avec le present rapport et est assez structure avec des commentaire pour ne semer aucune embrouille. ce code entier a suscite 34 lignes de code et a ete teste avec les valeurs 0, -9, 12, 7.

Les reustats obtenus avec ces valeurs apres compilation dans Gitbash a l'aide de clang++($ clang++ main.cpp -o main) sont presentes dans les lignes suivantes:
```

* premier cas(0):
```
$ ./main
Entrez un nombre entier
0
votre entier est pair
votre entier est nul
votre entier est divisible par 3
```

* Deuxieme cas(-9):
```
$ ./main
Entrez un nombre entier
-9
votre entier est impair
votre entier est negatif
votre entier est divisible par 3
```

* Troisieme cas(12)
```
$ ./main
Entrez un nombre entier
12
votre entier est pair
votre entier est positif
votre entier est divisible par 3
```

* Troisieme cas(7):
```
$ ./main
Entrez un nombre entier
7
votre entier est impair
votre entier est positif
votre entier n'est pas divisible par 3
```

Le code ayant servi a obtenir ces resultat est le suivant:
```
#include <cstdio>


int main(){
    int nombre;
    printf("Entrez un nombre entier\n");
    scanf("%d", &nombre);

    //Verification de la parite
    if(nombre % 2 == 0){
        printf("votre entier est pair\n");
    }
    else
        printf("votre entier est impair\n");

    //Verification du signe
    if(nombre > 0){
        printf("votre entier est positif\n");
    }
    else if(nombre < 0){
        printf("votre entier est negatif\n");
    }
    else
        printf("votre entier est nul\n");

    //Verification de la divisibilite par trois(3)
    if(nombre % 3 == 0){
        printf("votre entier est divisible par 3\n");
    }
    else
        printf("votre entier n'est pas divisible par 3\n");
   
    return 0;
}
```