#include "Villager.h"
#include <iostream>
class Outpost{

    public:
    Outpost();
    Outpost(Villager& v);
    Outpost(const Outpost& drugiv);

    ~Outpost();

    void info();


    private:
    Villager *villager;

};