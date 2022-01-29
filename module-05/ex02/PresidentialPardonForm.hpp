//
// Created by evelina on 30.10.2021.
//

#ifndef EX02_PRESIDENTIALPARDONFORM_HPP
#define EX02_PRESIDENTIALPARDONFORM_HPP


#include "Form.hpp"

class PresidentialPardonForm : public Form {
private:
    std::string target;
public:
    PresidentialPardonForm(const std::string &target);
    virtual ~PresidentialPardonForm();
    PresidentialPardonForm(const PresidentialPardonForm &copy);
    PresidentialPardonForm &operator=(const PresidentialPardonForm &copy);

    void executeAction() const;
};


#endif //EX02_PRESIDENTIALPARDONFORM_HPP
