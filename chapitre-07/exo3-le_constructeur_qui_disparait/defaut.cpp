#include <cstdio>

struct P { 
    int a; 
    P(int v) : a(v) {} 
    //P() : a(0) {}
    P() = default;
};

int main(){
    P x;
    P t[10];

    for(int i = 0; i < 10; i++)
        printf("x.a = %d\n",x.a);

    return 0;
}