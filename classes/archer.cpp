#include "archer.h"
#include <iostream>
Archer :: Archer()
{
    maxHp = 100;
    maxExp = 100;
    maxDamage = 25;
}
void Archer :: attack(double damage)
{
    std::cout << "archer attack! " << damage << std::endl;
}
