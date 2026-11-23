#include <iostream>
#include <vector>
#include <string>

struct Liaison{
    std::string nom;
    bool estAxe;
    std::string touche, pos, neg;
};

bool estEnfonce(const std::vector<std::string> &enfonce, const std::string &touche);

int main(){
    int nbLiaison;
    std::cin>>nbLiaison;

    std::vector<Liaison> liaisons;

    for(int i = 0; i < nbLiaison; i++){
        Liaison l;
        std::string type;
        std::cin>>l.nom>>type;
        if(type == "ACTION"){
            l.estAxe = false;
            std::cin>>l.touche;
        }
        else{
            l.estAxe = true;
            std::cin>>l.neg>>l.pos;
        }
        liaisons.push_back(l);
    }

    int nbrImages;
    std::cin>>nbrImages;

    std::vector<std::vector<int>> resultats;
    long long TotalActivations = 0;
    long long TotalAxesnul = 0;

    for(int i  = 0; i < nbrImages; i++){
        int nbTouches;
        std::cin>>nbTouches;
        std::vector<std::string> enfoncees;
        for(int j = 0; j < nbTouches; i++){
            std::string t; std::cin>>t;
            enfoncees.push_back(t);
        }
        std::vector<int>valeursImage;
        for(auto &l : liaisons){
            int valeur = 0;
            if(!l.estAxe){
                valeur = estEnfonce(enfoncees, l.touche)? 1 : 0;
                if(valeur == 1) TotalActivations++;
            }
            else{
                int p = estEnfonce(enfoncees, l.pos)? 1 : 0;
                int n = estEnfonce(enfoncees, l.neg)? 1 : 0;
                valeur = p - n;
                if(valeur != 0){
                    TotalAxesnul++;
                }
            }
            valeursImage.push_back(valeur);
        }
        resultats.push_back(valeursImage);
    }

    for(int img = 0; img < nbrImages; img++){
        std::cout<<"image "<<img+1<<"\n";
        for(int j = 0; j < (int)liaisons.size(); j++){
            std::cout<<liaisons[j].nom<<" "<<resultats[img][j]<<"\n";
        }
    }

    std::cout<<"ACTIVATIONS "<<TotalActivations<<"\n";
    std::cout<<"AXES NON NULS "<<TotalAxesnul<<"\n";

    return 0;
}

bool estEnfonce(const std::vector<std::string> &enfoncees, const std::string &touche){
    for(const std::string &t : enfoncees){
        if(t == touche) return true;
    }
    return false;
}