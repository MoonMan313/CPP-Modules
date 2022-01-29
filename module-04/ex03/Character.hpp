//
// Created by evelina on 27.10.2021.
//

#ifndef EX03_CHARACTER_HPP
#define EX03_CHARACTER_HPP


#include "ICharacter.hpp"

class Character : public ICharacter {
private:
    std::string name;
    static const int invent_num = 4;
    AMateria *invent[invent_num];

public:
    Character(const std::string &name);
    virtual ~Character();
    Character(const Character &character);
    Character &operator=(const Character &character);

    const std::string &getName() const;
    void equip(AMateria *m);
    void unequip(int idx);
    void use(int idx, ICharacter &target);
};


#endif //EX03_CHARACTER_HPP
