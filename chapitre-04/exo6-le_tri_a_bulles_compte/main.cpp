#include <cstdio>

long long trierParBulles(int t[], int n);

int main(){
    int n, t[1000];
    char line[1000];

    scanf("%d", &n);
    getchar();

    fgets(line, 1000, stdin);
    int pas = 0;
    for(int i = 0; i < n; i++){
        int lu;
        sscanf(line + pas, "%d %n", &t[i], &lu);
        pas = pas + lu;
    }

    long long p = trierParBulles(t, n);
    for(int i = 0; i < n; i++){
        printf("%d\n", t[i]);
    }
    printf("%lld", p);

    
    return 0;
}

long long trierParBulles(int t[], int n){

    long long compteur = 0;

    for(int i = 0; i < n; i++){
        if(t[i] > t[i + 1]){
            int temoin = t[i];
            t[i] = t[i + 1];
            t[i + 1] = temoin;
            compteur++;
            i = 0;
            
        }
        else
            continue;
    }

    return compteur;
}