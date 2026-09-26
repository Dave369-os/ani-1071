#include <cstdio>

int main(){

    for(int i = 1; i <= 10; i++){
        printf("-------------------\n");
        for(int j = 0; j <= 10; j++){
            printf("|%-4d * %4d =", i, j);
            printf("%4d|\n", i*j);
        }
    }
    printf("-------------------\n");

    return 0;
}