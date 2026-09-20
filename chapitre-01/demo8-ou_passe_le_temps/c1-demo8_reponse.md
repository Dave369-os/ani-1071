## Rapport
* premier cas(fichier a une ent-tete):
``` Apres compilation avec la commande 'time'($ time clang++ test.cpp -o time), on obtient:
real    0m0.668s
user    0m0.030s
sys     0m0.075s

ainsi, le temps de compilation est de o.668s et celui de l'execution est de 0.3s. Le temps de compilation est doc supperieur a celui de l'execution.
```

* deuxieme cas(fichier a 5 en-tetes de plus):
``` Apres compilation avec 'time'($ time clang++ test.cpp -o time2), on obtient:
real    0m1.524s
user    0m0.030s
sys     0m0.123s
ainsi, le temps de compilation est de 1.524s et celui de l'execution est de 0.03s. Le temps de compilation est doc supperieur a celui de l'execution. sur un projet réel, on cherche surtout à réduire la compilation car il prends(la plupart du temps) plusieus minutes voires minutes alors que l'execution prends quelques millisecondes voire secondes tout au plus. De plus, un devellopeur compile plusieurs fois sur un projet et l'execute une seule fois.
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