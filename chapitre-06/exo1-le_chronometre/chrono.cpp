#include <cstdio>
#include <chrono> 

double maintenant()
{
    using namespace std::chrono;
    auto t = steady_clock::now().time_since_epoch();
    return duration<double>(t).count();     // en secondes
}

int main(){
    double initial = maintenant();
    long long total = 0;
    for(int i = 0; i <= 1000000; i++){
        total = total + i;
    }

    double enfin = maintenant();

    printf("Total : %lld\nDuree : %lf\n", total, (enfin - initial));

    return 0;
}