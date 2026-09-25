#include <cstdio>

int main(){
    int r;
    printf("Entrer la longuer du rayon de ce cercle\n");
    scanf("%d", &r);
    for(int y = r; y >= -r; y--){
        for(int x = -r; x <= r; x++){
            if(x*x + y*y <= r*r)
                printf("##");
            else
                printf("  ");
        }
        printf("\n");
        
    }
}