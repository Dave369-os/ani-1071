#include <cstdio>
#include <cstring>

int somme(const int* t, int n);
int maximum(const int* t, int n);
void inverser(int* t, int n);
int longueur(const char* s);

int main(){
    int t[5] = {12, 7, 19, 3, 15};

    // La somme
    printf("La somme est : %d\n\n", somme(t, 5));

    //Le maximun
    printf("le maximum est : %d\n\n", maximum(t, 5));

    //Renversement du tableau
    int c[5] = {1, 2, 3, 4, 5};
    inverser(c, 5);
    for(int i = 0; i < 5; i++)
        printf("%d\t", c[i]);
    printf("\n\n");

    //longueur
    char s[50] = "bonjour";
    printf("longueur touvee par la fonction : %d\nlongueur trouvee par <cstring> : %llu\n", longueur(s), strlen(s));
    
    return 0;
}


int somme(const int *t, int n){
    int somme  = 0;
    for(int i = 0; i< n; i++){
        somme = somme + *(t + i);
    }
    return somme;
}

int maximum(const int* t, int n){
    int max = *t;
    for(int i = 0; i < n; i++){
        if(max < *(t + i))
            max = *(t + i);
    }
    return max;
}

void inverser(int* t, int n){
    for(int i = 0, j = n - 1; i < j; i++, j--){
        int m = *(t + i);
        *(t + i) = *(t + j);
        *(t + j) = m;
    }
}

int longueur(const char* s){
    const char *p = s;
    while(*p != '\0'){
        p++;
    }
    return p - s;
}