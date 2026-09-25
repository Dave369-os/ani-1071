#include <cstdio>

int main(){

    int i = 0; //compteur pour le nombre de tour(s)
    int n1, n2; //n pour 'nombre;
    printf("Entrez le premier nombre\n");
    scanf("%d", &n1);
    printf("Entrez le deuxieme nombre\n");
    scanf("%d", &n2);
    if(n1 != n2){
            while(n1 != n2){
                if(n1 > n2)
                    n1 = n1 - n2;
                else
                    n2 = n2 - n1;
                i = i + 1;
            }
            printf("le PGCD de vos deux nombres est %d\n", n1);
            printf("il a fallu %d tours pour le trouver\n", i);

        }
    else{
        printf("le PGCD de vos nombres est %d\n", n1);
        printf("il a fallu %d tour pour le trouver\n", i);
    }

    return 0;
}