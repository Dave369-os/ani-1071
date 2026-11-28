#include <iostream>
#include <vector>


int main(){
    int hauteur, largeur;
    int octetParpixel, nbrPixel;

    std::cin>>largeur>>hauteur>>octetParpixel>>nbrPixel;

    std::vector<std::vector<int>> Coords(nbrPixel, std::vector<int>(2));

    for(int i = 0; i < nbrPixel; i++){
        std::cin>>Coords[i][0]>>Coords[i][1];
    }

    int taille = 0, dedans = 0, ligne = 0;

    for(int i = 0; i < nbrPixel; i++){
        if(Coords[i][0] >= 0 && Coords[i][0] <= largeur - 1 && Coords[i][1] >= 0 && Coords[i][1] <= hauteur - 1){
            dedans++;
            int decalage = (Coords[i][1] * largeur + Coords[i][0]) * octetParpixel;
            std::cout<<decalage<<std::endl;
        } else{
            std::cout<<"HORS"<<std::endl;
        }
    }

    taille = largeur * hauteur * octetParpixel;
    ligne = largeur * octetParpixel;

    std::cout<<"LIGNE "<<ligne<<"\n";
    std::cout<<"TAILLE "<<taille<<"\n";
    std::cout<<"DEDANS "<<dedans<<"\n";

    return 0;
}