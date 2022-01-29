//
// Created by evelina on 30.10.2021.
//

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(const std::string &target)
: Form("Robotomy Request", 72, 45), target(target) {}

RobotomyRequestForm::~RobotomyRequestForm() {}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &copy) {
    *this = copy;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &copy) {
    this->target = copy.target;
    return *this;
}

void RobotomyRequestForm::executeAction() const {
    if (rand() % 2 == 1)
    {
        std::cout << target << "  has been robotomized - successfully" << std::endl;
    } else
        std::cout << target << " wasn't robotomized - failure" << std::endl;
}

Form *RobotomyRequestForm::clone(std::string &target) const {
    return new RobotomyRequestForm(target);
}
