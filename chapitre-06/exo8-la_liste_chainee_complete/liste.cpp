#include <cstdio>

struct Noeud
{
    int    valeur;
    Noeud *suivant;     // le suivant, ou nullptr
};

Noeud* ajouterEnTete(Noeud* tete, int v);
Noeud* ajouterEnQueue(Noeud* tete, int v);
int compter(const Noeud* n);
bool contient(const Noeud* n, int v);
void afficher(const Noeud* n);
Noeud* retirer(Noeud* tete, int v);
void liberer(Noeud* n);
Noeud* inverser(Noeud* tete);

int vivants = 0;



int main(){
    Noeud *liste = nullptr;
    printf("Vivants debut : %d\n", vivants);

    liste = ajouterEnTete(liste, 3);
    liste = ajouterEnTete(liste, 2);
    liste = ajouterEnTete(liste, 1);
    liste = ajouterEnQueue(liste, 4);
    liste = ajouterEnQueue(liste, 5);
    liste = ajouterEnQueue(liste, 6);

    printf("apres creation : ");
    afficher(liste);
    printf("compter = %d contient 4 = %d contient 99 = %d\n", compter(liste), contient(liste, 4), contient(liste, 99));

    printf("retirer tete 1 : ");
    liste = retirer(liste, 1);
    afficher(liste);

    printf("retirer milieu 4 : ");
    liste = retirer(liste, 1);
    afficher(liste);

    printf("retirer absent 99 : ");
    liste = retirer(liste, 99);
    afficher(liste);

    printf("inverser : ");
    liste = inverser(liste);
    afficher(liste);
    printf("vivants avant liberer : %d\n", vivants);
    liberer(liste);
    liste = nullptr;
    printf("Vivants apres liberer : %d\n", vivants);

    return 0;
}

Noeud* ajouterEnTete(Noeud *tete, int v){
    Noeud *n = new Noeud;
    n -> valeur = v;
    n -> suivant = tete;
    vivants++;
    return n;
}

Noeud* ajouterEnQueue(Noeud *tete, int v){
    Noeud *n = new Noeud;
    n -> valeur = v;
    n-> suivant = nullptr;
    vivants++;
    if(!tete) return n;
    Noeud *cur = tete;
    while(cur -> suivant){
        cur = cur -> suivant;
    }
    cur -> suivant = n;
    return tete;
}

int compter(const Noeud *n){
    int c = 0;
    while(n){
        c++;
        n = n -> suivant;
    }
    return c;
}

bool contient(const Noeud *n, int v){
    while(n){
        if(n -> valeur == v)
            return true;
        n = n -> suivant;
    }
    return false;
}

void afficher(const Noeud *n){
    printf("[");
    while(n){
        printf("%d", n -> valeur);
        if(n -> suivant)
            printf(" -> ");
            n = n -> suivant;
    }
    printf("]\n");
}

Noeud *retirer(Noeud *tete, int v){
    if(!tete)
        return nullptr;
    if(tete -> valeur == v){
        Noeud *nxt = tete -> suivant;
        delete tete;
        vivants--;
        return nxt;
    }
    Noeud *cur = tete;
    while(cur -> suivant && cur -> suivant -> valeur != v){
        cur = cur -> suivant;
    }
    if(cur -> suivant){
        Noeud *del = cur -> suivant;
        cur -> suivant = del -> suivant;
        delete del;
        vivants--;
    }
    return tete;
}

void liberer(Noeud *n){
    while(n){
        Noeud *nxt = n -> suivant;
        delete n;
        vivants--;
        n = nxt;
    }
}

Noeud *inverser(Noeud *tete){
    Noeud *prev = nullptr;
    Noeud *cur = tete;
    while(cur){
        Noeud *nxt = cur -> suivant;
        cur -> suivant = prev;
        prev = cur;
        cur = nxt;
    }
    return prev;
}
