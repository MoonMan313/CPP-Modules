//
// Created by evelina on 30.10.2021.
//

#ifndef EX02_SHRUBBERYCREATIONFORM_HPP
#define EX02_SHRUBBERYCREATIONFORM_HPP

#include "Form.hpp"

class ShrubberyCreationForm : public Form{
private:
    std::string target;
public:
    ShrubberyCreationForm(const std::string &target);
    virtual ~ShrubberyCreationForm();
    ShrubberyCreationForm(const ShrubberyCreationForm &copy);
    ShrubberyCreationForm & operator=(const ShrubberyCreationForm &copy);

    void executeAction() const;

    Form *clone(std::string &target) const;
};


#endif //EX02_SHRUBBERYCREATIONFORM_HPP
