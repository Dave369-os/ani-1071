# Rapport
```
L'exercice demandait de donner les valeurs de a, b, c, d avec le bout de code:

int a = 3;
int b = a++ + 1;
int c = ++a * 2;
int d = a-- - --a;
```
recapitulatif des executions personnelles sans compilation:
- a = 3
- b = 4
- c = 10
J'ai obtenu ces resultats ont ete obtenus et trouves par moi par calcul sur un format a la main, certes je n'ai jamais eu a faire face a ce genre d'exercice mais j'ai eu des explications claires quand j'ai a eu une incomprehension de ma part au niveau du QCM 23(j'ai etudie les concepts de pre-decrementation et post-decrementation).
- d = 0 (Faux)
J'ai fait une erreur au niveau de cette operation et j'ai considere les deux membres du cote droit de l'equation avec 'donne puis change'.
En realite, cette ligne ne peut s'executter car deux modifications se font sur la meme ligne et le compilateur ne sait pas par laquelle commencer.

* Le resultat de la compilation est:
```
user@DESKTOP-DNO62US MINGW64 /d/anime/z/ani-1071/ani-1071/chapitre-02/exo8-avant_apres (main)
$ clang++ main.cpp -o main
main.cpp:6:10: warning: multiple unsequenced modifications to 'a' [-Wunsequenced]
    6 | int d = a-- - --a;
      |          ^    ~~
1 warning generated.

```

```
Le code corrige est:

#include <cstdio>
 
int a = 3;
int b = a++ + 1;
int c = ++a * 2;
int t = a--;
int d = t - --a;
int main(){
    printf("%d, %d, %d, %d", a, b, c, d);

    return 0;
}
```
* La compilation et l'execution donnent:
```
user@DESKTOP-DNO62US MINGW64 /d/anime/z/ani-1071/ani-1071/chapitre-02/exo8-avant_apres (main)
$ clang++ main.cpp -o main

user@DESKTOP-DNO62US MINGW64 /d/anime/z/ani-1071/ani-1071/chapitre-02/exo8-avant_apres (main)
$ ./main.exe
3, 4, 10, 2
```