#include <iostream>
#include <vector>
#include <cmath>

int main(){
    int k, pas;
    std::cin>>pas;
    std::cin>>k;

    std::vector<bool> valeurs(k*2);
    for(int i = 0; i < 2*k; i++){
        bool valeur;
        std::cin>>valeur;
        valeurs[i] = valeur;
    }

    int deplacement = 0, immobile = 0;
    int position = 0;
    for(int i = 0; i < 2*k; i = i+2){
        int axe = valeurs[i+1] - valeurs[i];
        position += axe * pas;
        if(position != 0){
        deplacement += abs(position);
        }
        else immobile++;
        std::cout<<axe<<" "<<position<<"\n";
    }

    std::cout<<"DEPLACEMENT "<<deplacement<<"\n";
    std::cout<<"IMMOBILE "<<immobile<<"\n";

    return 0;
}