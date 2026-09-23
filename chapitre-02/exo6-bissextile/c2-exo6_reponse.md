# Rapport
```
le fichier du code permettant de verifier si une annee est bissextile ou pas est fourni avec le present rapport. Ce code entier a suscite 22 lignes de code pour un execution sans erreur semantique et encore moins syntaxique. De plus, son programme a ete teste avec les valeurs 1900, 2000, 2024, 2100.

Les resultats obtenus  avec ces valeurs apres compilation dans Gitbash a l'aide de clang++($ clang++ main.cpp -o main) sont presentes dans les lignes suivantes(avec lignes d'execution copiees):
```

* premier cas(1900):
```
$ ./main.exe
Entrez une annee
1900
l'annee n'est pas bissextile
```

* Deuxieme cas(annee 2000):
```
$ ./main.exe
Entrez une annee
2000
l'annee est bissextile
```

* Troisieme cas(annee 2024):
```
$ ./main.exe
Entrez une annee
2024
l'annee est bissextile
```

* Quatrieme cas(annee 2100):
```
$ ./main.exe
Entrez une annee
2100
l'annee n'est pas bissextile
```

Le code ayant servit a obtenir ces resultat est le suivant

```
#include <cstdio>

int annee;
int main(){

    printf("Entrez une annee\n");
    scanf("%d", &annee);
    if(!(annee % 4 == 0)){
        printf("l'annee n'est pas bissextile\n");
    }
    else if(!(annee % 100 == 0)){
        printf("l'annee est bissextile");
    }
    else if(!(annee % 400 == 0)){
        printf("l'annee n'est pas bissextile");
    }
    else
        printf("l'annee est bissextile");


    return 0;
}

```