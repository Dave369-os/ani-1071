#include <cstdio>

int main(){

    int n1, n2; // n pour nombre
    printf("Entrez le premier entier\n");
    scanf("%d", &n1);
    printf("Entrez le deuxieme entier\n");
    scanf("%d", &n2);

    //Affichage du plus petit
    printf("%d est le plus petit des deux\n", (n1 < n2)? n1 : n2);

    //Affichage du plus grand
    printf("%d est le plus grand des deux\n", (n1 > n2)? n1 : n2);

    //Affichage du nombre d'objet(s)
    printf("%d %s pour le premier cas\n", n1, (n1 == 1)? "objet" : "objets");
    printf("%d %s pour le deuxieme cas\n", n2, (n2 > 1)? "objets" : "objet");

    return 0;
}