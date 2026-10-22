#include <cstdio>
#include <cmath>

struct Vec2
{
    double x;
    double y;
};
Vec2 add(Vec2 a, Vec2 b);
Vec2 sub(Vec2 a, Vec2 b);
Vec2 scale(Vec2 a, double k);

double dot(Vec2 a, Vec2 b);
double length(Vec2 a);
Vec2 normalize(Vec2 a);
Vec2 lerp(Vec2 a, Vec2 b, double t);
Vec2 perp(Vec2 a);
Vec2 rotate(Vec2 a, double angle);
Vec2 reflect(Vec2 v, Vec2 n);
double radians(double degres);

int main(){

    // printf("%.17g\n", length({3, 4}));
    // printf("%.17g\n", dot({1, 0}, {0, 1}));
    printf("{%.11f, %.11f}\n", rotate({1, 0}, radians(90)).x, rotate({1, 0}, radians(90)).y);
    // printf("{%.17g, %.17g}\n", reflect({1, -1}, {0, 1}).x, reflect({1, -1}, {0, 1}).y);

    // printf("{%.17g, %.17g}", perp({1, 0}).x, perp({1, 0}).y);

    return 0;
}

Vec2 add(Vec2 a, Vec2 b){
    return {a.x + b.x, a.y + b.y};
    }

Vec2 sub(Vec2 a, Vec2 b){
    return {a.x - b.x, a.y - b.y};
    }

Vec2 scale(Vec2 a, double k){
    return {a.x * k, a.y * k};
    }


double dot(Vec2 a, Vec2 b){
    return a.x * b.x + a.y * b.y;
    }

double length(Vec2 a){
    return sqrt(dot(a, a));
    }

Vec2 normalize(Vec2 a){
    double norme = length(a);
    if(norme != 0)
        return {a.x / norme, a.y / norme};
    return {0, 0};
}

Vec2 lerp(Vec2 a, Vec2 b, double t){
    return add(a, scale(sub(a, b), t));
}

Vec2 perp(Vec2 a){
    return {-a.y, a.x};
}

Vec2 rotate(Vec2 a, double angle){
    return {a.x * cos(angle) - a.y * sin(angle), a.x * sin(angle) + a.y * cos(angle)};
}

Vec2 reflect(Vec2 v, Vec2 n){
    return sub(v, scale(n, dot(v, n) * 2));
}

double radians(double degres){
    return degres * 3.141592 / 180.0;
}