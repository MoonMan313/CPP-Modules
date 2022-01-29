//
// Created by evelina on 26.10.2021.
//

#include "Brain.hpp"

Brain::Brain() {
    std::cout << GREEN "New brain!!!" RESET << std::endl;
}

Brain::~Brain() {
    std::cout << GREEN "The brain has disappeared!" RESET << std::endl;
}

Brain &Brain::operator=(const Brain &copy) {
    std::cout << GREEN "Copy bain." RESET << std::endl;
    for(int i = 0; i < this->count ; i++)
        this->ideas[i] = copy.ideas[i];
    return *this;
}

Brain::Brain(const Brain &copy) {
    *this = copy;
}