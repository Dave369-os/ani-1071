# Rapport
## Premier volet
```
Le code ayant permis de compter le nombre de chiffre(s) a l'aide de divisios successives par 10 d'un nombre a pris 19 lignes de code et dont le fichier est fourni avec le present rapport.Le compilateur utilise est 'clang++' et le terminal 'Gitbash'. La compilation($ clang++ c2-exo9_main.cpp -o main) n'ayant donne lieu a aucune erreur, des tests ont ete effectues avec les nombres 7, 42, 1000 et 2147483647 apres execution($ ./main) et les resultats sont portes dans les lignes suivantes:
```

* Avec 7:
```
$ ./main
Entrez un entier
7
Cet entier a 1 chiffre(s)
```
* Avec 42:
```
$ ./main
Entrez un entier
42
Cet entier a 2 chiffre(s)
```
* avec 1000:
```
$ ./main
Entrez un entier
1000
Cet entier a 4 chiffre(s)
```
* Avec 2147483647:
```
$ ./main
Entrez un entier
2147483647
Cet entier a 10 chiffre(s)
```
## Deuxieme volet
Pour '0', le programme donne 'Votre nombre a 1 chiffre'
* Preuve:
```
$ ./main
Entrez un entier
0
Votre nombre a 1 chiffre
```

Le code permettant d'avoir ces resultats est:
```
$ ./main
Entrez un entier
0
Votre nombre a 1 chiffre
```