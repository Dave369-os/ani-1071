#include <cstdio>

void deplier(int i, int largeur, int& x, int& y);
void minMax(const int t[], int n, int& min, int& max);
bool diviser(int a, int b, int& quotient, int& reste);

int main(){
    // int i = 55, largeur = 40, x, y;
    // deplier(i, largeur, x, y);
    // printf("x : %d, y : %d\n", x, y);

    // int n = 5, min, max, t[5] = {12, 7, 19, 3, 15};
    // minMax(t, n, min, max);
    // printf("min : %d, max : %d\n", min, max);

    int quotient = 1, reste = 1, a = 30, b = 0;
    printf("APRES : quotient = %d, reste = %d\n", quotient, reste);
    bool verification = diviser(a, b, quotient, reste);
    //printf("verification : %d, quotient : %d, reste : %d", verification, quotient, reste);
    printf("APRES : quotient = %d, reste = %d, valeur retounee = %d", quotient, reste, verification);


    return 0;
}

void deplier(int i, int largeur, int& x, int& y){
    x = i % largeur;
    y = i / largeur;
}

void minMax(const int t[], int n, int& min, int& max){
    min = t[0];
    max = t[0];
    for(int i = 0; i < n; i++){
        if(t[i] > max)
            max = t[i];
        if(t[i] < min)
            min = t[i];
    }
}

bool diviser(int a, int b, int& quotient, int& reste){
    if(b != 0){
        quotient = a / b;
        reste = a % b;
        return true;
    }
    else
        return false;
}