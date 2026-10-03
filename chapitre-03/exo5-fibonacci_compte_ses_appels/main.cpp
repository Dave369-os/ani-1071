#include <cstdio>
#include <cmath>

long long fibonacci(int n, long long& appels){
    appels++;
    if(n == 0)
        return 0;
    if(n == 1)
        return 1;
    return fibonacci(n - 1, appels) + fibonacci(n - 2, appels);
}

int main(){

    int a;
    long long appels = 0;
    scanf("%d", &a);
    printf("%lld\n", fibonacci(a, appels));
    printf("%lld\n", appels);
}