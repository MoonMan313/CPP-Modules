//
// Created by evelina on 17.10.2021.
//

#include "Zombie.hpp"

Zombie *newZombie(std::string name) {
    Zombie *p_Zombie = new Zombie(name);
    return (p_Zombie);
}
