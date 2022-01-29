//
// Created by evelina on 27.10.2021.
//

#include "Character.hpp"

Character::Character(const std::string &name) : name(name) {
    for (int i = 0; i < invent_num; i++)
        invent[i] = NULL;
    std::cout << BLUE "Character constructor" RESET << std::endl;
}

Character::~Character() {
    std::cout << BLUE "Character destructor" RESET << std::endl;
}

Character::Character(const Character &character) {
    std::cout << BLUE "Character copy constructor" RESET << std::endl;
    *this = character;
}

Character &Character::operator=(const Character &character) {
    std::cout << BLUE "Character assignment operator" RESET << std::endl;
    for(int i = 0; i < invent_num; i++){
        if (invent[i])
            delete invent[i];
        invent[i] = character.invent[i];
    }
    return *this;
}

const std::string &Character::getName() const {
    return this->name;
}

void Character::equip(AMateria *m) {
    if (m == NULL)
        return;
    for (int i = 0; i < invent_num; i++){
        if (invent[i] == NULL) {
            invent[i] = m->clone();
            break;
        }
    }
}

void Character::unequip(int idx) {
    if (idx < invent_num && idx >= 0)
        invent[idx] = NULL;
}

void Character::use(int idx, ICharacter &target) {
    if (idx < invent_num && idx >= 0 && invent[idx])
        invent[idx]->use(target);
}



