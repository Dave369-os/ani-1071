#include <cstdio>

void recursive(int profondeur){
    int gros[1000];
    gros[0] = 43;

    printf("%d\n", profondeur);
    recursive(profondeur + 1);
    fflush(stdout);
}

int main(){
    recursive(1);
}