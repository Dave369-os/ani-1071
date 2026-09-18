## Rapport:
Apres l'execution de la copie en y retirant tous les points virgule, trois messages sont affiches pour signaler trois erreurs, ces messages sont:
 c1-exo9_main.cpp:5:21: error: expected ';' after expression
    5 |     printf("OLEMBE")
      |                     ^
      |                     ;
c1-exo9_main.cpp:6:13: error: expected ';' after return statement
    6 |     return 0
      |             ^
      |             ;
3 errors generated.

Apres la supression de la premiere erreur signalee(ligne 4), on observe apres compilation du fichier source deux messages signalant des erreurs au niveau de deux lignes differentes:
-exo9_main.cpp:5:21: error: expected ';' after expression
    5 |     printf("OLEMBE")
      |                     ^
      |                     ;
c1-exo9_main.cpp:6:13: error: expected ';' after return statement
    6 |     return 0
      |             ^
      |             ;
2 errors generated.