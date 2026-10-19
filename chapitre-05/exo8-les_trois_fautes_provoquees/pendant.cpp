#include <cstdio>

int main(){

    int n = 5;
    int *t = new int[n];
    t[0] = 90;
    delete [] t;
    printf("%d", t[0]);
}