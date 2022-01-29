//
// Created by evelina on 25.10.2021.
//

#include "Dog.hpp"

Dog::Dog() : Animal("dog") {
    this->brain = new Brain();
    std::cout << CYAN "The DOG came up to you." RESET << std::endl;
}

Dog::~Dog() {
    delete this->brain;
    std::cout << CYAN "The DOG has left you." RESET << std::endl;
}

void Dog::makeSound(void) const {
    std::cout << CYAN "Woof woof" RESET << std::endl;
}

Brain *Dog::getBrain() const {
    return brain;
}

Dog::Dog(const Dog &copy) {
    *this = copy;
}

Dog& Dog::operator=(const Dog &copy) {
    if (this != &copy) {
        std::cout << "Cloning dog..." << std::endl;
        this->Animal::operator=(copy);
        *brain = *(copy.brain);
    }
    return *this;
}