#include "swordsman.h"
#include <iostream>

Swordsman :: Swordsman()
{
    maxHp = 100;
    maxExp = 100;
    maxDamage = 25;
}
void Swordsman ::attack(double damage)
{
    std::cout << "archer attack! " << damage << std::endl;
}
