#include <cstdio>
#include <string>

struct Vec2 { double x, y; };

template <typename T>
T maximum(T a, T b) { return (a > b) ? a : b; }

template <typename T>
T minimum(T a, T b) { return (a < b) ? a : b; }

template  <typename T>
void echanger(T &a, T &b){
    T c = a;
    a = b;
    b = c;
}

template  <typename T>
T clamp(T x, T bas, T haut){
    if(x < bas) return bas;
    if(x > haut) return haut;
    return x;
}

template  <typename T>
void trier(T t[], int n){
    for(int i = 0; i < n - 1; i++){
        int min_ind = i;
        for(int j = i + 1; j < n; j++){
            if(t[j] < t[min_ind]) min_ind = j;
        }
        if(min_ind != i) echanger(t[i], t[min_ind]);
    }
}

int main(){
    int a = 3, b = 7;

    printf("maximun : %d\n", maximum(a, b));
    printf("minimum : %d\n", minimum(a, b));
    printf("clamp(5, 3, 7) : %d\n", clamp(5, 3, 7));
    echanger(a, b);
    printf("echange : a = %d, b = %d\n", a, b);

    double x = 3.5, y = 7.2;
    printf("double maximum : %f\n", maximum(x, y));
    printf("double minimum : %f\n", minimum(x, y));
    printf("clamp(7.2, 0.0, 5.0) : %f\n", clamp(7.2, 0.0, 5.0));

    Vec2 u{1, 2}, v{3, 4};
    echanger(u, v);
    printf("Vec2 echanger : u = (%f, %f), v = (%f, %f)\n", u.x, u.y, v.x, v.y);

    std::string mots[5] = {"zebre", "Yaounde", "arbre", "Zoo", "abricot"};
    trier(mots, 5);
    printf("Tri string : ");
    for(int i = 0; i < 5; i++) printf("%s, ", mots[i].c_str());
    printf("\n");

    return 0;
}