//
// Created by evelina on 17.10.2021.
//

#ifndef EX03_HUMANB_HPP
#define EX03_HUMANB_HPP

#include "Weapon.hpp"

class HumanB {
private:
    std::string name;
    Weapon *weapon;
public:
    void setWeapon1(Weapon *weapon);

public:
    HumanB(const std::string &name);

    void attack(void);

    void setWeapon(Weapon &n_weapon);

    HumanB(const std::string &name, Weapon weapon);
};


#endif //EX03_HUMANB_HPP
