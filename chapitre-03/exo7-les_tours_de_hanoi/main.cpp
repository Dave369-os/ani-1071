#include<cstdio>

long long compteur = 0;
void hanoi(int n, char depart, char arrivee, char intermediaire){
    if(n <= 0)
        return;
    hanoi(n - 1, depart, intermediaire, arrivee);
    printf("%C>%C\n", depart, arrivee);
    compteur++;
    hanoi(n - 1, intermediaire, arrivee, depart);
}

int main(){
    int i;
    scanf("%d", &i);
    hanoi(i, 'A', 'C', 'B');
    printf("%lld\n", compteur);

    return 0;
}