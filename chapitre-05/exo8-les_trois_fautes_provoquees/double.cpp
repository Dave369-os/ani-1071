#include <cstdio>

int main(){

    int *t = new int;
    delete [] t;
    delete [] t;
    
    return 0;
}
