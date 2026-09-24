#include <cstdio>

int main(){
    int n = 1;
    while(n <= 20){
        if(n % 3 == 0){
            n++;
            continue;
        }
        else
            printf("%d\t", n);
            n++;
    }

    return 0;
}