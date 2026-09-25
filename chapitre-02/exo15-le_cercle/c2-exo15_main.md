# Rapport
## Premier volet
Le code permettant de dessiner un cercle a partir du rayon recupere de caracteres est fourni avec le present rapport dans un fichier ".cpp" et fait 17 lignes de code.
Dans ce volet, le code mis sur pied rempli toutes les conditions demandees dans l'ennonce, i se compile et s'execute sans erreur(de semantique et de syntaxe). un test a ete effectue avec l'entier '5' comme rayon du cercle. 
* Apres compilation et execution du programme, on a:
```
$ clang++ c2-exo15_main.cpp -o main

user@DESKTOP-DNO62US MINGW64 /d/anime/z/ani-1071/ani-1071/chapitre-02/exo15-le_cercle (main)
$ ./main
Entrer la longuer du rayon de ce cercle
5
     #     
  #######  
 ######### 
 ######### 
 ######### 
###########
 ######### 
 ######### 
 ######### 
  #######  
     # 
```

* Le code ayant permi d'obtenir ce resultat est:
```
#include <cstdio>

int main(){
    int r;
    printf("Entrer la longuer du rayon de ce cercle\n");
    scanf("%d", &r);
    for(int y = r; y >= -r; y--){
        for(int x = -r; x <= r; x++){
            if(x*x + y*y <= r*r)
                printf("#");
            else
                printf(" ");
        }
        printf("\n");
        
    }
}
```

## Deuxieme volet
Comme demande a l'exercice une correction des applatissement a ete faite en mettant deux caracteres par case, et le resultat avec pour entrer 5 a donne:
```
$ clang++ c2-exo15_main.cpp -o main

user@DESKTOP-DNO62US MINGW64 /d/anime/z/ani-1071/ani-1071/chapitre-02/exo15-le_cercle (main)
$ ./main
Entrer la longuer du rayon de ce cercle
5
          ##          
    ##############    
  ##################  
  ##################  
  ##################  
######################
  ##################  
  ##################  
  ##################  
    ##############    
          ## 
```
Le code ayant servit a l'obtention de ce resultat est:
```
#include <cstdio>

int main(){
    int r;
    printf("Entrer la longuer du rayon de ce cercle\n");
    scanf("%d", &r);
    for(int y = r; y >= -r; y--){
        for(int x = -r; x <= r; x++){
            if(x*x + y*y <= r*r)
                printf("##");
            else
                printf("  ");
        }
        printf("\n");
        
    }
}
```