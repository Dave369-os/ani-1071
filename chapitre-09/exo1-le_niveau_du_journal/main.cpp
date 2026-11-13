#include <iostream>
#include <vector>
#include <string>

int convert(std::string &niveau){
    if(niveau == "DEBUG") return 0;
    if(niveau == "INFO")  return 1;
    if(niveau == "WARN")  return 2;
    if(niveau == "ERROR") return 3;
    return -1;
}

int main(){
    std::string seuil;
    int nombre_messages;
    std::cin>> seuil>> nombre_messages;

    struct niveau_mot{std::string niveau, mot;};
    std::vector<niveau_mot>Niveau_mot;

    for(int i =0; i < nombre_messages; i++){
        niveau_mot message;
        std::cin>>message.niveau>>message.mot;
        Niveau_mot.push_back(message);
    }

    int num_seuil = convert(seuil);
    int affiche = 0, filtre = 0;
    for(niveau_mot mot : Niveau_mot){
        int l  = convert(mot.niveau);
        if(num_seuil != -1 && l != -1 && l >= num_seuil){
            std::cout<<mot.niveau<<" "<<mot.mot<<"\n";
            affiche++;
        }
        else
            filtre++;
    }

    std::cout<<"AFFICHES "<<affiche<<"\nFILTRE "<<filtre<<"\n";

    return 0;
}