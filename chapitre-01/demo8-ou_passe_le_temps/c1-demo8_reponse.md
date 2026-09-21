## Rapport
* premier cas(fichier a une ent-tete):
``` Apres compilation avec la commande 'time'($ time clang++ test.cpp -o time), on obtient:
real    0m0.379s
user    0m0.061s
sys     0m0.045s

ainsi, le temps de compilation est de 0m0.379s et celui de l'execution est de 0.061s. Le temps de compilation est doc supperieur a celui de l'execution.
```

* deuxieme cas(fichier a 5 en-tetes de plus):
``` Apres compilation avec 'time'($ time clang++ test.cpp -o time2), on obtient:
real    0m0.913s
user    0m0.045s
sys     0m0.045s
ainsi, le temps de compilation est de 0.913s et celui de l'execution est de 0.045s. Le temps de compilation est donc supperieur a celui de l'execution. sur un projet réel, on cherche surtout à réduire la compilation car il prends(la plupart du temps) plusieus minutes voires minutes alors que l'execution prends quelques millisecondes voire secondes tout au plus. De plus, un devellopeur compile plusieurs fois sur un projet et l'execute une seule fois.
```

# Premier code:
```
#include <cstdio>

int main(){
    printf("Hello World");
    return 0;
}
```

# Deuxieme code:
```
#include<cstdio>
#include <cstdlib>
#include <cstring>
#include <cmath>
#include <ctime>
#include <map>

int main(){
    printf("Hello World");
    return 0;
}
```
```Suit a la demande de l'enseignant, voici les commandes generees pour remarquer que le temps d'execution est presque fixe:```
* premier cas
```
$ time ./test.exe
Hello World
real    0m0.164s
user    0m0.061s
sys     0m0.045s
```
* deuxieme cas
```
$ time ./test2.exe
Hello World
real    0m0.158s
user    0m0.030s
sys     0m0.060s
```
L'encadrant ayant fait une remarque sur le recensement de temps, des excuses lui sont presentees, nous avont eu l'habitude d'ouvrir plusieurs terminaux pour de multiples tests d'ou la faut grave. De plus, il est a remarquer que la compilation des memes codes ne donnent pas les memes mesures a chaque fois.