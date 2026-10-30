#include <cstdio>
#include <chrono>

double maintenant()
{
    using namespace std::chrono;
    auto t = steady_clock::now().time_since_epoch();
    return duration<double>(t).count();     // en secondes
}

class Chrono{
    private : 
        double t = maintenant();
    public : 
        double ecoule() const{return maintenant() - t;}
        void redemarrer(){t = maintenant();}
};

int main(){

     Chrono c;
    long long total = 0;
    for (long long i = 0; i < 100000000; i++) total += i;

    printf("total = %lld\n%f\n",total, c.ecoule());

for(int i = 0; i < 5; i++){
    c.redemarrer();
    double duree = c.ecoule();
    printf("%.10f\n", duree);
}

Chrono k;
k.ecoule();
//k.redemarrer();

    return 0;
}