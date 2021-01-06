#ifndef SWORDSMAN_H
#define SWORDSMAN_H

#include "peasant.h"

class Swordsman : public Peasant
{
public:
    Swordsman ();
    void attack(double damage);
};

#endif // SWORDSMAN_H
