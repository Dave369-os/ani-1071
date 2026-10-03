#include <cstdio>

int nombreDeChiffres(int n);

    int nombreDeChiffres(int n){
        if(-2147483648 < n && n < 0){
            n = -1 * n;
           int chiffre = 0;
            while(n >= 1){
                n = n /10;
                chiffre = chiffre + 1;
            }
            return chiffre;
        }

        else if( n == -2147483648){
            long long x = n;
            x = x * -1;
            int chiffre = 0;
            while(x >= 1){
                x = x /10;
                chiffre = chiffre + 1;
            }
            return chiffre;
            }

        else if (n > 0){
            int chiffre = 0;
            while(n >= 1){
                n = n /10;
                chiffre = chiffre + 1;
            }
            return chiffre;
        }

        else{
            return 1;
        }
    }

int main(){
    int a, n;
    char line[100];
    int pas = 0;
    fgets(line, 100, stdin);

    if(sscanf(line, "%d", &n) == 1){
        while(sscanf(line + pas, "%d %n", &a, &n) == 1){
            printf("%d\n", nombreDeChiffres(a));
                pas = pas + n;
        }
    }
    else
        printf("AUCUN");

    return 0;
}