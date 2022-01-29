//
// Created by evelina on 27.10.2021.
//

#include "AMateria.hpp"

AMateria::AMateria(const std::string &type) : type(type) {
    std::cout << YELLOW "AMateria constructor" RESET << std::endl;
}

AMateria::AMateria() {
    std::cout << YELLOW "AMateria constructor" RESET << std::endl;
}

AMateria::~AMateria() {
std::cout << YELLOW "AMateria destructor" RESET << std::endl;
}

std::string const &AMateria::getType() const {
    return type;
}

AMateria::AMateria(const AMateria &copy) {
    *this = copy;
}

AMateria &AMateria::operator=(const AMateria &copy) {
    if (this != &copy) {
        this->type = copy.type;
    }
    return *this;
}