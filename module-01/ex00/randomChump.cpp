//
// Created by evelina on 17.10.2021.
//

#include "Zombie.hpp"

void randomChump(std::string name) {
    Zombie a((const std::string) name);
    a.announce();
}