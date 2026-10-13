#include <cstdio>

char tuile(const char carte[], int largeur, int x, int y);
int compter(const char carte[], int largeur, int hauteur, char quoi);

int main(){

    FILE* f = fopen("carte.txt", "r");

    int largeur, hauteur;
    fscanf(f, "%d %d", &largeur, &hauteur);

    char carte[1000];

    for(int y = 0; y < hauteur; y++){
        char line[1000];
        fscanf(f, "%s", line);
        for(int x = 0; x < largeur; x++){
            int index = y * largeur + x;
            carte[index] = line[x];
        }
    }
    fclose(f);

    for(int y = 0; y < hauteur; y++){
        for(int x =0; x < largeur; x++){
            printf("%c", tuile(carte, largeur, x, y));
        }
        printf("\n");
    }

    printf(". %d\n", compter(carte, largeur, hauteur, '.'));
    printf("# %d\n", compter(carte, largeur, hauteur, '#'));
    printf("~ %d\n", compter(carte, largeur, hauteur, '~'));

    printf("%c\n", tuile(carte, largeur, 3, 2));
    
    return 0;
}

char tuile(const char carte[], int largeur, int x, int y){

    return carte[y * largeur + x];
}


int compter(const char carte[], int largeur, int hauteur, char quoi){

    int compteur = 0;

    for(int i = 0; i < largeur *hauteur; i++)
        if(carte[i] == quoi)
            compteur++;
    
    return compteur;
}