#include <chrono>
#include <cstdio>
#include <cstdlib>
#include <ctime>

double maintenant();
void mettreAJour(double dt);
int compteur = 0;


int main(){
    srand(time(NULL));

    bool enCours = true;
    const double PAS = 1.0 / 120.0;        // 120 pas par seconde
    double accumulateur = 0.0;
    double precedent = maintenant();
    double debut = precedent;
    double duree;
    int nbre_tour = 0;

    while (enCours){

    double actuel = maintenant();
    accumulateur += actuel - precedent;
    precedent = actuel;
    nbre_tour ++;
      
    while (accumulateur >= PAS)
    {
        mettreAJour(PAS);               // toujours le même dt
        accumulateur -= PAS;
    }
    int attente = rand() % 20000 + 15000;

    //attente et sa mesure
    double t1 = maintenant();
    for(int i = 0; i < attente; i++){}
    double t2 = maintenant();
    duree = t2 - t1;

    //verification des 10 seconde
    if((maintenant() - debut) >= 10)
        enCours = false;
    }
    printf("%f", duree);

    //printf("Nombre de tour : %d\nNombre d'appel de \"mettreAjour\" : %d\n", nbre_tour, compteur);
    return 0;
}


double maintenant()
{
    using namespace std::chrono;
    auto t = steady_clock::now().time_since_epoch();
    return duration<double>(t).count();     // en secondes
}

void mettreAJour(double dt){
    (void)dt;
    compteur++;
}