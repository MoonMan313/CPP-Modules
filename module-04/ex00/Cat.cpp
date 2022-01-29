//
// Created by evelina on 25.10.2021.
//

#include "Cat.hpp"

Cat::Cat() : Animal("cat") {
    std::cout << PURPLE "The CAT came up to you." RESET << std::endl;
}

Cat::~Cat() {
    std::cout << PURPLE "The cat has left you." RESET << std::endl;
}

void Cat::makeSound(void) const {
    std::cout << PURPLE "Meeeeeeeow" RESET << std::endl;
}

Cat::Cat(const Cat &copy) {
    *this = copy;
}

Cat& Cat::operator=(const Cat &copy) {
    if (this != &copy) {
        this->Animal::operator=(copy);
    }
    return *this;
}