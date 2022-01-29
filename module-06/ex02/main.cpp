#include <iostream>
#include "Base.hpp"

void identify(Base *p);

void identify(Base &p);

Base *generate(void);

int main() {

    Base *ptr = generate();
    Base &ref = *ptr;

    std::cout << "ptr: ";
    identify(ptr);
    std::cout << "ref: ";
    identify(ref);

    delete ptr;
    return 0;
}
