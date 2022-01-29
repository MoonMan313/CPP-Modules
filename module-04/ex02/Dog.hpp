//
// Created by evelina on 25.10.2021.
//

#ifndef EX00_DOG_HPP
#define EX00_DOG_HPP

#include "Brain.hpp"
#include "Animal.hpp"

class Dog : public Animal {
private:
    Brain *brain;
public:
    Dog();

    Brain *getBrain() const;

    virtual ~Dog();

    void makeSound(void) const;
};


#endif //EX00_DOG_HPP
