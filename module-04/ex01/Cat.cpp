//
// Created by evelina on 25.10.2021.
//

#include "Cat.hpp"

Cat::Cat() : Animal("cat") {
    this->brain = new Brain();
    std::cout << PURPLE "The CAT came up to you." RESET << std::endl;
}

Cat::~Cat() {
    delete this->brain;
    std::cout << PURPLE "The cat has left you." RESET << std::endl;
}

void Cat::makeSound(void) const {
    std::cout << PURPLE "Meeeeeeeow" RESET << std::endl;
}

Brain *Cat::getBrain() const {
    return brain;
}

Cat::Cat(const Cat &copy) {
    *this = copy;
}

Cat& Cat::operator=(const Cat &copy) {
    if (this != &copy) {
        std::cout << "Cloning cat..." << std::endl;
        this->Animal::operator=(copy);
        *brain = *copy.brain;
    }
    return *this;
}