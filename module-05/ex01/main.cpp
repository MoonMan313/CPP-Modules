#include <iostream>

#include "Bureaucrat.hpp"

int main() {
    try {
        Bureaucrat a("Stella", 2);
        Form x("№9", 10, 150);
        std::cout << a << std::endl;
        std::cout << x << std::endl;
        a.signForm(x);
        std::cout << a << std::endl;
        std::cout << x << std::endl;
    }
    catch (std::exception &ex) {
        std::cout << RED ex.what() RESET << std::endl;
    }
    std::cout << std::endl;
    try {
        Bureaucrat b("Bloom", 100);
        Form y("F-5", 40, 80);
        std::cout << b << std::endl;
        std::cout << y << std::endl;
        b.signForm(y);
        y.beSigned(b);
        std::cout << b << std::endl;
        std::cout << y << std::endl;
    }
    catch (std::exception &ex) {
        std::cout << RED ex.what() RESET << std::endl;
    }
    std::cout << std::endl;
    try {
        Bureaucrat c("Flora", 150);
        Form z("G-188", 10, 50);
        std::cout << c << std::endl;
        std::cout << z << std::endl;
        c.signForm(z);
        std::cout << c << std::endl;
        std::cout << z << std::endl;
    }
    catch (std::exception &ex) {
        std::cout << RED ex.what() RESET << std::endl;
    }
    return 0;
}
