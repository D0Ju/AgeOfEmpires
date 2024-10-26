#include <iostream>
#include "TownCenter.h"

TownCenter::TownCenter():Jedinice(0){}


//metode
Villager* TownCenter::trainVillager(){
    this->Jedinice++;
    return new Villager; 
}

//metoda overload
Villager* TownCenter::trainVillager(int health){
    this->Jedinice++;
    return new Villager; 
}

void TownCenter::info(){
    std::cout << "Broj jedinica: " << this->Jedinice << std::endl;
}