#include <cstdio>
#include <cmath>

double scalaire(const double* a, const double* b, int n);
double norme(const double* v, int n);
void normaliser(double* v, int n);
bool voit(const double* garde, const double* direction, const double* joueur);

int main(){
    double garde[2] = {0, 0};
    double direction[2] = {1, 0};
    //joueur 1
    double devant[2] = {5, 0};
    printf("%d\n", voit(garde, direction, devant));
    //joueur 2
    double cote[2] = {0, 5};
    printf("%d\n", voit(garde, direction, cote));

    //joueur 3
    double derriere[2] = {-3, 0};
    printf("%d\n", voit(garde, direction, derriere));

    //bord
    double angle_dedans = 29 * M_PI / 180, angle_dehors = 31 * M_PI / 180;

    double dedans[2] = {5 * cos(angle_dedans), 5 * sin(angle_dedans)};
    double dehors[2] = {5 * cos(angle_dehors), 5 * sin(angle_dehors)};

    printf("dedans : %d\ndehors : %d", voit(garde, direction, dedans), voit(garde, direction, dehors));


    return 0;
}


double scalaire(const double* a, const double* b, int n){
    double somme = 0;
    for(int i = 0; i < n; i++){
        double produit = a[i] * b[i];
        somme = somme + produit;
    }

    return somme;
}

double norme(const double* v, int n){
    return sqrt(scalaire(v, v, n));
}

void normaliser(double* v, int n){
    double p = norme(v, n);
    if(n == 0) return;
    for(int i = 0; i < n; i++){
        v[i] = v[i] / p;
    }
}

bool voit(const double* garde, const double* direction, const double* joueur){
    double v[2];
    v[0] = joueur[0] - garde[0];
    v[1] = joueur[1] - garde[1];

    normaliser(v, 2);
    double produit_scalaire = scalaire(v, direction, 2);

    double cosinus = cos((30 * M_PI / 180));

    return produit_scalaire > cosinus;
}