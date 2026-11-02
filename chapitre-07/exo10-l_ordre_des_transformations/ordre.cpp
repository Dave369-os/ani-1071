#include <cstdio>
#include <cmath>

const double PI = 3.14159;

struct Vec2{
    double x, y;
};

Vec2 operator+(Vec2 a, Vec2 b)     { return {a.x + b.x, a.y + b.y}; }
Vec2 operator-(Vec2 a, Vec2 b)     { return {a.x - b.x, a.y - b.y}; }

Vec2 rotate(Vec2 a, double angle){
    double c = cos(angle), s = sin(angle);
    return {a.x * c - a.y * s, a.x * s + a.y * c};
}
double dot(Vec2 a, Vec2 b){return a.x * b.x + a.y * b.y;}
double norm(Vec2 a){return sqrt(dot(a, a));}

struct Transform{
    Vec2   position {0.0, 0.0};
    double rotation  = 0.0;          // en radians
    Vec2   echelle  {1.0, 1.0};

    Vec2 appliquer_ERT(Vec2 local) const{
        Vec2 p = {local.x * echelle.x, local.y * echelle.y};   // 1. échelle
        p = rotate(p, rotation);                               // 2. rotation
        return p + position;                                   // 3. translation
    }
    Vec2 appliquer_RET(Vec2 local) const{
        Vec2 p = rotate(local, rotation);   
        p = {p.x * echelle.x, p.y * echelle.y};                              
        return p + position;                                   
    }
    Vec2 appliquer_ETR(Vec2 local) const{
        Vec2 p = {local.x * echelle.x, local.y * echelle.y};                                    
        p = p + position;   
        return rotate(p, rotation);
    }
};


const int H = 20, L = 40;
char image[H][L];

void effacer(char c = ' '){
    for (int y = 0; y < H; y++)
        for (int x = 0; x < L; x++)
            image[y][x] = c;
}

void point(int x, int y, char c = '#'){
    if (x < 0 || x >= L || y < 0 || y >= H) return;   // hors de la grille : rien
    image[y][x] = c;
}

void afficher(){
    for (int y = 0; y < H; y++){
        for (int x = 0; x < L; x++) printf("%c", image[y][x]);
        printf("\n");
    }
}

double lerp(double a, double b, double t){
    return a + (b - a) * t;
}

void segment(double x0, double y0, double x1, double y1, char c = '#'){
    int pas = 60;
    for (int i = 0; i <= pas; i++){
        double t = i / (double) pas;
        point((int) (lerp(x0, x1, t) + 0.5), (int) (lerp(y0, y1, t) + 0.5), c);
    }
}

int wx(double x){ return (int)(x * 2.0 + 0.5);}
int wy(double y){ return (H - 1) - (int)(y * 1 + 0.5);}

void mesurer(Vec2 pts[4]){
    for(int i =0; i < 4; i++){
        Vec2 a = pts[i];
        Vec2 b = pts[(i + 1) % 4];
        printf("cote %d : %.3f\n", i, norm(b - a));
    }
    Vec2 v1 = pts[1] - pts[0];
    Vec2 v2 = pts[3] - pts[0];
    double ang = acos(dot(v1, v2) / (norm(v1) * norm(v2)) * 180 / PI);
    printf("angle en 0 : %.1f deg\n", ang);
}

int main(){
    Vec2 carre[4] = {{-0.5, -0.5}, {0.5, -0.5}, {0.5, 0.5}, {-0.5, 0.5}};

    Transform transforme = {{10, 5}, PI / 4, {2, 1}};

    Vec2 p1[4], p2[4], p3[4];
    for(int i = 0; i < 4; i++){
        p1[i] = transforme.appliquer_ERT(carre[i]);
        p2[i] = transforme.appliquer_RET(carre[i]);
        p3[i] = transforme.appliquer_ETR(carre[i]);
    }

    printf("Points : \n");
    printf("echelle -> rotation -> translation : \n");
    for(int i = 0; i < 4; i++) printf("(%.3f, %.3f)\n", p1[i].x, p1[i].y);
    printf("rotaion -> echelle -> translation : \n");
    for(int i = 0; i < 4; i++) printf("(%.3f, %.3f)\n", p2[i].x, p2[i].y);
    printf("echelle -> translation -> rotation : \n");
    for(int i = 0; i < 4; i++) printf("(%.3f, %.3f)\n", p3[i].x, p3[i].y);

    printf("\nCotes et angles : \n");
    printf("ERT : "); mesurer(p1);
    printf("RET : "); mesurer(p2);
    printf("ETR : "); mesurer(p3);

    printf("\nDessins (echelle dessin : 2 col = 1 unit X, 1 ligne = 1 unit Y, y retourne) : \n");
    effacer(' ');
    for(int i = 0; i < 4; i++) segment(wx(p1[i].x), wy(p1[i].y), wx(p1[(i + 1) % 4].x), wy(p1[(i + 1) % 4].y), '#');
    printf("ERT : \n"); afficher();

    effacer(' ');
    for(int i = 0; i < 4; i++) segment(wx(p3[i].x), wy(p3[i].y), wx(p3[(i + 1) % 4].x), wy(p3[(i + 1) % 4].y), '#');
    printf("ETR : \n"); afficher();

    effacer(' ');
    


    return 0;
}