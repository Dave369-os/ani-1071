#include <cstdio>

double vitesse(double v0, double a, double t){
    return a * t + v0;
    }

double position(double x0, double v0, double a, double t){
    return 0.5 * a * t * t + v0 * t + x0;
    }

int main(){
    char line[100];
    double x0, v0, a, t;

    fgets(line, 100, stdin);
    if(sscanf(line, "%lf %lf %lf %lf", &x0, &v0, &a, &t) == 4){
        printf("%.4lf\n", vitesse(v0, a, t));
        printf("%.4lf\n", position(x0, v0, a, t));
    }
    else
        printf("Entrez 4 nombres");

    return 0;
}