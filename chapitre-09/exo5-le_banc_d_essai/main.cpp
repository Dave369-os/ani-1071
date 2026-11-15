#include <iostream>
#include <string>
#include <vector>

struct assertion{
    std::string type;
    int attendu;
    int obtenu;
};

std::string verification(std::string type, int attendu, int obtenu){
    if(type == "EQUAL"){
        if(attendu == obtenu) return "OK";
        else return "ECHEC";
    }
    else if(type == "LESS"){
        if( attendu < obtenu) return "OK";
        else return "ECHEC";
    }
    else if(type == "NOT_EQUAL"){
        if(attendu != obtenu) return "OK";
        else return "ECHEC";
    }
    else if(type == "GREATER"){
        if(attendu > obtenu) return "OK";
        else return "ECHEC";
    }
    else if(type == "LESS_EQUAL"){
        if(attendu <= obtenu) return "OK";
        else return "ECHEC";
    }
    else{
        if(attendu >= obtenu) return "OK";
        else return "ECHEC";
    }
}

int main(){
    int nbr_assert;
    std::cin>>nbr_assert;
    std::vector<assertion> Assertions(nbr_assert);
    int reussis = 0, echec = 0;

    //Remplissage du tableau
    for(int i = 0; i < nbr_assert; i++){
        std::string Type; int Attendu, Obtenu;
        std::cin>>Type>>Attendu>>Obtenu;
        if(Type != "EQUAL" && Type != "NOT_EQUAL" && Type != "LESS" && Type != "GREATER" && Type != "LESS_EQUAL" && Type != "GREATER_EQUAL"){
            echec++;
        }
        Assertions[i].type = Type;
        Assertions[i].attendu = Attendu;
        Assertions[i].obtenu = Obtenu;
    }

    for(int i = 0; i < nbr_assert; i++){
        std::string resultat = verification(Assertions[i].type, Assertions[i].attendu, Assertions[i].obtenu);
        if(resultat == "OK"){
            std::cout<<"cas "<<i+1<<" OK\n";
            reussis++;
        }
        else{
            std::cout<<"cas "<<i+1<<" ECHEC attendu "<<Assertions[i].attendu<<" obtenu "<<Assertions[i].obtenu<<"\n";
            echec++;
        }

    }
    std::cout<<"REUSSIS "<<reussis<<"\n";
    std::cout<<"ECHOUES "<<echec<<"\n";
    std::cout<<"VERDICT ";
    if(reussis == nbr_assert || nbr_assert == 0){
        std::cout<<"VERT";
    }
    else{
        std::cout<<"ROUGE\n";
    }

}