//
// Created by evelina on 27.10.2021.
//

#ifndef EX03_CURE_HPP
#define EX03_CURE_HPP

#include <iostream>
#include "AMateria.hpp"

class Cure : public AMateria {
public:
    Cure();
    virtual ~Cure();
    Cure(const Cure &copy);
    Cure &operator=(const Cure &copy);

    virtual AMateria *clone() const;
    virtual void use(ICharacter &target);
};


#endif //EX03_CURE_HPP
