#include <cstdio>

int main(){

    double n, i, x;
    int tour = 0;

    printf("Entrez un nomre dont je donnerai la racine\n");
    scanf("%lf", &n);
    x = n;
    do{
        tour += 1;
        i = x;
        x = (x + n/x)/2;
        if((i - x) <= 0.000000001){
            break;
        }
        else
            continue;
    }while(true);
    printf("la racine carree de %f est %f trouvee en %d tour(s)", n, x, tour);

    return 0;
}