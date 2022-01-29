//
// Created by evelina on 27.10.2021.
//

#ifndef EX03_AMATERIA_HPP
#define EX03_AMATERIA_HPP

#include <string>
#include <iostream>

#define PURPLE		 	"\e[35m" <<
#define BLUE			"\e[34m" <<
#define GREEN			"\e[32m" <<
#define CYAN			"\e[36m" <<
#define RED				"\e[31m" <<
#define YELLOW			"\e[33m" <<
#define RESET			<< "\e[0m"

class ICharacter;

class AMateria {
protected:
    std::string type;
public:
    AMateria();
    AMateria(std::string const & type);
    AMateria(const AMateria &copy);
    AMateria &operator=(const AMateria &copy);
    virtual ~AMateria();

    std::string const & getType() const; //Returns the materia type
    virtual AMateria* clone() const = 0;
    virtual void use(ICharacter& target) = 0;
};

#include "ICharacter.hpp"

#endif //EX03_AMATERIA_HPP
