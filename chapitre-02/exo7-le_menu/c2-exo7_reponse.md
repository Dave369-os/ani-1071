# Rapport
```
Le fichier source du code permettant d'afficher un menu a quatre option est fourni avec le present rapport. Ce code a suscite 27 lignes de code pour avoir un resultat clair et sans erreur. Seulement, apres avoir retire un 'break' pour le 'case 2', et selectionne le choix '2', le programme execute le 'case 2' et affiche 'Chargement...'. Comme il n'y a plus de 'break', il execute les instruction du case suivant(case 3) et affiche 'Ouverture des options...' sans meme verifie de condition avant de rencontrer le break du case 3 et de s'arreter.
```

* Le resultat obtenu apres compilation, execution du programme en choisissant l'option '2' pour le programme sans erreur donne:
```
$ ./main.exe
CHOISISSEZ UNE OPTION

1- Nouvelle partie
2-charger
3-option
4-quitter
2
Chargement...
```

* Le resultat obtenu apres compilation, execution du programme en choisissant l'option '2' pour le programme avec suppression du break au case 2 donne:
```
user@DESKTOP-DNO62US MINGW64 /d/anime/z/ani-1071/ani-1071/chapitre-02/exo7-le_menu (main)
$ clang++ main.cpp -o main

user@DESKTOP-DNO62US MINGW64 /d/anime/z/ani-1071/ani-1071/chapitre-02/exo7-le_menu (main)
$ ./main.exe
CHOISISSEZ UNE OPTION

1- Nouvelle partie
2-charger
3-option
4-quitter
2
Chargement...
Ouverture des options...
```

* Le code source sans erreur de ce programme est:
```
#include <cstdio>

int choix;
int main(){
    printf("CHOISISSEZ UNE OPTION\n\n");
    printf("1- Nouvelle partie\n2-charger\n3-option\n4-quitter\n");
    scanf("%d", &choix);
    switch (choix){
        case 1: 
            printf("Lancement d'une nouvelle partie...\n");
            break;
         case 2:
            printf("Chargement...\n")   ;
            break;
        case 3:
            printf("Ouverture des options...\n");
            break;
        case 4:
            printf("Fermeture du programme...\n");
            break;
        default:
            printf("Choix invalide\n");
            break;
    }
    
    return 0;
}
```
* Entrons en profondeur(suppression de tous les break):
Si on supprime tous les break puis que l'on compile et aue l'on execute le programme, apres la selection d'une option, le programme affichera les choix a partir du nombre de la selection jusqu'au dernier. Passons a l'illustration en choisissant la premiere option.
```
$ clang++ main.cpp -o main

user@DESKTOP-DNO62US MINGW64 /d/anime/z/ani-1071/ani-1071/chapitre-02/exo7-le_menu (main)
$ ./main
CHOISISSEZ UNE OPTION

1- Nouvelle partie
2-charger
3-option
4-quitter
1
Lancement d'une nouvelle partie...
Chargement...
Ouverture des options...
Fermeture du programme...
Choix invalide
```
Le code ayant servi est le meme memem avec les break en commentaire pour ne pas oublier leur emplacement.
```
#include <cstdio>

int choix;
int main(){
    printf("CHOISISSEZ UNE OPTION\n\n");
    printf("1- Nouvelle partie\n2-charger\n3-option\n4-quitter\n");
    scanf("%d", &choix);
    switch (choix){
        case 1: 
            printf("Lancement d'une nouvelle partie...\n");
            //break;
         case 2:
            printf("Chargement...\n")   ;
            //break;
        case 3:
            printf("Ouverture des options...\n");
            //break;
        case 4:
            printf("Fermeture du programme...\n");
            //break;
        default:
            printf("Choix invalide\n");
            //break;
    }
    
    return 0;
}
```
