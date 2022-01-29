//
// Created by evelina on 26.10.2021.
//

#ifndef EX01_BRAIN_HPP
#define EX01_BRAIN_HPP

#include <string>
#include <iostream>
#define GREEN            "\e[32m" <<
#define RESET            << "\e[0m"

class Brain {
private:
    static const int count = 100;
public:
    Brain();
    virtual ~Brain();
    Brain(const Brain & copy);
    Brain	&operator=( const Brain &copy );
    std::string ideas[count];
};


#endif //EX01_BRAIN_HPP
