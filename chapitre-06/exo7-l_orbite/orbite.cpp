#include <cstdio>
#include <cmath>

struct  Vec2
{
    float x, y;
};


void eulerExplicite(Vec2& p, Vec2& v, Vec2 a, double dt);
void eulerSemiImplicite(Vec2& p, Vec2& v, Vec2 a, double dt);
void point(int x, int y, char c);
void effacer(char c);
void afficher();
float norme(Vec2 p);

const int H = 20, L = 40;
char image[H][L];

int main(){
    float dt = 0.2, mu = 100;
    int pas = 10000;
    Vec2 pE = {100, 0};
    Vec2 pS = {100, 0};
    Vec2 vE = {0, 1};
    Vec2 vS = {0, 1};
    //Vec2 a;

    effacer(' ');

    for(int i = 0; i < pas; i++){
        float longueur = norme(pE);
        float longueur2 = norme(pS);
        Vec2 aE = {- mu * pE.x / (longueur * longueur * longueur), - mu * pE.y / (longueur * longueur * longueur)};
        Vec2 aS = {- mu * pS.x / (longueur2 * longueur2 * longueur2), - mu * pS.y / (longueur2 * longueur2 * longueur2)};

        eulerSemiImplicite(pS, vS, aS, dt);
        eulerExplicite(pE, vE, aE, dt);

        if(i % 500 == 0)
            printf("Pas : %d; Distance : %f(explicite), %f(implicite)\n",i, norme(pE), norme(pS));
        int xE = int((pE.x - (-200)) / (200 - (-200)) * L);
        int yE = int((pE.y - (-200)) / (200 - (-200)) * H);
        point(xE, yE, 'E');

        int xS = int((pS.x - (-200)) / (200 - (-200)) * L);
        int yS = int((pS.y - (-200)) / (200 - (-200)) * H);
        point(xS, yS, 'S');
    }

    afficher();

    return 0;
}

void effacer(char c = ' ')
{
    for (int y = 0; y < H; y++)
        for (int x = 0; x < L; x++)
            image[y][x] = c;
}

void point(int x, int y, char c = '#')
{
    if (x < 0 || x >= L || y < 0 || y >= H) return;   // hors de la grille : rien
    image[y][x] = c;
}

void afficher()
{
    for (int y = 0; y < H; y++)
    {
        for (int x = 0; x < L; x++) printf("%c", image[y][x]);
        printf("\n");
    }
}

void eulerExplicite(Vec2& p, Vec2& v, Vec2 a, double dt){
    p.x = p.x + v.x * dt;
    p.y = p.y + v.y * dt;

    v.x = v.x + a.x * dt;
    v.y = v.y + a.y * dt;
}

void eulerSemiImplicite(Vec2& p, Vec2& v, Vec2 a, double dt){
    v.x = v.x + a.x * dt;
    v.y = v.y + a.y * dt;

    p.x = p.x + v.x * dt;
    p.y = p.y + v.y * dt;

}

float norme(Vec2 p){
    return sqrt(p.x * p.x + p.y * p.y);
}