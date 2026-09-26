# Rapport

Ceci etait un exercice tres complexe, honnetement j'ai eu besoi de nombreuses explications et je ne sais pas si je serai capable de le refaire dans plusieurs mois sans le revoir. Le fichier source du code permettant d'extraire les 4 composantes d'une couleur puis de l'assombrir.
Faudrait savoir qu'une couleur es representee par R-G-B-A designant les couleur primaires pour les trous premieres lettres et l'opacite pour la lettre A, chaque lettre etant representee sur 8 bits.La decomposer consiste a decaler la composante cible vers la droite grace a '<<' et eliminer le reste par une operation de 'et' logique puis l'utilisation du format %08X pour afficher chaque composante en decimale.
la recomposer consiste a decaler toutes les composantes vers la gauche pour les assembler grace a l'operation de 'ou' logique, la verification est bien faite et affiche si la recomposition est egale a la couleur initiale ou nom.
L'assombrir est un jeu d;enfant quand la premiere etape est comprise, i suffit de diviser chaque composante de l'etape 1 par 2 et de les composer comme a l'etape 2. Au final, l'etape 3 est dependante de la comprehension des deux premieres etapes.

le code ayant servit ici est:
```
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
```
Le resultat obtenu apres compilation et execution avec clang++ est:
```
$ clang++ c2-exo16_main.cpp -o main

user@DESKTOP-DNO62US MINGW64 /d/anime/z/ani-1071/ani-1071/chapitre-02/exo16-une_couleur_dans_un_entier (main)
$ ./main
Les couleurs extraites sont: 
R : 42
G : 127
B : 204
A : 255

La couleur recomposition est: 2A7FCCFF
La recomposition et la couleur initilale sont identiques.

La couleur assombrie est 153F66FF : 356476671
```
Apres execution, on voit que le programme affiche "La recomposition et la couleur initilale sont identiques." verifiant l'exactitude de la recomposition, notre code est donc exact.