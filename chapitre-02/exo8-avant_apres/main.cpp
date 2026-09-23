#include <cstdio>
 
int a = 3;
int b = a++ + 1;
int c = ++a * 2;
int t = a--;
int d = t - --a;
int main(){
    printf("%d, %d, %d, %d", a, b, c, d);

    return 0;
}