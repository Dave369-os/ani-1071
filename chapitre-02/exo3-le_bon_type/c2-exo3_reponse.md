# Reponse a l'ennonce

### Un age
Le type de base le plus adapte est le type unsigned char(qui va de 0 a 255), l'experance de vie est bien geree par ce type. Une choses que refuse ce type sont des operations franctionnaires.

### Le nombre d'habitants sur terre
Le type de base le mieux adapte pour le nombre d'haitants sur terre est le type unsigned int a 64 octets(qui va de 0 a 2^64). Il est le plus adapte car sa valeur maxest supperieure au nombre d'habitants sur terre, alors qu'avec du 32 octets, la valeur maximale ne serai pas superieur au nombre d'habitants sur terre. De plus, le nombre d'habitants est toujour posistif. Des operations fractionnaires sont egalements prohibees ici.

### La temperature en degre
Le type de base adequat ici est le type float ou double, car une temperature peur etre signe et contenir des decimales, exeactement ce que ces types proposent. La multiplication entre temperatures n'est pas conseillee ici.

### Caractere saisi au clavier
Le type a utiliser pour un caractere saisi au clavier est char(allant de 0 a 255).

### le fait qu'une porte soit ouverte
Le type a utiliser pour cette action est le type bool, encode sur 1 bit mais qui ne propose que deux valeurs possibles: oui ou non. Les additions, les soustractions, les divisions et les multiplications ne sont pas autorisees ici.

###  le nombre de pixels d'une image de 4000 × 3000
Pour ce cas, il serait convenable d'utiliser un type unsigned int encode sur 32 bits(qui va de 0 a 2^32 - 1) car un int 16 aurait des valeurs pas assez grandes pour gerer tous les ecrans avec de grands nombres de pixel. La manipulation de nombres negatifs n'est pas permie ici.

### un solde bancaire en francs CFA
le type int encode sur 64 bits est plus adequat, les variables de type float sont deconseilees car ne sont jamais parfaitement representees comme le dis si bien le cours. Une peration de type modulo ne peut pas se faire ici.