#ifndef HERO_H
#define HERO_H

#include "classes/pure.h"
#include "classes/peasant.h"
#include "classes/swordsman.h"
#include "classes/archer.h"

class Hero
{
private:
    bool armor;
    int curHP;
    int curExp;
    double curDamage;
    PureClass* curClass;
public:
    Hero();
    PureClass* getClass();
    void levelUp();
    void dead();
    void hit(Hero &enemy);
    void armorUp();
    void setHP(int hp);
    int getHP();
};

#endif // HERO_H
