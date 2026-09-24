#include <cstdio>

int main(){
    int n;
    int i = 0;
    printf("entrez un entier superieur a 1 \n");
    scanf("%d", &n);
    while(n != 1){
        if ( n % 2 == 0){
            n = n/2;
        }
        else
            n = 3*n + 1;   
        i = i + 1;
        printf("%d\t", n);
    }
    printf("\n%d etapes ont ete necessaires pour arriver a 1.", i);

    return 0;
}