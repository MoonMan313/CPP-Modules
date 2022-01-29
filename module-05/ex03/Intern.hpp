//
// Created by evelina on 30.10.2021.
//

#ifndef EX03_INTERN_HPP
#define EX03_INTERN_HPP

#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

#define FORM_NUM 3

class Intern {
private:
    std::string formName[FORM_NUM];
    Form *forms[3];
public:
    Intern();
    Intern(const Intern &copy);
    Intern &operator=(const Intern &copy);
    virtual ~Intern();

    Form *makeForm(const std::string &name, std::string target);
};


#endif //EX03_INTERN_HPP
