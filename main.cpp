#include "define.h"
#include "TownCenter.h"
#include <iostream>

int main() {

  //test defaultnog konstruktora
  Villager v1;
  //test "glavnog" konstruktora 
  Villager v2(20,2,0.5);
  //test dodatnog konstruktora unosenje samo "Health"
  Villager v3(23);
  //test copy konstruktora
  Villager v4 = v2;

  //v1
  std::cout << v1.getHealth() << std::endl;
  std::cout << v1.getAttack() << std::endl;
  std::cout << v1.getSpeed() << std::endl;
  v1.info(); 
  std::cout << std::endl;
  //v2
  std::cout << v2.getHealth() << std::endl;
  std::cout << v2.getAttack() << std::endl;
  std::cout << v2.getSpeed() << std::endl;
  v2.info(); 
  std::cout << std::endl;
  //v3
  std::cout << v3.getHealth() << std::endl;
  std::cout << v3.getAttack() << std::endl;
  std::cout << v3.getSpeed() << std::endl;
  v3.info(); 
  std::cout << std::endl;
  //proba copy constructora v4
  std::cout << v4.getHealth() << std::endl;
  std::cout << v4.getAttack() << std::endl;
  std::cout << v4.getSpeed() << std::endl;
  v4.info(); 
  std::cout << std::endl;

  TownCenter tc;

  tc.trainVillager();
  tc.trainVillager(21);
  tc.info();


}
