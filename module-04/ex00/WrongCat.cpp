//
// Created by evelina on 26.10.2021.
//

#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal("wrong cat") {
    std::cout << BLUE "The CAT came up to you." RESET << std::endl;
}

WrongCat::~WrongCat() {
    std::cout << BLUE "The cat has left you." RESET << std::endl;
}

void WrongCat::makeSound(void) const {
    std::cout << BLUE "Wrong: Meeeeeeeow" RESET << std::endl;
}

WrongCat::WrongCat(const WrongCat &copy) {
    *this = copy;
}

WrongCat& WrongCat::operator=(const WrongCat &copy) {
    if (this != &copy) {
        this->WrongAnimal::operator=(copy);
    }
    return *this;
}

