//
// Created by evelina on 17.10.2021.
//

#include "Zombie.hpp"

Zombie *zombieHorde(int N, std::string name) {
    Zombie *p_zombie = new Zombie[N];
    for (int i = 0; i < N; ++i) {
        p_zombie[i].setName(name);
    }
    return (p_zombie);
}