## Rapport:
```
Le programme s'est bien execute($ ./main) apres la compilation du code source($ clang++ test.cpp -o main). Les executions n'ont rendu aucune erreur avec les nombres: 3, 4l -4, 9, -10. Laissant place a un ligne vide sur le terminal d'essai(Gitbash), verifiant la conformite du programme sur le plan syntaxique.  
```
les tests avec les nombres ennonces sont:
* avec '3'
```
$ ./main
3

user@DESKTOP-DNO62US MINGW64 /d/anime/z/ani-1071/ani-1071/chapitre-01/demo6-un_programme_qui_echoue_expres (main)
$ echo $?
1
```
 * Avec '41':
 ```
$ ./main
41

user@DESKTOP-DNO62US MINGW64 /d/anime/z/ani-1071/ani-1071/chapitre-01/demo6-un_programme_qui_echoue_expres (main)
$ echo $?
1
```

* Avec '-4':
```
$ ./main
-4

user@DESKTOP-DNO62US MINGW64 /d/anime/z/ani-1071/ani-1071/chapitre-01/demo6-un_programme_qui_echoue_expres (main)
$ echo $?
0
```
* Avec 9
```
$ ./main
9

user@DESKTOP-DNO62US MINGW64 /d/anime/z/ani-1071/ani-1071/chapitre-01/demo6-un_programme_qui_echoue_expres (main)
$ echo $?
1
```
* Avec 10
```
$ ./main
10

user@DESKTOP-DNO62US MINGW64 /d/anime/z/ani-1071/ani-1071/chapitre-01/demo6-un_programme_qui_echoue_expres (main)
$ echo $?
0
```
```
Le code source du programme est:
#include <cstdio>
int n;
int main(){
    scanf("%d", &n);
    if(n%2 == 0){
        return 0;
    }
    else{
        return 1;
    }

}

```