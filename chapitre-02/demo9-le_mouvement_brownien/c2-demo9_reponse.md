# Rapport

le fichier source du code permettaant de parcourir la grille de taille 21x21 est fourni avec le present rapport. ce code fait 55 lignes et est structure en plusieurs etapes:
1\) la mise sur pied de la grille vide
2\) le remplissage de la grille par le passage par le poinnt
3\) le ressencement des endroits visites par le point

Le resultat apres compilation et execution donne:
```
$ clang++ c2-demo9_main.cpp -o main

user@DESKTOP-DNO62US MINGW64 /d/anime/z/ani-1071/ani-1071/chapitre-02/demo9-le_mouvement_brownien (main)
$ ./main
Cases distinctes : 99                     
                     
                     
                     
                     
                     
                     
   .....             
  ...  ..        .  .
... .   ..       . ..
.       ..     ..... 
        .   .... ..  
   . .     .....     
   ...  ..... ...    
   . ........   .    
   .   .. ...   .    
....   ..       ..  .
.........        ...#
..     .             
..                  
```