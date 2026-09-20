## Rapport:

# Premier cas(code reduit):
```
Apres execution et compilation avec la commande 'time'($ time clang++ test.cpp -o main2), on a:
real    0m0.498s
user    0m0.045s
sys     0m0.092s
(compile pendant 0.498s)
 Apres execution avec la meme commande et 'O2($ time clang++ -O2 test.cpp -o main2)', on a:
real    0m0.532s
user    0m0.015s
sys     0m0.092s
(compile pendant 0.532s)

Les deux executables qui en resulte ont la meme taille(71Ko).
```
# Deuxiem cas(code a un millio d'additions):
```
Apres execution et compilation avec la commande 'time'($ time clang++ test.cpp -o main1), on a:
real    0m0.728s
user    0m0.045s
sys     0m0.061s
(compile pendant 0.728s)

 Apres execution avec la meme commande et 'O2($ time clang++ -O2 test.cpp -o main2)', on a:
real    0m0.478s
user    0m0.060s
sys     0m0.061s
(compile pendant 0.478)

Les deux executables ont une taille de 37Ko.

 En conclusion, l'option 'O2' change le temps de compilation mais pas la taille des executables.