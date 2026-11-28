#include <iostream>
#include <vector>
#include <string>

int main(){
    int largeur, hauteur, largeur_dessin, hauteur_dessin, nombre_politiques;
    std::cin>>largeur>>hauteur>>largeur_dessin>>hauteur_dessin>>nombre_politiques;

    std::vector<std::string> politiques(nombre_politiques);
    for(int i = 0; i < nombre_politiques; i++){
        std::cin>>politiques[i];
    }

    int total_vide = 0;

    for(int i = 0; i < nombre_politiques; i++){
        if(politiques[i] == "ETIRER"){
            std::cout<<"ETIRER 0 0 "<<largeur<<" "<<hauteur<<" 0"<<"\n";
        }

        if(politiques[i] == "BANDES"){
            //echelle
            int echelle_largeur = largeur * 1000 / largeur_dessin;
            int echelle_hauteur = hauteur * 1000 / hauteur_dessin;
            int echelle = (echelle_hauteur < echelle_largeur) ? echelle_hauteur : echelle_largeur;
            //Dimmensions du viewport
            int largeurViewport = largeur_dessin * echelle / 1000;
            int hauteurViewport = hauteur_dessin * echelle / 1000;
            int X_viewport = (largeur - largeurViewport) / 2;
            int Y_viewport = (hauteur - hauteurViewport) / 2;
            int pixels_nonCouverts = hauteur * largeur - hauteurViewport * largeurViewport;
            if(pixels_nonCouverts < 0) pixels_nonCouverts = 0;
            total_vide += pixels_nonCouverts; 
            std::cout<<"BANDES "<<X_viewport<<" "<<Y_viewport<<" "<<largeurViewport<<" "<<hauteurViewport<<" "<<pixels_nonCouverts<<"\n";
        }

        if(politiques[i] == "FIXE"){
           int x = (largeur - largeur_dessin) / 2;
           int y = (hauteur - hauteur_dessin) / 2;
           int pixels_nonCouverts = (largeur * hauteur) - (largeur_dessin * hauteur_dessin);
           if(pixels_nonCouverts < 0) pixels_nonCouverts = 0;
           total_vide += pixels_nonCouverts;
           std::cout<<"FIXE "<<x<<" "<<y<<" "<<largeur_dessin<<" "<<hauteur_dessin<<" "<<pixels_nonCouverts<<"\n";

    }
}

    std::cout<<"TOTAL VIDES "<<total_vide<<std::endl;

    return 0;
}