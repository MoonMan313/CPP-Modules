//
// Created by evelina on 17.10.2021.
//

#include "Zombie.hpp"

void Zombie::announce(void) {
    std::cout << "<" << this->name << ">" << " BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::Zombie(const std::string &name) : name(name) {}

Zombie::~Zombie() {
    std::cout << this->name
              << " has gone to eat!" << std::endl;
}

Zombie::Zombie(void) {}

const std::string &Zombie::getName() const {
    return name;
}

void Zombie::setName(const std::string &name) {
    this->name = name;
}
