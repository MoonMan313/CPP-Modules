//
// Created by evelina on 17.10.2021.
//

#include "HumanB.hpp"


void HumanB::attack(void) {
    if (this->weapon == NULL)
        std::cout << this->name << " has no weapon to attack." << std::endl;
    else
        std::cout << this->name << " attacks with his" << this->weapon->getType() << std::endl;
}

HumanB::HumanB(const std::string &name) : name(name), weapon(NULL) {}

void HumanB::setWeapon(Weapon &n_weapon) {
    this->weapon = &n_weapon;
}


