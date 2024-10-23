#include <iostream>
#include "TownCenter.h"

TownCenter::TownCenter():Jedinice(0){}


//metode
Villager* TownCenter::trainVillager(){
    Villager *villager = new Villager();
    this->Jedinice++;
    return villager; 
}

//metoda overload
Villager* TownCenter::trainVillager(int health){
    Villager *villager = new Villager(health);
    this->Jedinice++;
    return villager; 
}

void TownCenter::info(){
    std::cout << "Broj jedinica: " << this->Jedinice << std::endl;
}