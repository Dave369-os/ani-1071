# Rapport 
le fichier du code permettant d'ecrire une boucle qui part de int x = 1 et double x à chaque tour, en affichant x et le numéro du tour est fourni avec le present rapport. Ce code fait 16 lignes et se compile et s'execute sans erreur.

## Premier volet: avec " *= "
### le cas "int x = 1
Le code ayant mene a ce resultat est:

```
#include <cstdio>

int main(){

    int x = 1;
    for(int i = 1; ;i++){
        x *= 2;
        printf("%d au tour %d\n", x, i);
        if(x != 0)
            continue;
        else
            break;
    }

    return 0;
}
```
Apres compilation et execution de celui-ci on a:servit pour ce resultat est:
```
$ clang++ c2-exo17_main.cpp -o main

user@DESKTOP-DNO62US MINGW64 /d/anime/z/ani-1071/ani-1071/chapitre-02/exo17-le_debordement_observe (main)
$ ./main
2 au tour 1
4 au tour 2
8 au tour 3
16 au tour 4
32 au tour 5
64 au tour 6
128 au tour 7
256 au tour 8
512 au tour 9
1024 au tour 10
2048 au tour 11
4096 au tour 12
8192 au tour 13
16384 au tour 14
32768 au tour 15
65536 au tour 16
131072 au tour 17
262144 au tour 18
524288 au tour 19
1048576 au tour 20
2097152 au tour 21
4194304 au tour 22
8388608 au tour 23
16777216 au tour 24
33554432 au tour 25
67108864 au tour 26
134217728 au tour 27
268435456 au tour 28
536870912 au tour 29
1073741824 au tour 30
-2147483648 au tour 31
0 au tour 32
```
Ici, x devient negatif au tour 31 et nul au tour 32.Au tour 30, x atteint sa valeur maximale en tant qu'objet de type int, en decimal comme en binaire. il est ensuite multiplie par 2, ainsi, le bit 30 monte en position 31 qui est le bit de signe, ce qui le rend negatif. Vu que le chiffe 1 est en position 31, il est represente comme tel en decimal, ce qui le rend a la fois 2147483648, et negatif, donc -2147483648(ce phenomene est appele debordement signe). A tour 32, i est encore multiplie par 2, ce qui decale 1 vers la gauche, cependant, x etant represente sur 32 bits, ce 1 ne sera pas dans sa representation ce qui le rend totalement nul. 

### le cas "long long x = 1"
* code:
```
#include <cstdio>

int main(){

    long long x = 1;
    for(int i = 1; ;i++){
        x *= 2;
        printf("%lld au tour %d\n", x, i);
        if(x != 0)
            continue;
        else
            break;
    }

    return 0;
}
```
* Resultat
```
$ clang++ c2-exo17_main.cpp -o main

user@DESKTOP-DNO62US MINGW64 /d/anime/z/ani-1071/ani-1071/chapitre-02/exo17-le_debordement_observe (main)
$ ./main
2 au tour 1
4 au tour 2
8 au tour 3
16 au tour 4
32 au tour 5
64 au tour 6
128 au tour 7
256 au tour 8
512 au tour 9
1024 au tour 10
2048 au tour 11
4096 au tour 12
8192 au tour 13
16384 au tour 14
32768 au tour 15
65536 au tour 16
131072 au tour 17
262144 au tour 18
524288 au tour 19
1048576 au tour 20
2097152 au tour 21
4194304 au tour 22
8388608 au tour 23
16777216 au tour 24
33554432 au tour 25
67108864 au tour 26
134217728 au tour 27
268435456 au tour 28
536870912 au tour 29
1073741824 au tour 30
2147483648 au tour 31
4294967296 au tour 32
8589934592 au tour 33
17179869184 au tour 34
34359738368 au tour 35
68719476736 au tour 36
137438953472 au tour 37
274877906944 au tour 38
549755813888 au tour 39
1099511627776 au tour 40
2199023255552 au tour 41
4398046511104 au tour 42
8796093022208 au tour 43
17592186044416 au tour 44
35184372088832 au tour 45
70368744177664 au tour 46
140737488355328 au tour 47
281474976710656 au tour 48
562949953421312 au tour 49
1125899906842624 au tour 50
2251799813685248 au tour 51
4503599627370496 au tour 52
9007199254740992 au tour 53
18014398509481984 au tour 54
36028797018963968 au tour 55
72057594037927936 au tour 56
144115188075855872 au tour 57
288230376151711744 au tour 58
576460752303423488 au tour 59
1152921504606846976 au tour 60
2305843009213693952 au tour 61
4611686018427387904 au tour 62
-9223372036854775808 au tour 63
0 au tour 64
```
### Le cas "unsugned x = 1"
il suffit de remplacer "int x = 0" par " unsigned int i = 0" et "%d" par "%u", je le dis pour eviter que le rapport soit long pour rien.
* Resultat
```
 clang++ c2-exo17_main.cpp -o main

user@DESKTOP-DNO62US MINGW64 /d/anime/z/ani-1071/ani-1071/chapitre-02/exo17-le_debordement_observe (main)
$ ./main
2 au tour 1
4 au tour 2
8 au tour 3
16 au tour 4
32 au tour 5
64 au tour 6
128 au tour 7
256 au tour 8
512 au tour 9
1024 au tour 10
2048 au tour 11
4096 au tour 12
8192 au tour 13
16384 au tour 14
32768 au tour 15
65536 au tour 16
131072 au tour 17
262144 au tour 18
524288 au tour 19
1048576 au tour 20
2097152 au tour 21
4194304 au tour 22
8388608 au tour 23
16777216 au tour 24
33554432 au tour 25
67108864 au tour 26
134217728 au tour 27
268435456 au tour 28
536870912 au tour 29
1073741824 au tour 30
2147483648 au tour 31
0 au tour 32
```

## Deuxieme volet: avec " <<= "
### Le cas int i

* resultat
```
$ clang++ c2-exo17_main.cpp -o main

user@DESKTOP-DNO62US MINGW64 /d/anime/z/ani-1071/ani-1071/chapitre-02/exo17-le_debordement_observe (main)
$ ./main
2 au tour 1
4 au tour 2
8 au tour 3
16 au tour 4
32 au tour 5
64 au tour 6
128 au tour 7
256 au tour 8
512 au tour 9
1024 au tour 10
2048 au tour 11
4096 au tour 12
8192 au tour 13
16384 au tour 14
32768 au tour 15
65536 au tour 16
131072 au tour 17
262144 au tour 18
524288 au tour 19
1048576 au tour 20
2097152 au tour 21
4194304 au tour 22
8388608 au tour 23
16777216 au tour 24
33554432 au tour 25
67108864 au tour 26
134217728 au tour 27
268435456 au tour 28
536870912 au tour 29
1073741824 au tour 30
-2147483648 au tour 31
0 au tour 32
```
### le cas long long int
* resultat:
```
$ clang++ c2-exo17_main.cpp -o main

user@DESKTOP-DNO62US MINGW64 /d/anime/z/ani-1071/ani-1071/chapitre-02/exo17-le_debordement_observe (main)
$ ./main
2 au tour 1
4 au tour 2
8 au tour 3
16 au tour 4
32 au tour 5
64 au tour 6
128 au tour 7
256 au tour 8
512 au tour 9
1024 au tour 10
2048 au tour 11
4096 au tour 12
8192 au tour 13
16384 au tour 14
32768 au tour 15
65536 au tour 16
131072 au tour 17
262144 au tour 18
524288 au tour 19
1048576 au tour 20
2097152 au tour 21
4194304 au tour 22
8388608 au tour 23
16777216 au tour 24
33554432 au tour 25
67108864 au tour 26
134217728 au tour 27
268435456 au tour 28
536870912 au tour 29
1073741824 au tour 30
2147483648 au tour 31
4294967296 au tour 32
8589934592 au tour 33
17179869184 au tour 34
34359738368 au tour 35
68719476736 au tour 36
137438953472 au tour 37
274877906944 au tour 38
549755813888 au tour 39
1099511627776 au tour 40
2199023255552 au tour 41
4398046511104 au tour 42
8796093022208 au tour 43
17592186044416 au tour 44
35184372088832 au tour 45
70368744177664 au tour 46
140737488355328 au tour 47
281474976710656 au tour 48
562949953421312 au tour 49
1125899906842624 au tour 50
2251799813685248 au tour 51
4503599627370496 au tour 52
9007199254740992 au tour 53
18014398509481984 au tour 54
36028797018963968 au tour 55
72057594037927936 au tour 56
144115188075855872 au tour 57
288230376151711744 au tour 58
576460752303423488 au tour 59
1152921504606846976 au tour 60
2305843009213693952 au tour 61
4611686018427387904 au tour 62
-9223372036854775808 au tour 63
0 au tour 64
```
### le cas unsigned int
resultat:
```
$ clang++ c2-exo17_main.cpp -o main

user@DESKTOP-DNO62US MINGW64 /d/anime/z/ani-1071/ani-1071/chapitre-02/exo17-le_debordement_observe (main)
$ ./main
2 au tour 1
4 au tour 2
8 au tour 3
16 au tour 4
32 au tour 5
64 au tour 6
128 au tour 7
256 au tour 8
512 au tour 9
1024 au tour 10
2048 au tour 11
4096 au tour 12
8192 au tour 13
16384 au tour 14
32768 au tour 15
65536 au tour 16
131072 au tour 17
262144 au tour 18
524288 au tour 19
1048576 au tour 20
2097152 au tour 21
4194304 au tour 22
8388608 au tour 23
16777216 au tour 24
33554432 au tour 25
67108864 au tour 26
134217728 au tour 27
268435456 au tour 28
536870912 au tour 29
1073741824 au tour 30
2147483648 au tour 31
0 au tour 32
```