#include <cstdio>
#include "aire.h"
#include <cmath>

double aireRectangle(double longueur, double largeur){
    return longueur * largeur;
}

double aireDisque(double rayon){
    return rayon * rayon * M_PI;
}

double aireTriangle(double base, double hauteur){
    return (base / 2)  * hauteur;
}