#include <cstdio>
#include <cstdlib>
#include <ctime>

void triRapide(int t[], int bas, int haut);
void triselection(int t[], int n);
long long compteurSel = 0, compteurRap = 0;

int main(){
    // srand(time(0));
    // int t[4] = {100, 1000, 10000, 100000};

    // for(int i = 0; i < 4; i++){
    //     int n = t[i];
    //     int *tab1 = new int[n];
    //     int *tab2 = new int[n];

    //     for(int j = 0; j < n; j++)
    //         tab1[j] = rand();
    //     for(int j = 0; j < n; j++)
    //         tab2[j] = tab1[j];

    //     compteurRap = 0; triRapide(tab1, 0, n - 1);
    //     compteurSel = 0; triselection(tab2, n);

    //     printf("%d Tri Rapide : %lld Tri par selection : %lld\n", n, compteurRap, compteurSel);

    //     delete[] tab1;
    //     delete[] tab2;

    //}

    /* Tableau deja trie*/
    int n = 5000;
    int *t = new int[5000];
    for(int i = 0; i < n; i++){
        t[i] = i;
    }
    compteurRap = 0;
    triRapide(t, 0, n - 1);
    printf("%lld\n", compteurRap);
    delete[] t;
    

    return 0;
}


void triRapide(int t[], int bas, int haut){
    if(haut - bas < 1)
        return;
    int mil = bas + (haut - bas) / 2;
    int tmp = t[mil]; t[mil] = t[haut]; t[haut] = tmp;
    int i = bas;
    for(int j = bas; j < haut; j++){
        compteurRap++;
        if(t[j] < t[haut]){
            int temoin = t[i];
            t[i] = t[j];
            t[j] = temoin;
            i++;
            }
        }
    int temoin = t[i];
    t[i] = t[haut];
    t[haut] = temoin;

    triRapide(t, bas, i - 1);
    triRapide(t, i + 1, haut);
}

void triselection(int t[], int n){
    for(int i = 0; i < n - 1; i++){
        int min = i;
        for(int j = i + 1; j < n; j++){
            compteurSel++;
            if(t[j] < t[min])
                min = j;
        }
        int temoin = t[i]; 
        t[i] = t[min]; 
        t[min] = temoin;
    }
}