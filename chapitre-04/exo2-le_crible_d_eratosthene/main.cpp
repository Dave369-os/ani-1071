#include <cstdio>

void cribler(bool premier[], int n);

int main(){

    int n;
    bool premier[100000];

    scanf("%d", &n);
    if(n < 2)
        printf("AUCUN\n");
    else
        cribler(premier, n);

    return 0;
}

void cribler(bool premier[], int n){

    for(int i = 0; i <= n; i++){
        premier[i] = false;
    }
    for(int i = 2; i <= n; i++){
        premier[i] = true;
    }

    for(int i = 2; i < n; i++){
        for(int j = i * i; j <= n; j = j + i){
            premier[j] = false;
        }

    }

    for(int i = 2; i <= n; i++){
        if(premier[i] == true)
            printf("%d\n", i);
    }
}