#include "peasant.h"
#include <iostream>
Peasant :: Peasant()
{
    maxHp = 25;
    maxExp = 30;
    maxDamage = 10;
}
int Peasant ::getHP()
{
    return PureClass::getHP();
}
double Peasant ::getDamage()
{
    return PureClass::getDamage();
}
void Peasant :: attack(double damage)
{
    std::cout << "peasant attack! " << damage << std::endl;
}
