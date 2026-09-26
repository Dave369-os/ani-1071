#include <cstdio>
#include <cmath>

int main(){

bool premier = true;
    for(int i = 2; i < 100; i++){
        for(int n = 2; n <= sqrt(i); n++){
            if(i % n == 0){
                premier = false;
                break;
            }
        }
        if(premier == true){
            printf("%d\n", i);
        }
        premier = true;
    }

    return 0;
}