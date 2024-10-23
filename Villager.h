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