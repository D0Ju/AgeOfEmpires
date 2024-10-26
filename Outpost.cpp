#include "Outpost.h"

Outpost::Outpost() : villager(nullptr){};


//dodjeluje villagera outpostu
Outpost::Outpost(Villager& v) : villager(new Villager(v)) {}

//copy konstruktor
Outpost::Outpost(const Outpost& drugiv) {
    villager = drugiv.villager ? new Villager(*drugiv.villager) : nullptr;
}

Outpost::~Outpost() {
    delete villager;
}

void Outpost::info(){
    if (villager) {
        std::cout << "Outpost contains a Villager:\n";
        villager->info();
    } else {
        std::cout << "Outpost is empty.\n";
    }
}