#include <iostream>
#include "Villager.h"

//defaultni konstruktor
Villager::Villager(){
    setHealth(VILLAGER_MAX_HEALTH);
    setAttack(VILLAGER_MAX_ATTACK);
    setSpeed(VILLAGER_MAX_SPEED);
};

//ostali konstruktori delegiraju ovome AKA "glavni"
Villager::Villager(int health, int attack, double speed) { 
    setHealth(health); 
    setAttack(attack); 
    setSpeed(speed);
    }

//hp na postavljenu ostalo na max
Villager::Villager(int hp){
    setHealth(hp);
    setAttack(VILLAGER_MAX_ATTACK);
    setSpeed(VILLAGER_MAX_SPEED);
};

//copy constructor
Villager::Villager(const Villager &v){
    setHealth(VILLAGER_MAX_HEALTH);
    setAttack(v.attack);
    setSpeed(v.speed);
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
    if(health > 0 && health <= VILLAGER_MAX_HEALTH){
        this->health = health;
        return;
    } else std::cout << "Health must be between 0-25" << std::endl;
}
void Villager::setAttack(int attack){
    if(attack > 0 && attack <= VILLAGER_MAX_ATTACK) {
        this->attack = attack;
        return;
    } else std::cout << "Attack must be between 0-3" << std::endl;
}

void Villager::setSpeed(double speed){
    if(speed > 0 && speed <= VILLAGER_MAX_SPEED){
    this->speed = speed;
    return;
    }
    else std::cout << "Speed must be between 0-0.8" << std::endl;
}

//metode
void Villager::info(){
    std::cout << "Villager ("<< health << "," << attack << "," << speed << ")" << std::endl;
}