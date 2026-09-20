## Rapport:
```
Le programme s'est bien execute($ ./main) apres la compilation du code source($ clang++ test.cpp -o main). Les executions n'ont rendu aucune erreur avec les nombres: 3, 4l -4, 9, -10. Laissant place a un ligne vide sur le terminal d'essai(Gitbash), verifiant la conformite du programme sur le plan syntaxique.  

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