//
// Created by evelina on 25.10.2021.
//

#ifndef EX00_DOG_HPP
#define EX00_DOG_HPP


#include "Animal.hpp"

class Dog : public Animal {
public:
    Dog();
    Dog(const Dog & copy);
    Dog & operator=(const Dog & copy);
    virtual ~Dog();

    void makeSound(void) const;
};


#endif //EX00_DOG_HPP
