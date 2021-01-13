#include <QCoreApplication>
#include <iostream>
#include "hero.h"

int main()
{
    Hero myFrirstHero;
    Hero mySecondHero;
    myFrirstHero.hit(mySecondHero);
    std::cout << mySecondHero.getHP();
    myFrirstHero.getClass()->attack(12);
}
