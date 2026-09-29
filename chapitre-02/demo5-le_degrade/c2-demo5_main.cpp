#include <cstdio>

int main(){

    const char* caracts = " .:-=+*#@";

    for (int ligne = 0; ligne < 4; ligne++){
        for(int x = 0; x < 60; x++){
            int i = x * 9 / 60;
            printf("%c", caracts[i]);
        }
        printf("\n");
    }

    return 0;
}