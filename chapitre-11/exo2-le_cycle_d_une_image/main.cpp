#include <iostream>
#include <vector>
#include <string>

int main(){
    int k;
    std::cin>>k;
    std::vector<std::string> Operations(k);
    for(int i = 0; i < k; i++){
        std::cin>>Operations[i];
    }
    int images = 0, perdus = 0;
    bool clear = 0, display = 0;

    std::vector<std::string> affiches(k);

    for(int i = 0; i < k; i++){
        if(Operations[i] == "CLEAR" && clear == 0){
            //std::cout<<"ouverte\n";
            affiches[i] = "ouverte";
            clear = 1;
        }
        else if(Operations[i] == "CLEAR" && clear == 1){
            //std::cout<<"rouverte\n";
            affiches[i] = "rouverte";
            for(int j = 0; j < i; j++){
                if(affiches[j] == "ouverte"){affiches[j] = "perdu";}
            }
        }

        if(Operations[i] == "DESSIN" && clear == 1){
            //std::cout<<"dessine\n";
            affiches[i] = "dessine";
        }
        else if(Operations[i] == "DESSIN" && clear == 0){
            //std::cout<<"perdu\n";
            affiches[i] = "perdu";
            perdus++;
        }

        if(Operations[i] == "DISPLAY" && clear == 1){
            //std::cout<<"presentee\n";
            affiches[i] = "presentee";
            clear = 0;
            images++;
        }
        else if(Operations[i] == "DISPLAY" && clear == 0){
            //std::cout<<"ignoree\n";
            affiches[i] = "ignoree";
        }
    }

    for(int i = 0; i < k; i++){
        std::cout<<affiches[i]<<"\n";
    }
    std::cout<<"IMAGES "<<images<<"\n";
    std::cout<<"PERDUS "<<perdus<<"\n";

    return 0;
}