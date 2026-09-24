#include <cstdio>

int main(){

    int h;
    printf("Entrez la hauteur\n");
    scanf("%d", &h);
    for(int k = 1; k <= h; k++){
        for(int n = 0; n <= h - k; n++)
                printf(" ");
        for(int n = 0; n < 2 * k - 1; n++)
            printf("*");
        printf("\n");
    }

    return 0;
}