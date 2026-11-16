#include <iostream>
#include<vector>
#include <string>

int main(){
    int n;
    std::cin>>n;
    struct Fichier{std::string nom; std::vector<std::string> defNom; std::vector<int> defStatic; std::vector<std::string> uses;};

    std::vector<Fichier> f(n);
    for(int i = 0; i < n; i++){
        std::cin>>f[i].nom;
        int nbDef;
        std::cin>>nbDef;
        f[i].defNom.resize(nbDef);
        f[i].defStatic.resize(nbDef);
        for(int j = 0; j < nbDef; j++) std::cin>>f[i].defNom[j]>>f[i].defStatic[j];
        int nbUse;
        std::cin>>nbUse;
        f[i].uses.resize(nbUse);
        for(int j = 0; j < nbUse; j++) std::cin>>f[i].uses[j];
    }

    //DOUBLES : ordre de deuxieme definition globle.
    std::vector<std::string> doubles;
    std::vector<std::string> vuDefGlobal;
    std::vector<int> cntDefGlobal;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < (int)f[i].defNom.size(); j++){
            if(f[i].defStatic[j] == 2) continue;
            std::string nom = f[i].defNom[j];
            int idx = -1;
            for(int k = 0; k < (int)vuDefGlobal.size(); k++) if(vuDefGlobal[k] == nom) idx = k;
            if(idx == -1) {vuDefGlobal.push_back(nom); cntDefGlobal.push_back(1);}
            else{
                cntDefGlobal[idx]++;
                if(cntDefGlobal[idx] == 2){
                    bool deja = false;
                    for(auto &s : doubles) if(s == nom) deja = true;
                    if(!deja) doubles.push_back(nom);
                }
            }
        }
    }

    //INDEFINIS : ordre de premiere rencontre d'emploi rate
    std::vector<std::string> indefinis;
    for(int i = 0; i < n; i++){
        for(int j = 0; j <(int)f[i].uses.size(); j++){
            std::string u = f[i].uses[j];
            bool dejaSignale = false;
            for(auto &s : indefinis) if(s == u) dejaSignale = true;
            if(dejaSignale) continue;

            bool trouve = false;
            //static dans ce fichier?
            for(int k = 0; k < (int)f[i].defNom.size(); k++){
                if(f[i].defNom[k] == u && f[i].defStatic[k] == 1) trouve = true;
            }
            //global quelque part?
            for(int k = 0; k < (int)vuDefGlobal.size(); k++){
                if(vuDefGlobal[k] == u) trouve = true;
            }
            if(!trouve) indefinis.push_back(u);
        }
    }

    for(auto &s : indefinis) std::cout<<"INDEFINI "<<s<<"\n";
    for(auto &s : doubles) std::cout<<"DOUBLE "<<s<<"\n";
    std::cout<<"INDEFINIS "<<indefinis.size()<<"\n";
    std::cout<<"DOUBLES "<<doubles.size()<<"\n";
    if(indefinis.empty() && doubles.empty()) std::cout<<"VERDICT LIE\n";
    else
        std::cout<<"VERDICT ECHEC\n";

    return 0;
}