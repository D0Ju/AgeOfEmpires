#include <iostream>
#include "Villager.h"

//defaultni konstruktor
Villager::Villager() : Villager(25,3,0.8){};

//ostali konstruktori delegiraju ovome AKA "glavni"
Villager::Villager(int health, int attack, double speed) { 
    setHealth(health); 
    setAttack(attack); 
    setSpeed(speed);
    }

//hp na postavljenu ostalo na max
Villager::Villager(int hp) : Villager(hp, 3, 0.8){};

//copy constructor
Villager::Villager(const Villager &v){
    this->health = 25;
    this->attack = v.attack;
    this->speed = v.speed;
};

//geteri
int Villager::getHealth() {
    return health;
}
int Villager::getAttack(){
    return attack;
}
double Villager::getSpeed(){
    return speed;
}

//seteri
void Villager::setHealth(int health){
    if(health > 0 && health <= 25) this->health = health;
    else std::cout << "Health must be between 0-25" << std::endl;
}
void Villager::setAttack(int attack){
    if(attack > 0 && attack <= 3) this->attack = attack;
    else std::cout << "Attack must be between 0-3" << std::endl;
}

void Villager::setSpeed(double speed){
    if(speed > 0 && speed <= 0.8) this->speed = speed;
    else std::cout << "Speed must be between 0-0.8" << std::endl;
}

//metode
void Villager::info(){
    std::cout << "Villager ("<< health << "," << attack << "," << speed << ")" << std::endl;
}