#include <cstdio>

int main()
{
    double y  = 100.0;   // hauteur, en mètres
    double v  = 0.0;    // vitesse, en m/s (vers le haut)
    double g  = -9.81;  // gravité
    double dt = 0.01;    // un dixième de seconde par tour

    for (int tour = 0; y > 0.0; tour++)
    {
        v += g * dt;
        y += v * dt;
        printf("t = %.1f s   y = %.2f m\n", tour * dt, y);
    }
    return 0;
}