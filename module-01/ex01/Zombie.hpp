//
// Created by evelina on 17.10.2021.
//

#ifndef EX00_ZOMBIE_HPP
#define EX00_ZOMBIE_HPP

#define NUM 5

#include <string>
#include <iostream>
#include <cstdlib>

class Zombie {
private:
    std::string name;
public:
    Zombie(void);

    Zombie(const std::string &name);

    virtual ~Zombie();

    void announce(void);

    const std::string &getName() const;

    void setName(const std::string &name);
};

Zombie *zombieHorde(int N, std::string name);

#endif //EX00_ZOMBIE_HPP
