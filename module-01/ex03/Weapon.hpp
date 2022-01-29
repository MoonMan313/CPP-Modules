//
// Created by evelina on 17.10.2021.
//

#ifndef EX03_WEAPON_HPP
#define EX03_WEAPON_HPP


#include <string>
#include <iostream>

class Weapon {
private:
    std::string type;
public:
    Weapon(const std::string &type);

    const std::string &getType() const;

    void setType(const std::string &type);
};


#endif //EX03_WEAPON_HPP
