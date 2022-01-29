#include <iostream>

#include "Bureaucrat.hpp"

int main() {
    try {
        Bureaucrat a("Stella", 2);
        std::cout << a << std::endl;
        a.increment();
        std::cout << a << std::endl;
        a.decrement();
        std::cout << a << std::endl;
    }
    catch (std::exception &ex) {
        std::cout << RED ex.what() RESET << std::endl;
    }
    std::cout << std::endl;
    try {
        Bureaucrat b("Bloom", 1);
        std::cout << b << std::endl;
        b.increment();
        std::cout << b << std::endl;
    }
    catch (std::exception &ex) {
        std::cout << RED ex.what() RESET << std::endl;
    }
    std::cout << std::endl;
    try {
        Bureaucrat c("Flora", 150);
        std::cout << c << std::endl;
        c.decrement();
        std::cout << c << std::endl;
    }
    catch (std::exception &ex) {
        std::cout << RED ex.what() RESET << std::endl;
    }
    return 0;
}
