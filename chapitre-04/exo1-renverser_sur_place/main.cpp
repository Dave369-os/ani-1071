#include <cstdio>

void renverser(int t[], int &n){
    scanf("%d", &n);

    if(n == 0){
        printf("AUCUN\n");
        return;
    }
    if(n < 0 || n > 1000){
        while(n < 0 || n > 1000){
            printf("Aucun\n");
            scanf("%d", &n);
   }
    }
    int c;
    while((c = getchar()) != '\n' && c != EOF);

    char line[100000];
    fgets(line, 100, stdin);
    int pas = 0;

    for(int i= 0; i < n; i++){
        int lus;
        sscanf(line + pas, "%d %n", &t[i], &lus);
        pas = pas + lus;
      }
    
    for( int i = 0; i < n / 2; i++){
        int objet = t[i];
        t[i] = t[n - 1 - i];
        t[n - 1 - i] = objet;
    }

    for(int i = 0; i < n; i++){
        printf("%d\n", t[i]);
    }

}

int main(){
    int t[1000];
    int n = 0;
    
    renverser(t, n);

    return 0;
}

