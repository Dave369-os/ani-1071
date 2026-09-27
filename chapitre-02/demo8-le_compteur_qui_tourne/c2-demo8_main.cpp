#include <cstdio>
#include <unistd.h>

int main(){

    int h = 23, m = 58, s = 58;
    for(int i = 0; i < 3; i++){
        printf("%02d : %02d : %02d\n", h, m, s);
        sleep(1);
        int total = h * 3600 + m * 60 + s + 1;
        h = (total / 3600) % 24;
        m = (total / 60) % 60;
        s = total % 60;
    }
    return 0;
}

