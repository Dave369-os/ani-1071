## Rapport:
Apres compilation du fichier source($ clang++ -S test.cpp -o test), il en est ressorti un nomme "test" sans extension(avec des la saisie de commades au hasard, nous avons vu un fichier nommer "test.s" quand la compilation se faisait sans la commande "-o"). Nous avons pu ressensez:  

- l'etiquette 'main': 	.globl	main                            # -- Begin function main 

- l'appel à 'printf': 	callq	__mingw_printf

- la valeur de retour: 0