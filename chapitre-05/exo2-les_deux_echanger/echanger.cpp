#include <cstdio>

void echanger(int *a, int *b);
void echanger(int &a, int &b);
void echangerDouble(double& a, double& b);
void echangerChar(char& a, char& b);

int main(){

    int x = 1.0, y = 2.0;
    //char a ='A', b = 'B';
    int *a = &x;
    int *b = &y;

    echanger(a, b);
    //echanger(x, y);

    printf("x = %d, y = %d", x, y);
    

    

    return 0;
}

void echanger(int *a, int *b){
    int temoin = *a;
    *a = *b;
    *b = temoin;
}

void echanger(int &a, int &b){
    int temoin = a;
    a = b;
    b = temoin;
}

void echangerDouble(double &a, double &b){
    double temoin = a;
    a = b;
    b = temoin;
}

void echangerChar(char &a, char &b){
    char temoin = a;
    a = b;
    b = temoin;
}