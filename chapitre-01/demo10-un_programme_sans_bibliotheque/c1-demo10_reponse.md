## Rapport:
les fichiers concernant l'experience ont bien ete compiles.  
le programme n'ayant pas de bibliotheque apres compilation fais apparaitre un executable d'une taille 37Ko et n'affiche rien apres son execution.  
le programme qui affiche "bonjour" apres compilation laisse un fichie .exe de taille 71Ko qui s'execute correctement.  L'executable du programme affichant 'bonjour' est donc plus lourd que celui du programme n'ayant aucune bibliotheque.
Il est donc a remarquer que des elements ont ete ajoutes dans le deuxieme programme ce qui explique l'ecart de tailles. Ce qui a donc ete ajoute est le code contenu dans les bibliotheque intervenant dans son code source, ce dernier ayant ete ajoute par le linker lors de l'etape d'edition de liens.  

 * apres execution de la commande "ls -l", on obtient(sont affiches avec les fichiers qui ont ete utilise pour le test):
 ```
-rw-r--r-- 1 user 197121    74 Sep 19 22:24 bonjour.cpp
-rwxr-xr-x 1 user 197121 72563 Sep 19 22:26 bonjour.exe*
-rw-r--r-- 1 user 197121   642 Sep 19 22:44 c1-demo10_reponse.md
-rwxr-xr-x 1 user 197121 37666 Sep 19 22:20 main.exe*
-rw-r--r-- 1 user 197121    29 Sep 19 22:20 test.cpp
Apres l'execution du premier programme suite a la compilation($ clang++ test.cpp -o main) on a:  
$ ./bonjour
bonjour  

avec la commande 'echo' on a:
$ echo $?
0

Apres l'execution du deuxieme programme apres la compilation ($ clang++ bonjour.cpp -o bonjour) on a:
$ ./main.exe

rien ne s'affiche, mais apres l'utilisation de la commande 'echo', on a:
$ echo $?
7
```
