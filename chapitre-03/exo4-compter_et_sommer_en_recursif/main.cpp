#include <cstdio>
#include <cmath>

int chiffresRecursif(int n){
    int chiffre = 1;
    n = abs(n);
    if(n >= 10){
        n = (n / 10);
        chiffre = chiffre + chiffresRecursif(n);
    }
    return chiffre;
}

int sommeChiffresRecursif(int n){
    n = abs(n);
    int somme = 0;
    if(n >= 10){
        somme = n % 10 + sommeChiffresRecursif(n / 10);
        return somme;
    }
    else
        return n;
}

int main(){
    char line[100];
    int a, count, pas = 0;

    fgets(line, 100, stdin);

    if(sscanf(line, "%d", &a) == 1){
        while(sscanf(line + pas, "%d %n", &a, &count) == 1){
            pas = pas + count;
            printf("%d\n", chiffresRecursif(a));
            printf("%d\n", sommeChiffresRecursif(a));
        }
    }
    else
        printf("AUCUN");

    return 0;
}