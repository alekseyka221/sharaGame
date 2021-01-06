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
    void setClass(PureClass* heroClass);
    PureClass* getClass();
    void levelUp();
    void chooseClass();
    void dead();
    void hit(Hero &enemy);
    void armorUp();
};

#endif // HERO_H
