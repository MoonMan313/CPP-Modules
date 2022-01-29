//
// Created by evelina on 25.10.2021.
//

#ifndef EX00_CAT_HPP
#define EX00_CAT_HPP


#include "Animal.hpp"

class Cat : public Animal {
public:
    Cat();
    Cat(const Cat & copy);
    Cat & operator=(const Cat & copy);
    virtual ~Cat();

    void makeSound(void) const;
};


#endif //EX00_CAT_HPP
