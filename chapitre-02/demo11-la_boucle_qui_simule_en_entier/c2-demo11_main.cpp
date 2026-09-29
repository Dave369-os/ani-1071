#include <cstdio>

int main(){

    int y  = 10000;
    int v  = 0;
    int g  = -9810; 
    int dt = 100;

    for (int tour = 0; y > 0; tour++)
    {
        v += g * dt / 10000;
        y += v * dt / 1000;
        printf("t = %d ms   y = %d mm\n", tour, y);
    }

    return 0;
}