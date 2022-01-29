//
// Created by evelina on 30.10.2021.
//

#include <cstdlib>
#include <iostream>
#include "Base.hpp"

Base::~Base() {
}

Base *generate(void) {
    switch (rand() % 3) {
        case 0:
            return new A;
            break;
        case 1:
            return new B;
            break;
        case 2:
            return new C;
            break;
        default:
            return 0;
    }
}

void identify(Base *p) {
    if (dynamic_cast<A *>(p)) {
        std::cout << "A" << std::endl;
    } else if (dynamic_cast<B *>(p)) {
        std::cout << "B" << std::endl;
    } else if (dynamic_cast<C *>(p)) {
        std::cout << "C" << std::endl;
    } else {
        std::cout << "Type not recognized" << std::endl;
    }
}

void identify(Base &p) {
    bool flag = false;

    try {
        A &a = dynamic_cast<A &>(p);
        (void)a;
        std::cout << "A" << std::endl;
        flag = true;
    } catch (std::exception &e) {}

    try {
        B &b = dynamic_cast<B &>(p);
        (void)b;
        std::cout << "B" << std::endl;
        flag = true;
    } catch (std::exception &e) {}

    try {
        C &c = dynamic_cast<C &>(p);
        (void)c;
        std::cout << "C" << std::endl;
        flag = true;
    } catch (std::exception &e) {}

    if (!flag)
        std::cout << "Type not recognized" << std::endl;
}