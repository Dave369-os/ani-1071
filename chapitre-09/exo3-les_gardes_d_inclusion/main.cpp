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
    std::vector<long long> cntSans(nbr_fichier, 0), cntAvec(nbr_fichier, 0);
    std::vector<bool> dejaVu(nbr_fichier, false);

    //Sans garde
    std::vector<int> pile;
    for(auto &s : fichiers[0].noms){
        for(int i = 0; i < nbr_fichier; i++) if(fichiers[i].nom == s) pile.push_back(i);
    }
    while(!pile.empty()){
        int cur = pile.back(); pile.pop_back();
        cntSans[cur]++;
        for(auto &s : fichiers[cur].noms){
            for(int i = 0; i < nbr_fichier; i++) if(fichiers[i].nom == s) pile.push_back(i);
        }
    }

    //Avec garde
    pile.clear();
    for(auto &s : fichiers[0].noms){
        for(int i = 0; i < nbr_fichier; i++) if(fichiers[i].nom == s) pile.push_back(i);
    }
    while(!pile.empty()){
        int cur = pile.back(); pile.pop_back();
        if(fichiers[cur].garde && dejaVu[cur]) continue;
        cntAvec[cur]++;
        if(fichiers[cur].garde) dejaVu[cur] = true;
        for(auto &s : fichiers[cur].noms){
            for(int i = 0; i < nbr_fichier; i++) if(fichiers[i].nom == s) pile.push_back(i);
        }
    }

    long long total_sans = 0, total_avec = 0;

    for(int i = 1; i < nbr_fichier; i++){
        std::cout<<fichiers[i].nom<<" "<<cntSans[i]<<" "<<cntAvec[i]<<"\n";
        total_sans += cntSans[i];
        total_avec += cntAvec[i];
    }

    std::cout<<"TOTAL SANS "<<total_sans<<"\n";
    std::cout<<"TOTAL AVEC "<<total_avec<<"\n";
   

    return 0;
}