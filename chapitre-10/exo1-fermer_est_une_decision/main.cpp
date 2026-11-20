#include <iostream>
#include <vector>

// bool test(std::string event){
//     if(event == "MODIF") return 1;
//     if(event == "SAUVE") return 1;
// }


int main(){
    int k;
    std::cin>>k;

    std::vector<std::string> events(k);
    for(int i = 0; i < k; i++){
        std::cin>>events[i];
    }

    int demandes = 0, ignores = 0;
    bool ferme = 0, modifie = 0;

    for(int i = 0; i < k; i++){
        if(ferme){
            ignores++; continue;
        }
        if(events[i] == "MODIF"){
            modifie = true;
            std::cout<<"modifie\n";
        }
        else if(events[i] == "SAUVE"){
            modifie = false;
            std::cout<<"enregistre\n";
        }
        else if(events[i] == "FERMETURE"){
            demandes++;
            if(modifie){
                std::cout<<"fermeture refusee\n";
            }
            else{
                std::cout<<"fermeture acceptee\n";
                ferme = true;
            }
        }
    }

    std::cout<<"DEMANDES "<<demandes<<"\n";
    std::cout<<"IGNORES "<<ignores<<"\n";
    if(ferme == 1) std::cout<<"FERMEE oui\n";
    else std::cout<<"FERMEE non\n";

    return 0;
}