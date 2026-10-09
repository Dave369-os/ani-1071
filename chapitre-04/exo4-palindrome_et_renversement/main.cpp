#include <cstdio>

bool estPalindrome(const char s[]);
void renverserTexte(char s[]);

int main(){

    char s[201];

    fgets(s, 201, stdin);
    for(int i = 0; s[i] != '\0'; i++){
        if(s[i] == '\n'){
            s[i] = '\0';
            break;
        }
    }

    if(estPalindrome(s) == true)
        printf("oui\n");
    else
        printf("non\n");

    renverserTexte(s);

    return 0;
}

void renverserTexte(char s[]){


    int compteur = 0;
    for(int i = 0; s[i] != '\0' ; i++){
        compteur++;    
    }

    if(compteur != 1){
        for(int i = 0, j = compteur - 1; i < j; i++, j--){
            char temoin;
            temoin = s[i] ;
            s[i] = s[j];
            s[j] = temoin;
        }
    }

    for(int i = 0; i < compteur; i++){
        printf("%c", s[i]);
    }

}

bool estPalindrome(const char s[]){

    bool egaux = true;
    int compteur = 0;
    for(int i = 0; s[i] != '\0' ; i++){
        compteur++;    
    }

    if(compteur != 1){
        for(int i = 0, j = compteur - 1; i < j; i++, j--){
            if(s[i] != s[j]){
                egaux = false;
                break;
            }
        }
        return egaux;
    }
    else
        return egaux;
}