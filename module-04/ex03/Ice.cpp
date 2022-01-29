//
// Created by evelina on 27.10.2021.
//

#include "Ice.hpp"

Ice::Ice() : AMateria("ice") {
    std::cout << CYAN "Ice is a new materia!" RESET << std::endl;
}

Ice::~Ice() {
    std::cout << CYAN "Ice destructor." RESET << std::endl;
}

AMateria *Ice::clone(void ) const {
    std::cout << CYAN "Ice clone" RESET << std::endl;
    return (new Ice());
}

void Ice::use(ICharacter &target) {
    std::cout << CYAN "* shoots an ice bolt at " << target.getName() << " *" RESET << std::endl;
}

Ice::Ice(const Ice &copy) {
    *this = copy;
}

Ice	&Ice::operator=( const Ice &copy )
{
    this->type = copy.type;
    return *this;
}