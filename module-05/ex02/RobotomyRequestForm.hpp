//
// Created by evelina on 30.10.2021.
//

#ifndef EX02_ROBOTOMYREQUESTFORM_HPP
#define EX02_ROBOTOMYREQUESTFORM_HPP


#include "Form.hpp"

class RobotomyRequestForm : public Form
{
private:
    std::string target;

public:
    RobotomyRequestForm(const std::string &target);
    virtual ~RobotomyRequestForm();
    RobotomyRequestForm(const RobotomyRequestForm &copy);
    RobotomyRequestForm & operator=(const RobotomyRequestForm &copy);

    void executeAction() const;
};


#endif //EX02_ROBOTOMYREQUESTFORM_HPP
