#include <iostream>
#include <string>
#include <vector>

struct cible{
    std::string nom;
    int date;
    int nbre_dependance;
    std::vector<std::string> Noms_dependance; 
    bool recontruire = 0;
};

int main(){
    int k;
    std::cin>>k;
    std::vector<cible> Cibles(k);

    //Remplissage...
    for(int i = 0; i < k; i++){
        std::cin>>Cibles[i].nom>>Cibles[i].date>>Cibles[i].nbre_dependance;
        Cibles[i].Noms_dependance.resize(Cibles[i].nbre_dependance);
        for(int j = 0; j < Cibles[i].nbre_dependance; j++){
            std::cin>>Cibles[i].Noms_dependance[j];
        }
    }

    int A_reconstruire = 0, A_jour = 0;
    for(int i = 0; i < k; i++){
        bool besoin;
        if(Cibles[i].date == -1){
            besoin = true;
        }

        for(int j = 0; j < Cibles[i].nbre_dependance && !besoin; j++){
            for(int s = 0; s < k; s++){
                if(Cibles[i].Noms_dependance[j] == Cibles[s].nom && Cibles[s].date > Cibles[i].date){
                    besoin = true;
                    break;
                }
            }

        }

        for(int j = 0; j < Cibles[i].nbre_dependance && !besoin; j++){
            for(int s = 0; s < k; s++){
                if(Cibles[i].Noms_dependance[j] == Cibles[s].nom && Cibles[s].recontruire == 1){
                    besoin = true;
                    break;
                }
            }
        }

        Cibles[i].recontruire = besoin;
        if(besoin){
            std::cout<<Cibles[i].nom<<" A RECONSTRUIRE\n";
            A_reconstruire++;
        }
        else{
            std::cout<<Cibles[i].nom<<" A JOUR\n";
            A_jour++;
        }
    }

    std::cout<<"A RECONSTRUIRE "<<A_reconstruire<<"\n";
    std::cout<<"A JOUR "<<A_jour<<"\n";

    return 0;
}