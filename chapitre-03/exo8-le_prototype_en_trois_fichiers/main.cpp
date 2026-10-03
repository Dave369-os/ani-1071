#include <cstdio>
#include "aire.h"
#include "aire.h"

int main(){
    double longueur, hauteur, rayon;
    char line [100];
    fgets(line, 100, stdin);
    if(sscanf(line, "%lf %lf %lf", &longueur, &hauteur, &rayon) == 3){
        printf("%.4f\n", aireRectangle(longueur, hauteur));
        printf("%.4f\n", aireDisque(rayon));
        printf("%.4f\n", aireTriangle(longueur, hauteur));
    }

    return 0;
}