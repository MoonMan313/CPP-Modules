//
// Created by evelina on 17.10.2021.
//

#ifndef EX03_HUMANA_HPP
#define EX03_HUMANA_HPP

#include "Weapon.hpp"

class HumanA {
private:
    std::string name;
    Weapon &typeA;
public:
    HumanA(const std::string &name, Weapon &typeA);

    void attack(void);
};


#endif //EX03_HUMANA_HPP
