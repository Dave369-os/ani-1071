#include <cstdio>

int main(){

    unsigned int c = 0x2A7FCCFF;
    
    //Extraction des quatre composantes et impresiion de ces derniers
    unsigned r = (c >> 24) & 0xFF;
    unsigned g = (c >> 16) & 0xFF;
    unsigned b = (c>> 8) & 0xFF;
    unsigned a = c & 0xFF;
    printf("Les couleurs extraites sont: \n");
    printf("R : %u\n", r);
    printf("G : %u\n", g);
    printf("B : %u\n", b);
    printf("A : %u\n\n", a);

    //Recomposition de la lumiere
    unsigned c2 = (r << 24) | (g << 16) | (b << 8) | a;
    printf("La couleur recomposition est: %08X\n", c2);
    if(c == c2)
        printf("La recomposition et la couleur initilale sont identiques.\n\n");
    else
        printf("Les deux couleurs ne sont identiques.\n\n");

    //Assombrissement de la couleur
    unsigned r2 = r / 2;
    unsigned g2 = g / 2;
    unsigned b2 = b / 2;
    unsigned c_sombre = (r2 << 24) | (g2 << 16) | (b2 << 8) | a;
    printf("La couleur assombrie est %08X : %u\n", c_sombre, c_sombre);

    return 0;
}