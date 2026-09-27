#include <cstdio>

int main(){

    double y  = 100.0;   // hauteur, en mètres
    double v  = 0.0;    // vitesse, en m/s (vers le haut)
    double g  = -9.81;  // gravité
    double dt = 0.01;    // un dixième de s

    int rebonds = 0;

    for (int tour = 0; ; tour++)
    {
        v += g * dt;
        y += v * dt;

        if(y <= 0.0){
            y = 0.0;
            if(-v < 0.1)
                break;
            v = -v * 0.8;
            rebonds++;

            double hmax = (v * v) / (2.0 * 9.81);
            printf("Rebond %d : vitesse = %.2f m/s, hauteur max = %.2f m\n", rebonds, v, hmax);

        }
    }
    printf("Nombre total de rebonds: %d", rebonds);

    return 0;
}