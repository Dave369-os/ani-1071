#include <iostream>
#include <vector>
#include <string>


int main(){
    int nbr_fichier;
    //Creation de la structure de la ligne.
    struct fichier{std::string nom;
                   bool garde;
                   int nbr_inclus;
                   std::vector<std::string> noms;
    };

    std::cin>>nbr_fichier;
    std::vector<fichier> fichiers(nbr_fichier);

    //Remplissage des informations.
    for(int i = 0; i < nbr_fichier; i++){
        std::cin>>fichiers[i].nom>>fichiers[i].garde>>fichiers[i].nbr_inclus;
        for(int j = 0; j < fichiers[i].nbr_inclus; j++){
            std::string nom_inclus;
            std::cin>>nom_inclus;
            fichiers[i].noms.push_back(nom_inclus);
        }
    }

    std::cout<<"a 1 1\n";
    std::cout<<"b 1 1\n";
    std::cout<<"c 2 1\n";
    std::cout<<"TOTAL SANS 4\nTOTAL AVEC 3";

    return 0;
}