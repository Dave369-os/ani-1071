#include <cstdio>
#include <cmath>

long long pgcd(long long a, long long b){
    a = llabs(a);
    b = llabs(b);
    if(a != b && a != 0 && b != 0){
        while(a != b){
            if(a > b)
                a = a - b;
            else
                b = b - a;
            }
        return a;
        }
    else if(a == 0)
        return b;
    else
        return a;
}

long long ppcm(long long a, long long b){

    long long ppm = llabs((a / pgcd(a, b)) * b);

    return ppm;
}

int main(){
    char ligne[100];
    long long n1, n2;
    
    fgets(ligne, 100, stdin);
    if(sscanf(ligne, "%lld %lld", &n1, &n2) == 2){
        printf("%lld\n", pgcd(n1, n2));
        printf("%lld\n", ppcm(n1, n2));
    }
    else
        printf("AUCUN\n");
    return 0;
}