//
// Created by evelina on 26.10.2021.
//

#ifndef EX00_WRONGCAT_HPP
#define EX00_WRONGCAT_HPP

#include "WrongAnimal.hpp"
#include "Animal.hpp"

class WrongCat : public WrongAnimal{
public:
    WrongCat();
    virtual ~WrongCat();
    WrongCat(const WrongCat & copy);
    WrongCat & operator=(const WrongCat & copy);

    void makeSound(void) const;
};


#endif //EX00_WRONGCAT_HPP
