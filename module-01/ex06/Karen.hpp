//
// Created by evelina on 17.10.2021.
//

#ifndef EX06_KAREN_HPP
#define EX06_KAREN_HPP

#include <iostream>

class Karen {
private:
    void debug(void);

    void info(void);

    void warning(void);

    void error(void);

    void (Karen::*pointer_function[4])(void);

    std::string name_function[4];

public:
    void complain(std::string level);

    Karen();
};

#endif //EX06_KAREN_HPP
