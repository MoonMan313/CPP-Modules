//
// Created by evelina on 25.10.2021.
//

#ifndef EX00_CAT_HPP
#define EX00_CAT_HPP

#include "Brain.hpp"
#include "Animal.hpp"

class Cat : public Animal {
private:
    Brain *brain;
public:
    Cat();
    virtual ~Cat();
    Cat(const Cat & copy);
    virtual Cat & operator=(const Cat & copy);

    virtual Brain *getBrain() const;

    void makeSound(void) const;
};


#endif //EX00_CAT_HPP
