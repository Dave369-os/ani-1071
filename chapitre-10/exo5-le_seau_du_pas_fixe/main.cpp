#include <iostream>
#include <vector>

int main(){
    long long pas;
    std::cin>>pas;

    int k;
    std::cin>>k;

    std::vector<long long> durees(k);

    for(int i = 0; i < k; i++){
        std::cin>>durees[i];
    }

        long long seau = 0;
        int pas_total = 0;
    if(pas != 0){
        for(int i = 0; i < k; i++){
            int pas_efectues = (durees[i] + seau)/ pas;
            seau = (seau + durees[i]) % pas;
            pas_total += pas_efectues;
            std::cout<<i+1<<" "<<pas_efectues<<" "<<seau<<"\n";
        }
    }
    else{
        for(int i =0; i < k; i++){
            seau = seau + durees[i];
            std::cout<<i+1<<" "<<pas<<" "<<seau<<"\n";
        }
    }

    std::cout<<"PAS TOTAL "<<pas_total<<"\n";
    std::cout<<"RESTE FINAL "<<seau<<"\n";

    return 0;
}