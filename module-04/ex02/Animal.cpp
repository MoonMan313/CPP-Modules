//
// Created by evelina on 25.10.2021.
//

#include "Animal.hpp"

Animal::Animal(const std::string &type) : type(type) {
    std::cout << YELLOW "New animal!" RESET << std::endl;
}

Animal::~Animal() {
std::cout << YELLOW "This animal is not visible anymore." RESET << std::endl;
}

Animal::Animal() : type("NULL"){
    std::cout << YELLOW "New animal!" RESET << std::endl;
}

Animal::Animal(const Animal &copy) {
    *this = copy;
}

Animal &Animal::operator=(const Animal &copy) {
    std::cout << YELLOW "Operator copy" RESET << std::endl;
    this->type = copy.getType();
    *(this->getBrain()) = *(copy.getBrain());
    return *this;
}

const std::string &Animal::getType() const {
    return type;
}
