//
// Created by evelina on 17.10.2021.
//

#include "HumanA.hpp"


void HumanA::attack(void) {
    std::cout << this->name << " attacks with his"
              << this->typeA.getType() << std::endl;
}

HumanA::HumanA(const std::string &name, Weapon &typeA) : name(name), typeA(typeA) {}
