//
// Created by evelina on 27.10.2021.
//

#ifndef EX03_ICE_HPP
#define EX03_ICE_HPP


#include <iostream>
#include "AMateria.hpp"

class Ice : public AMateria {
public:
    Ice();
    Ice(const Ice &copy);
    Ice &operator=(const Ice &copy);
    virtual ~Ice();

    AMateria *clone(void ) const;

    virtual void use(ICharacter &target);
};


#endif //EX03_ICE_HPP
