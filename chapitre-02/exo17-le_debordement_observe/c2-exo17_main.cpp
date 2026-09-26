#include <cstdio>

int main(){

    int x = 1;
    for(int i = 1; ;i++){
        x <<=  1;
        printf("%d au tour %d\n", x, i);
        if(x != 0)
            continue;
        else
            break;
    }

    return 0;
}