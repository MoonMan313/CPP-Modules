//
// Created by evelina on 25.10.2021.
//

#ifndef EX00_ANIMAL_HPP
#define EX00_ANIMAL_HPP

#include <iostream>
#include <string>
#include "Brain.hpp"

#define PURPLE            "\e[35m" <<
#define BLUE            "\e[34m" <<
#define CYAN            "\e[36m" <<
#define RED                "\e[31m" <<
#define YELLOW            "\e[33m" <<
#define RESET            << "\e[0m"

class Animal {
protected:
    Animal();
    Animal(const std::string &type);
    std::string type;
public:
    virtual ~Animal();
    Animal( const Animal & copy );
    Animal	&operator=( Animal const &copy );

    const std::string &getType() const;
    virtual void makeSound() const = 0;
    virtual Brain *getBrain() const = 0;

};


#endif //EX00_ANIMAL_HPP
