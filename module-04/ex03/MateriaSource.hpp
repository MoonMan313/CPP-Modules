//
// Created by evelina on 27.10.2021.
//

#ifndef EX03_MATERIASOURCE_HPP
#define EX03_MATERIASOURCE_HPP

#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource {
private:
    static const int materia_num = 4;
    AMateria *invent[materia_num];
    int limit;
public:
    MateriaSource();
    MateriaSource(const MateriaSource & copy);
    MateriaSource & operator=(const MateriaSource & copy);
    virtual ~MateriaSource();

    void learnMateria(AMateria *materia);

    AMateria *createMateria(const std::string &type);
};


#endif //EX03_MATERIASOURCE_HPP
