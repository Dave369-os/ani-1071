#include <cstdio>

int ligne = 12;
int colone = 40;
int main(){
    for(int i = 0; i < ligne; i++){
            for(int n = 0; n < colone; n++){
                if(i == 0 || i == ligne - 1 || n == 0 || n == colone - 1){
                    printf("#");
                }
                else
                    printf(" ");
            }
        printf("\n");
    }

    return 0;
}