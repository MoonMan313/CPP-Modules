//
// Created by evelina on 25.10.2021.
//

#include "Dog.hpp"

Dog::Dog() : Animal("dog") {
    std::cout << CYAN "The DOG came up to you." RESET << std::endl;
}

Dog::~Dog() {
    std::cout << CYAN "The DOG has left you." RESET << std::endl;
}

void Dog::makeSound(void) const {
    std::cout << CYAN "Woof woof" RESET << std::endl;
}

Dog::Dog(const Dog &copy) {
    *this = copy;
}

Dog& Dog::operator=(const Dog &copy) {
    if (this != &copy) {
        this->Animal::operator=(copy);
    }
    return *this;
}
