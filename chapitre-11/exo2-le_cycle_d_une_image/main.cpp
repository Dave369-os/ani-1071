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
    bool clear = 0;
    int DessinsEnAttente = 0;

    std::vector<std::string> affiches(k);

    for(int i = 0; i < k; i++){
      if(Operations[i] == "CLEAR"){
        if(clear == false){
            affiches[i] = "ouverte";
        }else{affiches[i] = "rouverte"; perdus += DessinsEnAttente;}
        clear = true;
        DessinsEnAttente = 0;
      }
        else if(Operations[i] == "DESSIN"){
            if(clear == true){
                affiches[i] = "dessine";
                DessinsEnAttente++;
            }else{
                affiches[i] = "perdu";
                perdus++;
            }
        }
        else if(Operations[i] == "DISPLAY") {
            if(clear == true){
                affiches[i] = "presentee";
                images++;

                clear = false;
                DessinsEnAttente = 0;
            }else{
                affiches[i] = "ignoree";
            }
        }
      }

      if(clear == true){
        perdus += DessinsEnAttente;
      }

    for(int i = 0; i < k; i++){
        std::cout<<affiches[i]<<"\n";
    }

   
    std::cout<<"IMAGES "<<images<<"\n";
    std::cout<<"PERDUS "<<perdus<<"\n";

    return 0;
}