#include <cstdio>

unsigned int factorielle32(unsigned int n){
    unsigned int fact = 1;
    if(n > 0){
        for(int i = 2; i <= n; i++){
            fact = fact * i;
        }
        return fact;
        }
    else
        return 1;
    }

unsigned long long factorielle64(unsigned long long n){
    unsigned long long fact = 1;
    if(n > 0){
        for(int i = 2; i <= n; i++){
            fact = fact * i;
        }
        return fact;
        }
    else
        return 1;
    }


int main(){
    unsigned int a;
    scanf("%d", &a);
    unsigned long long x = a;
    scanf("%lld", &x);
    printf("%d\n", factorielle32(a));
    printf("%lld\n", factorielle64(x));

    return 0;
}