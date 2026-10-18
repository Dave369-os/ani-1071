#include <cstdio>
#include <cmath>

using Fonction = double (*)(double);
double integrale(Fonction f, double a, double b);
double derivee(Fonction f, double x);
double zero(Fonction f, double a, double b);
double f2(double x);

int main(){

    // printf("%f", integrale(sin, 0, 4.14159));
    // printf("%f", derivee(sin, 0));
    printf("%f", zero(f2, 1, 2));

}

double integrale(double (*f)(double), double a, double b){
    double pas = (b - a) / 1000.0, aire = 0.0;
    for (int i = 0; i < 1000; i++) aire += f(a + i * pas) * pas;
    return aire;
}

double derivee(Fonction f, double x){
    double h = 1e-6;
    return (f(x + h) - f(x - h)) / (2 * h);
}

double f2(double x){ return x * x - 2;}
double zero(Fonction f, double a, double b){
while(b - a > 1e-9){
    double m = (a + b) / 2;
    if(f(a) * f(m) <= 0)
        b = m;
    else
        a = m;
    }
    return ( a+ b) / 2;
}