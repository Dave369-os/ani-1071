# Rapport
Le fichier source du code permettant de mettre sur pied une suite de collatz est fourni avec le present rapport, ce code aere fait 20 lignes de code et se compile sans erreur. Un test a ete fait avec le nombre 27 dont le resultat est porte dans les lignes qui suivent;
Apres compilation par clang++ et execution avec le nombre test, on a:
```
user@DESKTOP-DNO62US MINGW64 /d/anime/z/ani-1071/ani-1071/chapitre-02/exo10-la_suite_de_collatz (main)
$ clang++ c2-exo10_main.cpp -o main

user@DESKTOP-DNO62US MINGW64 /d/anime/z/ani-1071/ani-1071/chapitre-02/exo10-la_suite_de_collatz (main)
$ ./main
entrez un entier superieur a 1 
27
82      41      124     62      31      94      47      142     71      214     107     322     161     484     242     121       364     182     91      274     137     412     206     103     310     155     466     233     700     350     175       526     263     790     395     1186    593     1780    890     445     1336    668     334     167     502     251       754     377     1132    566     283     850     425     1276    638     319     958     479     1438    719     2158      1079    3238    1619    4858    2429    7288    3644    1822    911     2734    1367    4102    2051    6154    3077      9232    4616    2308    1154    577     1732    866     433     1300    650     325     976     488     244     122       61      184     92      46      23      70      35      106     53      160     80      40      20      10      516       8       4       2       1
111 etapes ont ete necessaires pour arriver a 1.
```
* Le code utilise pour obtenir ce resultat est:
```
#include <cstdio>

int main(){
    int n;
    int i = 0;
    printf("entrez un entier superieur a 1 \n");
    scanf("%d", &n);
    while(n != 1){
        if ( n % 2 == 0){
            n = n/2;
        }
        else
            n = 3*n + 1;   
        i = i + 1;
        printf("%d\t", n);
    }
    printf("\n%d etapes ont ete necessaires pour arriver a 1.", i);

    return 0;
}
```

### Note pour l'enseigant:
```
Monsieur, ceci est ma deuxieme tentative de depot de cet exercice, la premiere ne m'a pas conduit a une note favorable car un fichier de rapport n'a pas ete fourni en plus du fichier source du programme. Ceci est du a unr lecture peut-etre incomprise de ma part, il est ecrit dans l'ennonce de l'exercice:
```

```
Ce qui sera vérifié
Votre dépôt et son dossierani-1071 / chapitre-02/exo10-la_suite_de_collatz
Les fichiers, au nom exactc2-exo10_main.cpp
Le style du code — signalé, sans coûter de points
```

```
la est juste mentionne le fichier source a depose et pas le fichier rapport, il est vrai que quand juste un fichier de rapport est demande, je le depose avec le code source pour confirmer la veracite de mon etude, alors j'aimerais savoir si a partir de maintenant quand juste un fichier source est demande je suis dans l'obligation de l'accompagner d'un rapport
Merci d'avance.
```