#include <cstdio>
#include <cmath>

void tracerSegment(int x0, int y0, int x1, int y1);

int main(){
    int x0, y0, x1, y1;

    scanf("%d %d %d %d", &x0, &y0, &x1, &y1);
    getchar();
    tracerSegment(x0, y0, x1, y1);

    return 0;
}

void tracerSegment(int x0, int y0, int x1, int y1){

    int dx = abs(x1 - x0);
    int dy = -abs(y1 - y0);
    int sx = (x0 < x1) ? 1 : -1;
    int sy = (y0 < y1) ? 1 : -1;
    int erreur = dx + dy;

    for(int i = 0; ; i++){
        printf("%d %d\n", x0, y0);
        if(x0 == x1 && y0 == y1)
            break;
        int e2 = 2 * erreur;
        if(e2 >= dy){
            erreur += dy;
            x0 += sx;
        }
        if(e2 <= dx){
            erreur += dx;
            y0 += sy;
        }

    }
}