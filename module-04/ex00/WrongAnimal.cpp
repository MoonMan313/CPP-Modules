//
// Created by evelina on 26.10.2021.
//

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(const std::string &type) : type(type) {
    std::cout << RED "New Wrong animal!" RESET << std::endl;
}

WrongAnimal::WrongAnimal() {
    std::cout << RED "New Wrong animal!" RESET << std::endl;
}

WrongAnimal::~WrongAnimal() {
    std::cout << RED "This Wrong animal is not visible anymore." RESET << std::endl;
}

const std::string &WrongAnimal::getType() const {
    return type;
}

void WrongAnimal::makeSound() const {
    std::cout << RED "Wrong: aaaaaaaaaaaa" RESET << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &copy) {
    *this = copy;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal &copy) {
    if (this != &copy) {
        this->type = copy.type;
    }
    return *this;
}
