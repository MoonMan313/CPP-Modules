//
// Created by evelina on 17.10.2021.
//

#ifndef EX00_ZOMBIE_HPP
#define EX00_ZOMBIE_HPP


#include <string>
#include <iostream>

class Zombie {
private:
    std::string name;

public:
    Zombie(const std::string &name);

    virtual ~Zombie();

    void announce(void);
};

Zombie *newZombie(std::string name);

void randomChump(std::string name);

#endif //EX00_ZOMBIE_HPP
