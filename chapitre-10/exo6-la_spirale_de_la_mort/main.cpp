#include <iostream>
#include <vector>

int main(){

    long long pas, plafond;
    std::cin>>pas>>plafond;
    int k;
    std::cin>>k;

    std::vector<long long> images(k);
    for(int i = 0; i < k; i++){
        std::cin>>images[i];
    }

    long long resteAvec = 0, resteSans = 0;

    long long totalAvec = 0, totalSans = 0;
    int plafonnage = 0;

    for(int i = 0; i < k; i++){
        //avec plafond
        long long dureeAvec = images[i];

        if(dureeAvec > plafond){
            dureeAvec = plafond;
            plafonnage++;
        }

        resteAvec += dureeAvec;
        resteSans += images[i];
        
        long long pasAvec = 0;
        long long pasSans = 0;

        if(pas != 0){
            pasAvec = resteAvec / pas;
            resteAvec %= pas;
            totalAvec += pasAvec;
        

            //sans plafond
            pasSans = resteSans / pas;
            resteSans %= pas;
            totalSans += pasSans;
        }

        std::cout<<i+1<<" "<<pasAvec<<" "<<pasSans<<"\n";
    }

    std::cout<<"AVEC "<<totalAvec<<"\n";
    std::cout<<"SANS "<<totalSans<<"\n";
    std::cout<<"PLAFONNAGES "<<plafonnage<<"\n";
    std::cout<<"DETTE "<<resteSans<<"\n";

    
    return 0;
}