#include <iostream>
#include <vector>

int main(){
    int k;
    std::cin>>k;
    std::vector<bool> images(k);
    for(int i = 0; i < k; i++){
        bool image;
        std::cin>>image;
        images[i] = image;
    }

    int appuis = 0, relaches = 0;
    bool enfonce_avant = 0;

    for(int i = 0; i < k; i++){
        if(images[i] == 1 && enfonce_avant == 0){
            std::cout<<i + 1<<" APPUYE\n";
            enfonce_avant = 1; appuis++;continue;
        }
        if(images[i] == 1 && enfonce_avant == 1){
            std::cout<<i + 1<<" MAINTENU\n";continue;
        }
        if(images[i] == 0 && enfonce_avant == 1){
            std::cout<<i + 1<<" RELACHE\n";
            relaches++; enfonce_avant = 0; continue;
        }
        if(images[i] == 0 && enfonce_avant == 0){
            std::cout<<i + 1<<" RIEN\n"; continue;
        }
    }

    std::cout<<"APPUIS "<<appuis<<"\n";
    std::cout<<"RELACHES "<<relaches<<"\n";


    return 0;
}