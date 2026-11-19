#include <iostream>
#include <string>
#include  <vector>

struct Projet{
    std::string nom;
    std::vector<std::string> dependances;
    bool construit = false;
};

int main(){
    int n;
    std::cin>>n;
    std::vector<Projet> projets(n);

    for(int i = 0; i < n; i++){
        std::cin>>projets[i].nom;
        int nb;
        std::cin>>nb;
        projets[i].dependances.resize(nb);
        for(int j = 0; j < nb; j++){
            std::cin>>projets[i].dependances[j];
        }
    }

    std::vector<std::string> ordre;
    int construits = 0;

    while(construits < n){
        int choix = -1;

        for(int i = 0; i < n; i++){
            if(projets[i].construit) continue;

            bool pret = true;
            for(int j = 0; j < (int)projets[i].dependances.size(); j++){
                std::string dep = projets[i].dependances[j];

                bool trouve = false;
                bool estconstruit = false;
                for(int k = 0; k < n; k++){
                    if(projets[k].nom == dep){
                        trouve = true;
                        estconstruit = projets[k].construit;
                        break;
                    }
                }

                if(trouve &&  !estconstruit){
                    pret = false;
                    break;
                }
            }

            if(pret){
                choix = i;
                break;
            }
        }

        if(choix == -1){
            std::cout<<"CYCLE\n";
            std::cout<<"PROJETS 0\n";
            return 0;
        }

        projets[choix].construit = true;
        ordre.push_back(projets[choix].nom);
        construits++;
    }

    for(int i = 0; i < (int)ordre.size(); i++){
        std::cout<<ordre[i]<<"\n";
    }

    std::cout<<"PROJETS "<<ordre.size()<<"\n";
    
    return 0;
}