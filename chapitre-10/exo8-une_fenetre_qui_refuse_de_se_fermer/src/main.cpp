#include "NKWindow/NKMain.h"
#include "NKWindow/Core/NkWindow.h"
#include "NKWindow/Core/NkWindowConfig.h"
#include "NKEvent/NkWindowEvent.h"
#include "NKLogger/NkLog.h"
#include "NKTime/NkClock.h"

using namespace nkentseu;

int nkmain(const NkEntryState &etat){
    //descirption_fenetre
    NkWindowConfig config;
    config.width = 960;
    config.height = 540;
    config.centered = true;
    config.resizable = true;
    config.bgColor = 0x1E3A5FFF;
    
    //Creer, verifier qu'elle existe
    NkWindow fenetre(config);
    if(!fenetre.IsValid()){
        logger.Error("La fenetre n'a pas pu etre cree.");
        return 1;
    }
    logger.Info("Ouverture de la fenetre : {0} x {1}.", fenetre.GetSize().x, fenetre.GetSize().y);
    
    int compteur = 0;
    NkEventSystem &evenements = NkEvents();
    evenements.AddEventCallback<NkWindowCloseEvent>([&](NkWindowCloseEvent *){
        compteur++;
        logger.Info("Clic numero {0}", compteur);
        
        if(compteur >= 2){
            logger.Info("Deuxiem clic, Fermeture...");
        }
        else{
            logger.Info("Premier clic, fermeture refusee.");
        }
    });
    
    //boucle PRINCIPALE
    uint64 tours = 0;
    while(compteur<2 && fenetre.IsOpen()){
        evenements.PollEvents();
        ++tours;
        NkClock::Sleep((int64)10);
    }

       fenetre.Close();
       logger.Info("Fermeture propre apres {0} tours.", tours);
    
    return 0;
}