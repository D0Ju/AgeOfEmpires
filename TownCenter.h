#include "Villager.h"
class TownCenter{
    public:
    //konsturktor
    TownCenter();

    //metode
    Villager* trainVillager();
    Villager* trainVillager(int);
    void info();
    
    private:
    int Jedinice;
    int Gradevine;

};