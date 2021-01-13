#ifndef ARCHER_H
#define ARCHER_H

#include "peasant.h"

class Archer : public Peasant
{
public:
    Archer ();
    void attack(double damage);
};


#endif // ARCHER_H
