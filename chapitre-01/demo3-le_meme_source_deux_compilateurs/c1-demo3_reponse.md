## Rapport:
La compilation du meme programme avec deux compilateurs differents a donner lieu a deux executables de tailles differentes, le premier fichier(test_1.exe) etant le resultat de la compilation a l'aide de clang++ occupe une taille de 72Ko sur le disque local hote du present test alors que le fichier resultant de la compilation a l'aide de g++ occupe un espace de 79Ko sur ce meme disque. A noter que les deux executables produisent le meme resultat.  
Il est alors a conclure que le langage garantit le resultat voulu mais pas l'espace a utiliser pour mener a bien ce resultat.
- execution avec 'g++':
```
$ g++ test.cpp -o test_2
```
- execution avec clang++
```
$ clang++ test.cpp -o test
```
- commande permettant de visionner les fichier
```
$ ls -l
total 154
-rw-r--r-- 1 user 197121   565 Sep 20 10:30 c1-demo3_reponse.md
-rw-r--r-- 1 user 197121    78 Sep 20 10:30 test.cpp
-rwxr-xr-x 1 user 197121 72563 Sep 20 10:30 test_1.exe*
-rwxr-xr-x 1 user 197121 79653 Sep 20 10:30 test_2.exe*
```
La sortie des deux compilateur est:
- premier cas(clang++):
```
user@DESKTOP-DNO62US MINGW64 /d/anime/z/ani-1071/ani-1071/chapitre-01/demo3-le_meme_source_deux_compilateurs (main)
$ ./test1.exe
Hello World
user@DESKTOP-DNO62US MINGW64 /d/anime/z/ani-1071/ani-1071/chapitre-01/demo3-le_meme_source_deux_compilateurs (main)
$ echo $?
0
```
- Deuxieme cas(g++)
```
user@DESKTOP-DNO62US MINGW64 /d/anime/z/ani-1071/ani-1071/chapitre-01/demo3-le_meme_source_deux_compilateurs (main)
$ ./test2.exe
Hello World
user@DESKTOP-DNO62US MINGW64 /d/anime/z/ani-1071/ani-1071/chapitre-01/demo3-le_meme_source_deux_compilateurs (main)
$ echo $?
0
```