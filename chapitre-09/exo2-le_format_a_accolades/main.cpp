#include <iostream>
#include <string>
#include <vector>

int main(){
    std::string phrase;

    std::getline(std::cin, phrase);
    int nbr_args;
    std::cin>>nbr_args;

    std::vector<long long> arguments(nbr_args);
    for(int i = 0; i < nbr_args; i++){
        std::cin>>arguments[i];
    }

    std::string resultat = "";
    int remplaces = 0, manquants = 0;

    for(int i = 0; i < (int)phrase.size();){
        if(phrase[i] == '{' && i+2 < (int)phrase.size() && phrase[i+1] >= '0' && phrase[i+1] <= '9' && phrase[i+2] == '}'){
            int idx = phrase[i+1] - '0';
            if(idx < nbr_args){
                resultat += std::to_string(arguments[idx]);
                remplaces++;
            }
            else{
                resultat += '{';
                resultat += phrase[i+1];
                resultat += '}';
                manquants++;
            }
            i += 3;
        }
        else{
            resultat += phrase[i];
            i++;
        }
    }
    
    std::cout<<resultat<<"\n";
    std::cout<<"REMPLACES "<<remplaces<<"\n";
    std::cout<<"MANQUANTS "<<manquants<<"\n";

    return 0;
}