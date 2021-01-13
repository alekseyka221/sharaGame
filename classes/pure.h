#ifndef PURE_H
#define PURE_H

class PureClass
{
protected:
    int maxHp;
    int maxExp;
    double maxDamage;
    ~PureClass() = default;
public:
    int getHP();
    double getDamage();
    virtual void attack(double damage) = 0;
};

#endif // PURE_H
