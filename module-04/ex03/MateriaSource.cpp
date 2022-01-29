//
// Created by evelina on 27.10.2021.
//

#include "MateriaSource.hpp"

MateriaSource::MateriaSource() : limit(0) {
    std::cout << GREEN "Materia Source constructor" RESET << std::endl;
}

MateriaSource::~MateriaSource() {
    for (int i = 0; i < materia_num; i++) {
        if (this->invent[i])
            delete this->invent[i];
    }
    std::cout << GREEN "Materia Source destructor" RESET << std::endl;
}

void MateriaSource::learnMateria(AMateria *materia) {
    if ((limit + 1) != materia_num) {
        invent[limit] = materia;
        limit++;
    } else
        std::cout << GREEN "inventory is full." RESET << std::endl;
}

AMateria *MateriaSource::createMateria(const std::string &type) {
    for (int i = 0; i <= limit; i++) {
        if (invent[i]->getType() == type) {
            std::cout << std::endl;
            return invent[i]->clone();
        }
    }
    return NULL;
}

MateriaSource::MateriaSource(const MateriaSource &copy) {
    *this = copy;
}

MateriaSource &MateriaSource::operator=(const MateriaSource &copy) {
    if (this != &copy) {
        this->limit = copy.limit;

        for (int i = 0; i < limit; i++) {
            delete invent[i];
            invent[i] = copy.invent[i]->clone();
        }
    }
    return *this;
}
