#include <cstdio>

void tourner(int t[], int n, int k);

int main(){

    int t[10000];
    int n, k;
    char line[100];

    fgets(line, 100, stdin);
    sscanf(line, "%d %d", &n, &k);

    tourner(t, n, k);

    return 0;
}

void tourner(int t[], int n, int k){

    char ligne[100];
    int pas = 0;

    fgets(ligne, 100, stdin); // Je recupere les valeurs

    //je les affecte au tableau
    for(int i= 0; i < n; i++){
        int lus;
        sscanf(ligne + pas, "%d %n", &t[i], &lus);
        pas = pas + lus;
      }

    //Je cree une copie du tableau
    int copie[n];
    for(int i = 0; i < n; i++){
        copie[i] = t[i];
    }

    if(k > 0){
        for(int i = 0; i < n; i++){
            int p = (i + k) % n;
            t[i] = copie[p];
            }
    }
    else if(k < 0){
        for(int i = 0; i < n; i++){
            int p = (i + k) % n;
            if(p < 0)
                p = p + n;
            t[i] = copie[p];
            }
    }

    
    for(int i = 0; i < n; i++){
        printf("%d\n", t[i]);
    }
}