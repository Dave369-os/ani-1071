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
            while(x > 1){
                x = n /10;
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
    int n;
        while(scanf("%d", &n) == 1){
            printf("%d\n", nombreDeChiffres(n));
        }

    return 0;
}