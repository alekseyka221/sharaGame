#include "hero.h"
#include <iostream>
Hero::Hero()
{
    curClass = new Peasant();
    curHP = curClass->getHP();
    curDamage = curClass->getDamage();
    armor = 1;
    curExp = 0;
}
PureClass* Hero ::getClass()
{
    return curClass;
}
void Hero ::dead()
{
    std::cout << "hero is dead!" << std::endl;
}
void Hero ::setHP(int hp)
{
    this->curHP = hp;
}
int Hero ::getHP()
{
    return this->curHP;
}
void Hero ::hit(Hero &enemy)
{
    enemy.setHP(enemy.getHP() - this->curDamage);
}
void Hero ::armorUp()
{
    this->armor *= 2;
}

