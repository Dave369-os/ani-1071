# Rapport

Le fichier sorce du code ayant permi de faire un schema de la chutte du projectile est fourni avec le fichier du present rapport.

Le resultat apres compilation et execution est:
```
$ clang++ c2-demo7_main.cpp -o main

user@DESKTOP-DNO62US MINGW64 /d/anime/z/ani-1071/ani-1071/chapitre-02/demo7-la_courbe_de_la_balle (main)
$ ./main
* *  *                                  
        *  *                            
             *                          
                *                       
                                        
                   *                    
                      *                 
                                        
                         *              
                                        
                           *            
                                        
                              *         
                                        
                                 *      
                                        
                                    *   
                                        
                                        
                                        
Temps total de chute : 1.400000 s
```

Le code ayant servi a obtenir ce resultat est:
```
#include <cstdio>

int main()
{
    double y0  = 10.0; 
    double v  = 0.0;   
    double g  = -9.81; 
    double dt = 0.1;    
    
    const int COLS = 40;
    const int LIGNES = 20;

    char grille[LIGNES][COLS];
    for(int i = 0; i < LIGNES; i++){
        for(int j = 0; j < COLS; j++){
            grille[i][j] = ' ';
        }
    }

    double y_tmp = y0, v_tmp = 0.0;
    int tours_max = 0;
    while (y_tmp > 0.0){
        v_tmp += g * dt;
        y_tmp += v_tmp * dt;
        tours_max++;
    }
    double t_max = tours_max * dt;

    double y = y0;
    v = 0.0;
    for(int tour = 0; y > 0.0; tour++){
        double t = tour * dt;
        int col = (int)(t / t_max * (COLS -1));
        int lig = (int)((1.0 - y/y0) * (LIGNES - 1));
        if(col >= 0 && col < COLS && lig >= 0 && lig < LIGNES){
            grille[lig][col] = '*';
        }
        v += g * dt;
        y += v * dt;
    }
    for(int i = 0; i < LIGNES; i++){
        for(int c = 0; c < COLS; c++){
            printf("%c", grille[i][c]);
        }
        printf("\n");
    }

    printf("Temps total de chute : %f s\n", t_max);
    
    return 0;
}
```