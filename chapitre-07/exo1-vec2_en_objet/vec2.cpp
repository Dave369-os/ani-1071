#include <cstdio>
#include <cmath>

struct Vec2{
    double x, y;

    Vec2() : x(0.0), y(0.0){}
    Vec2(double x_, double y_) : x(x_), y(y_){}
    double length() const {return sqrt(x * x + y * y);}
    double dot(Vec2 b) const {return x * b.x + y * b.y;}
    Vec2 normalized() const {if (length() != 0.0) return {x / fabs(x), y / fabs(y)}; return{0, 0};}

    void normalize(){
    double len = length();
    if(len != 0.0) x = x / len, y = y /len;
    }

    Vec2 &operator+=(const Vec2 &b){x += b.x; y += b.y; return *this;}
    Vec2 &operator-=(const Vec2 &b){x -= b.x; y -= b.y; return *this;}
    Vec2 &operator*=(double s){x *= s; y *= s; return *this;}

    double &operator[](int i){return i == 0 ? x : y;}
    double operator[](int i) const{return i == 0 ? x : y;}
    //

    Vec2 operator-() const{return Vec2(-x, -y);}
    
};


Vec2 operator+(const Vec2& a, const Vec2& b) { return {a.x + b.x, a.y + b.y}; }
Vec2 operator-(const Vec2& a, const Vec2& b) { return {a.x - b.x, a.y - b.y}; }
Vec2 operator/(const Vec2& a, double s) {return {a.x / s, a.y / s};}
bool operator==(const Vec2& a, const Vec2& b){return a.x == b.x && a.y == b.y;}
bool operator!=(const Vec2& a, const Vec2& b){return a.x != b.x && a.y != b.y;}

Vec2 operator*(const Vec2& v, double s){return Vec2(v.x * s, v.y * s);}
Vec2 operator*(double s, const Vec2& v){return Vec2(v.x * s, v.y * s);}


int main(){

    Vec2 v0, v1{3, 9};
    printf("Vec2         -> (%f, %f)\n", v0.x, v0.y);
    printf("Vec2(3, 4)   -> (%f, %f)\n", v1.x, v1.y);
    printf("length()     -> %f\n", v1.length());
    printf("dot((1, 0))  -> %f\n", v1.dot(Vec2(1, 0)));

    Vec2 vn = v1.normalized();
    printf("normalized() -> (%f, %f) len = %f\n", vn.x, vn.y, vn.length());

    v1.normalize();
    printf("normalize()  -> (%f, %f)\n", v1.x, v1.y);

    Vec2 a(1, 2), b(3, 4);
    printf("a + b        -> (%f, %f)\n", (a+b).x, (a+b).y);
    printf("a - b        -> (%f, %f)\n", (a-b).x, (a-b).y);
    printf("-a           -> (%f, %f)\n", (-a).x, (-a).y);
    printf("a/2          -> (%f, %f)\n", (a/2.0).x, (a/2.0).y);
    printf("a==b         -> %d\n", a == b);
    printf("a!=b         -> %d\n", a != b);
    printf("a*2          -> (%f, %f)\n", (2.0*a).x, (2.0*a).y);
    a += b;
    printf("a+=b         -> (%f, %f)\n", a.x, a.y);
    a -= b;
    printf("a-=b         -> (%f, %f)\n", a.x, a.y);
    a *= 2;
    printf("a*=b         -> (%f, %f)\n", a.x, a.y);
    a[0] = 5.0; a[1] = 6.0;
    printf("a[0]=5,a[1]=6-> (%f, %f)\n", a[0], a[1]);


    //Chute

    Vec2 p(0.0, 10.0);
    Vec2 v(3.0, 0.0);
    Vec2 g(0.0, -9.81);
    double dt = 0.1;
    double t = 0.0;
    printf("\nchutte\n");
    printf("t : %f, p = (%f, %f), v = (%f, %f)\n", t, p.x, p.y, v.x, v.y);
    while(p.y >= 0){
        v += g * dt;
        p += v * dt;
        t += dt;
    printf("t : %f, p = (%f, %f), v = (%f, %f)\n", t, p.x, p.y, v.x, v.y);
    }

    //sol
    double p0y = 10.0, v0y = 0, gy = -9.81;
    double t_sol = sqrt(-2.0 * p0y / gy);
    printf("\nAu sol t = %f\n", t_sol);

    return 0;
}