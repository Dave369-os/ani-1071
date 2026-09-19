## Rapport:

Dans le cadre de cette operation nous avons utiliser le compilateur clang++(il a bien fallu s'assoir pour la supprise de l'exercice), il en est ressorti des ecrits s'ettendant sur un total de 2033 lignes qui est visiblement tres superieur aux six(06) lignes saisie dans le code du fichier source.
Cet ecart est due a l'ecriture total du code contenu lors de la preprocession contenu dans le fichier "cstdio"(qui semble etre plutot enorme"). Il est alors a retenir que la ligne "#include <cstdio>" n'est qu'une simplification d'un code predefini de C++ contenant un grand nombre de ligne.  

ce code lors de l'execution precedante est(juste le debut et la fin):  

# 1 "bonjour.cpp"
# 1 "<built-in>" 1
# 1 "<built-in>" 3
# 494 "<built-in>" 3
# 1 "<command line>" 1
# 1 "<built-in>" 2
# 1 "bonjour.cpp" 2
# 1 "C:/msys64/ucrt64/include/c++/16.2.0/cstdio" 1 3
# 46 "C:/msys64/ucrt64/include/c++/16.2.0/cstdio" 3
# 1 "C:/msys64/ucrt64/include/c++/16.2.0/x86_64-w64-mingw32/bits/c++config.h" 1 3
# 37 "C:/msys64/ucrt64/include/c++/16.2.0/x86_64-w64-mingw32/bits/c++config.h" 3
int main(){
    printf("Hello world");
    return 0;
}

## Reponses aux remarques de l'enseignant:
Des excuses sont presentees a l'encadrant du fait de la presence de multiples fautes lors de la redactions de rapports aussi bien de vocabulaire que de grammaire... Des efforst s'imposeront pour ne plus commettre les memes erreurs. De plus, les caracteres speciaux correspondant a la redaction en langue francaise sont absents du fait de l'utilisation d'un clavier anglais dont la modification pourrait boulverser notre facon de travailler.
