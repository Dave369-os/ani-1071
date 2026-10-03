#include <cstdio>

void echangerParValeur(int a, int b){
    int t = a;
    a = b;
    b = t;
}

void echangerParReference(int& a, int& b){
    int t = a;
    a = b;
    b = t;  
}

int main(){
    int a, b;
    char line[100];

    fgets(line, 100, stdin);
    if(sscanf(line, "%d %d", &a, &b)){
        echangerParValeur(a, b);
        printf("%d\n", a);
        printf("%d\n",b);
        
        echangerParReference(a, b);
        printf("%d\n", a);
        printf("%d\n",b);
    }
}