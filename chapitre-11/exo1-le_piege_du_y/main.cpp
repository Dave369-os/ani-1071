#include <iostream>
#include <vector>

int main(){
    unsigned long largeur, hauteur;
    std::cin>>largeur>>hauteur;
    int nbrPoints;
    std::cin>>nbrPoints;
    std::vector<std::vector<int>> Points(nbrPoints, std::vector<int>(2));

    for(int i = 0; i < nbrPoints; i++){
        std::cin>>Points[i][0]>>Points[i][1];
    }

    int dedans = 0, hors_ecran = 0;
    for(int i = 0; i < nbrPoints; i++){
        int ecranY = hauteur - 1 - Points[i][1];
        std::cout<<Points[i][0]<<" "<<ecranY<<"\n";
        if(ecranY >= 0 && ecranY <= hauteur - 1 && Points[i][0] >= 0 && Points[i][0] <= largeur){
            dedans++;
        }
        else{hors_ecran++;}
    }

    std::cout<<"DEDANS "<<dedans<<"\n";
    std::cout<<"HORS ECRAN "<<hors_ecran<<"\n";

    return 0;
}