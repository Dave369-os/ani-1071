#include <cstdio>
#include <NKLogger/NkLog.h>

int main() {
    nkentseu::NkLog::Initialize("Ani1071");
    logger.Info("Demarrage du jeu au niveau {}", 2);
    printf("Bienvenue aux jouers\n");
    logger.Info("le chronometre lance");
    logger.Warn("Arrive du boss final");
    logger.Info("joueur {} recupere {} pieces", 2, 10);
    logger.Info("Fin de partie");
    logger.Debug("La partie est terminee");
    printf("Bien joue!\n");
    
    nkentseu::NkLog::Shutdown();
    return 0;
}
