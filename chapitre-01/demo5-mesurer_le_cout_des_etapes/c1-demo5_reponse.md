## Rapport:
# Premier cas(fichier a une en-tete)
```
-Avec l'option '-E', on a en utilisant 'time':
$ time clang++ -E test.cpp

real    0m3.258s
user    0m0.000s
sys     0m0.092s
Le temps pris pour l'execution complete de cette commande est de 3.258s

-L'utilisation de la commade 'time' avec '-c' donne:
$ time clang++ -c test.cpp

real    0m0.731s
user    0m0.091s
sys     0m0.091s

-La compilation complete donne:
$ time clang++ test.cpp -o test

real    0m1.074s
user    0m0.030s
sys     0m0.139s

```
# Premier cas(fichier a une en-tete)
```
- Avec '-E'

$ time clang++ -E test2.cpp
real    0m51.215s
user    0m0.092s
sys     0m0.060s

- Avec '-c'
$ time clang++ -c test2.cpp

real    0m1.801s
user    0m0.015s
sys     0m0.107s

- Compilation complete
$ time clang++ test2.cpp -o test2

real    0m1.919s
user    0m0.030s
sys     0m0.107s
```

## Tableau recapitulatif
```
-------------|-------------------------------------|--------------------------------------|
             |    temps avec fichier a 1 en-tete   |    temps avec fichier a 10 en-tetes  |
-------------|-------------------------------------|--------------------------------------|
clang++ -E   |         0m3.258s                    |           0m51.215s                  |
-------------|-------------------------------------|--------------------------------------|
clang++ -c   |         0m0.731s                    |           0m1.801s                   |
-------------|-------------------------------------|--------------------------------------|
compilation  |         0m1.074s                    |           0m1.919s                   |
complete     |                                     |                                      |
-------------|-------------------------------------|--------------------------------------|
```

De ce fait, l'etape qui domine est celle avec '-E'(preprocession).