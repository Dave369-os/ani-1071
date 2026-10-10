#include <cstdio>

void transposer(const int source[], int lignes, int colonnes, int destination[]);

int main(){

    int lignes, colonnes;
    int source[1000], destination[1000];

    scanf("%d %d", &lignes, &colonnes);

    int total = lignes * colonnes;
    for(int i = 0; i < total; i++){
        scanf("%d", &source[i]);
        
    }

    transposer(source, lignes, colonnes, destination);

    int lignes_dest = colonnes;
    int colonnes_dest = lignes;

    for(int y = 0; y < lignes_dest; y++){
        for(int x = 0; x < colonnes_dest; x++){
            int idx = y * colonnes_dest + x;
            if(x > 0)
                printf(" ");
            printf("%d", destination[idx]);
            
        }
        if(y < lignes_dest - 1)
            printf("\n");
    }

    return 0;
}

void transposer(const int source[], int lignes, int colonnes, int destination[]){

    for(int y = 0; y < lignes; y++){
        for(int x = 0; x< colonnes; x++){
            int indice_source = y * colonnes + x;
            int indice_dest = x * lignes + y;
            destination[indice_dest] = source[indice_source];

        }
    }
}
