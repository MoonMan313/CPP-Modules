//
// Created by evelina on 27.10.2021.
//

#include "Cure.hpp"

Cure::Cure() : AMateria("cure") {
    std::cout << PURPLE "Cure is a new materia!" RESET << std::endl;
}

Cure::~Cure() {
    std::cout << PURPLE "Cure destructor." RESET << std::endl;
}

AMateria *Cure::clone() const {
    std::cout << PURPLE "Cure clone" RESET << std::endl;
    return (new Cure());
}

void Cure::use(ICharacter &target) {
    std::cout << PURPLE "* heals " << target.getName() << "’s wounds *" RESET << std::endl;
}

Cure::Cure(const Cure &copy) {
    *this = copy;
}

Cure &Cure::operator=(const Cure &copy) {
    this->type = copy.type;
    return *this;
}
