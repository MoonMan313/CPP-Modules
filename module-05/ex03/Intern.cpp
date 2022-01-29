//
// Created by evelina on 30.10.2021.
//

#include "Intern.hpp"

Intern::Intern() {
    this->forms[0] = new ShrubberyCreationForm("");
    this->forms[1] = new RobotomyRequestForm("");
    this->forms[2] = new PresidentialPardonForm("");
    this->formName[0] = "shrubbery creation";
    this->formName[1] = "robotomy request";
    this->formName[2] = "presidential pardon";
}

Intern::~Intern() {
    for (int i = 0; i < FORM_NUM; i++)
        delete forms[i];
}

Intern &Intern::operator=(const Intern &copy) {
    (void)copy;
    return *this;
}

Intern::Intern(const Intern &copy) {
    *this = copy;
}

Form *Intern::makeForm(const std::string &name, std::string target) {
    for (int i = 0; i < FORM_NUM; i++)
        if (formName[i] == name) {
            std::cout << "Intern creates " + name << std::endl;
            return forms[i]->clone(target);
        }
    std::cout << RED "Error: form " << name << " not found." RESET << std::endl;
    return NULL;
}
