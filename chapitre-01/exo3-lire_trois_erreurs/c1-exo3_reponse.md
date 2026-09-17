##Premier cas(omission du point virgule):

-Erreur ontenue: c1-exo3_main.cpp:4:28: error: expected ';' after expression
    4 |     printf("Hello World\n")
      |                            ^
      |                            ;
1 error generated.

-ligne signalee: ligne 4

-ligne fautive: ligne 4

-etape de la chaine: compilation


##Deuxieme cas(Printf au lieu de print):

-Erreur ontenue:c1-exo3_main.cpp:4:5: error: use of undeclared identifier 'Printf'; did you mean 'printf'?
    4 |     Printf("Hello World\n");
      |     ^~~~~~
      |     printf
C:/msys64/ucrt64/include/stdio.h:300:5: note: 'printf' declared here
  300 | int printf (const char *__format, ...)
      |     ^
1 error generated

-ligne signalee: Ligne 4

-ligne fautive: Ligne 4

-etape de la chaine: compilation


##Troisieme cas(retirer la ligne #include <cstdio>):

-Erreur ontenue:c1-exo3_main.cpp:4:5: error: use of undeclared identifier 'printf'
    4 |     printf("Hello World\n");
      |     ^~~~~~
1 error generated.

-ligne signalee: Ligne 4

-ligne fautive: Ligne 1

-etape de la chaine: compilation