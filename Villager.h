#ifndef VILLAGER_H
#define VILLAGER_H
#define VILLAGER_MAX_HEALTH 25
#define VILLAGER_MAX_ATTACK 3
#define VILLAGER_MAX_SPEED 0.8
class Villager{

    public:
    //Default const
    Villager();
    //Dodatni Constructor
    Villager(int, int, double);
    Villager(int);
    //copy constr
    Villager(const Villager &v);

    //setteri
    void setHealth(int health);
    void setAttack(int attack);
    void setSpeed(double speed);

    //getteri
    int getHealth();
    int getAttack();
    double getSpeed();

    //motode
    void info(); 


    private:
    int health;
    int attack;
    double speed; 

};  

#endif