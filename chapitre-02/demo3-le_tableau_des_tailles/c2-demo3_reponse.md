# Rapport
Le fichier source du code permettant de donner les tailles de differents types de donnees est fourni avec le present rapport.
une premiere execution sans type 'void' donne:
```
$ clang++ c2-demo3_main.cpp -o main

user@DESKTOP-DNO62US MINGW64 /d/anime/z/ani-1071/ani-1071/chapitre-02/demo3-le_tableau_des_tailles (main)
$ ./main
bool : 1 octets         char : 1 octets         unsigned char : 1 octets                short : 2 octets
int : 4 octets          long : 4 octets         long long : 8 octets                    unsigned int : 4 octets
float : 4 octets        double : 8 octets       long double : 16 octets
```

Cependant, une compilation avec la fonction void donne lieu a l'erreur que voici:
```
$ clang++ c2-demo3_main.cpp -o main
c2-demo3_main.cpp:16:35: error: invalid application of 'sizeof' to an incomplete type 'void'
   16 |     printf("void : %zu octets\n", sizeof(void));
      |                                   ^     ~~~~~~
1 error generated.
```
Ce que cette erreur est que 'void' n'est pas un type possedant une memoire possedant une taille car ne stocke aucune valeur. Le type parmi les douze qui est reputer changer esy le type long.Un programme qui compte sur sa taille produit un fichier binaire incompatible ce qui comrrompt la lecture. Un type de n octets peut contenir 2e(8n) valeur, car chaque octet est egal a 8 bits.

* Verification
le plus petit des douze est le type bool(1 octet = 8 bits)
On a: nombres de valeurs = 2e8 = 256 valeurs possible.
Theoriquement, le type bool peut contenir 256 valeurs mais il en utilise que 2 dans la pratique(true et false).