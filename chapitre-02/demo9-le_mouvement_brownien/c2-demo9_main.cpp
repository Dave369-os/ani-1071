#include <cstdio>
#include <ctime>
#include <cstdlib>

int main(){

    const int N = 21;
    char grille[N][N];

    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            grille[i][j] = ' ';
        }
    }

    int x = N/2, y = N/2;
    grille[x][y] = '.';

    srand(time(NULL));

    for(int i = 0; i < 200; i++){
        switch ((rand() % 4)) {
        case 0: x--;
            break;
        case 1: x++;
            break;
        case 3: y--;
            break;
        case 4:
            y++;
        }
        grille[x][y] = '.';
    }

    int distinct = 1; //initialier a 1 car on compte aussi la position d'arriver
    for(int i = 1; i <= N; i++){
        for(int j =1; j<= N; j++){
            if(grille[i][j] == '.'){
                distinct++;
            }
        }
    }
    grille[x][y] = '#';
    printf("Cases distinctes : %d", distinct);

      for(int i = 1; i <= N; i++){
        for(int j =1; j<= N; j++){
            printf("%c", grille[i][j]);
        }
        printf("\n");
    }

    return 0;
    
}