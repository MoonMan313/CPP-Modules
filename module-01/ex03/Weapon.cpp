//
// Created by evelina on 17.10.2021.
//

#include "Weapon.hpp"

const std::string &Weapon::getType() const {
    return type;
}

void Weapon::setType(const std::string &type) {
    this->type = type;
}

Weapon::Weapon(const std::string &type) : type(type) {}
