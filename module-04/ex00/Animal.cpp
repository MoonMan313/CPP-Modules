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

const std::string &Animal::getType() const {
    return type;
}

Animal::Animal() : type("NULL"){
    std::cout << YELLOW "New animal!" RESET << std::endl;
}

void Animal::makeSound( void ) const {
	std::cout << "AAAAAAAAAAAAA" << std::endl;
}

Animal::Animal(const Animal &copy) {
    *this = copy;
}

Animal& Animal::operator=(const Animal &copy) {
    if (this != &copy) {
        this->type = copy.type;
    }
    return *this;
}
