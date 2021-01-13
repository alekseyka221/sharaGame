#ifndef PEASANT_H
#define PEASANT_H

#include "pure.h"

class Peasant : public PureClass
{
public:
    Peasant ();
    int getHP();
    double getDamage();
    void attack(double damage);
};

#endif // PEASANT_H
