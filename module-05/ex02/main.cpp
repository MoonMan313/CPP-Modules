#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main() {
    Bureaucrat a("Stella", 1);
    Bureaucrat b("Bloom", 150);

    ShrubberyCreationForm f1 = ShrubberyCreationForm("f1");
    RobotomyRequestForm f2 = RobotomyRequestForm("f2");
    PresidentialPardonForm f3 = PresidentialPardonForm("f3");

    a.signForm(f2);
    a.signForm(f3);
    try {
        std::cout << a << std::endl;
        std::cout << f1 << std::endl;
        a.executeForm(f1);
        std::cout << f1 << std::endl;
    }
    catch (std::exception &ex) {
        std::cout << RED ex.what() RESET << std::endl;
    }
    a.signForm(f1);
    std::cout << std::endl;
    try {
        std::cout << b << std::endl;
        std::cout << f2 << std::endl;
        f2.execute(b);
        std::cout << f2 << std::endl;
    }
    catch (std::exception &ex) {
        std::cout << RED ex.what() RESET << std::endl;
    }
    std::cout << std::endl;
    try {
        std::cout << b << std::endl;
        std::cout << f3 << std::endl;
        b.executeForm(f3);
        std::cout << f3 << std::endl;
    }
    catch (std::exception &ex) {
        std::cout << RED ex.what() RESET << std::endl;
    }
    try {
        std::cout << a << std::endl;
        std::cout << f1 << std::endl;
        a.executeForm(f1);
        std::cout << f1 << std::endl;
    }
    catch (std::exception &ex) {
        std::cout << RED ex.what() RESET << std::endl;
    }
    std::cout << std::endl;
    try {
        std::cout << a << std::endl;
        std::cout << f2 << std::endl;
        f2.execute(a);
        std::cout << f2 << std::endl;
    }
    catch (std::exception &ex) {
        std::cout << RED ex.what() RESET << std::endl;
    }
    std::cout << std::endl;
    try {
        std::cout << a << std::endl;
        std::cout << f3 << std::endl;
        a.executeForm(f3);
        std::cout << f3 << std::endl;
    }
    catch (std::exception &ex) {
        std::cout << RED ex.what() RESET << std::endl;
    }
    return 0;
}
