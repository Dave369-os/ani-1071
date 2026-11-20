#include <iostream>
#include <vector>



int main(){
    int k;
    std::cin>>k;

    std::vector<std::string> types(k);
    std::vector<std::string> touches(k);
    for(int i = 0; i < k; i++){
        std::cin>>types[i];
        if(types[i] != "FOCUS_PERDU"){
            std::cin>>touches[i];
        }
    }

    std::vector<std::string> enfoncees;
    std::vector<std::string> reponses;
    int oublis = 0;

    for(int i = 0; i < k; i++){
        std::string type = types[i];
        std::string touche = touches[i];
        if(type == "FOCUS_PERDU"){
            oublis += enfoncees.size();
            enfoncees.clear();
    }
        else{
            // std::string touche;
            // std::cin>>touche;

            bool deja = 0;
            int pos = -1;
            for(int j = 0; j < (int)enfoncees.size(); j++){
                if(enfoncees[j] == touche){
                    deja = true;
                    pos = j;
                    break;
                }
            }

            if(type == "BAS"){
                if(!deja){
                    enfoncees.push_back(touche);
                }
            }
            else if(type == "HAUT"){
                if(deja){
                   enfoncees.erase(enfoncees.begin() + pos);
                }
            }
            // else if(type == "HAUT"){
            //     if(deja){
            //         enfoncees.erase(enfoncees.begin() + pos);
            //     }
            // }
            else if(type == "QUESTION"){
                //if(type == "QUESTION"){
                    if(deja) reponses.push_back("oui");
                    else reponses.push_back("non");
                }
            }
        }


    for(int i = 0; i < (int)reponses.size(); i++){
        std::cout<<reponses[i]<<"\n";
    }


    std::cout<<"ENFONCEES "<<enfoncees.size()<<"\n";
    std::cout<<"OUBLIS "<<oublis<<"\n";

    return 0;
}