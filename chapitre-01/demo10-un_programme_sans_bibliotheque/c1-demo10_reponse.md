## Rapport:
les fichiers concernant l'experience ont bien ete compiles.  
le programme n'ayant pas de bibliotheque apres compilation fais apparaitre un executable d'une taille 37Ko et affiche "7" apres son execution.  
le programme qui affiche "bonjour" apres compilation laisse un fichie .exe de taille 71Ko qui s'execute correctement.  
Il est donc a remarquer que des elements ont ete ajoutes dans le deuxieme programme ce qui explique l'ecart de tailles. Ce qui a donc ete ajoute est le code contenu dans les bibliotheque intervenant dans son code source, ce dernier ayant ete ajoute par le linker lors de l'etape d'edition de liens. 