//
// Created by evelina on 26.10.2021.
//

#ifndef EX00_WRONGANIMAL_HPP
#define EX00_WRONGANIMAL_HPP

#include <iostream>
#include <string>
#include "Animal.hpp"

class WrongAnimal {
protected:
    std::string type;
public:
    WrongAnimal();
    WrongAnimal(const std::string &type);
    WrongAnimal(const WrongAnimal & copy);
    WrongAnimal & operator=(const WrongAnimal & copy);
    virtual ~WrongAnimal();

    const std::string &getType() const;
    void makeSound() const;
};


#endif //EX00_WRONGANIMAL_HPP
