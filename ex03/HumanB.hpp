#ifndef HUMANB_H
#define HUMANB_H

#include "Weapon.hpp"
#include <string>

class HumanB {
private:
    std::string name;
    Weapon* weapon;
public:
    HumanB(const std::string& name);
    void setWeapon(Weapon& weapon);
    void attack() const;
};

#endif
