#include <cstdio>
#include <cmath>

int pgcd(int a, int b){
        while(b != 0){
            int c = a % b;
            a = b;
            b = c;
        }
        return a;
}

class Fraction{
    int n;
    int d;

    public : 
    Fraction(int num, int den){if(den == 0){ printf("Erreur : denominateur null. mise a 0/1\n"); n = 0; d = 1;return;}
                                if(den < 0){num = -num; den = -den;}
                                n = num / abs(pgcd(num, den));
                                d = den / abs(pgcd(num, den));}
    void afficher() const{printf("%d/%d", n, d);}
    Fraction operator+ (Fraction b){return {n * b.d + b.n * d, d * b.d};}
    Fraction operator- (Fraction b){return {n * b.d - b.n * d, d * b.d};}
    Fraction operator* (Fraction b){return{n * b.n, d * b.d};}
    Fraction operator/ (Fraction b){if(b.n != 0){return{n * b.d, d * b.n};} else printf("Erreur : division par fraction nulle. Mise a 0/1\n"); return{0, 1};}
    bool operator== (Fraction b){return n == b.n && d == b.d;}
};


int main(){
    Fraction a(1, 2);
    Fraction b(1, 3);
    Fraction c = a + b;
    printf(" 1/2 + 1/3 = ");
    c.afficher();printf("\n");


    Fraction d(2, 4);
    printf("2/4 reduit = ");
    d.afficher();printf("\n");

    Fraction s(0, 5);
    printf("0/5 reduit = ");
    s.afficher();printf("\n");


    Fraction e(1, -2);
    printf("1/-2 = ");
    e.afficher();printf("\n");


    Fraction f(1, 2), g(2, 3);
    Fraction h = f - g;
    printf("1/2 - 2/3 = ");
    f.afficher();printf("\n");


    Fraction i = f * g;
    printf("1/2 - 2/3 = ");
    i.afficher();printf("\n");


    Fraction j = f / g;
    printf("1/2 / 2/3 = ");
    j.afficher();printf("\n\n");


    Fraction k(2, 4), l(1, 2);
    printf("2/4 == 1/2 : %s\n", (k == l)? "vrai" : "faux");
    
    Fraction m(1, 0);
    printf("1/2 == 1/3 : %s\n\n", (a == m)? "vrai" : "faux");

    Fraction nulle(1, 0);
    printf("Fraction(1, 0) = ");
    nulle.afficher();printf("\n");


    Fraction zero(0, 1), o = a / zero;
    printf("1/2 / 0/1 = ");
    o.afficher();
    printf("\n");

    return 0;
}