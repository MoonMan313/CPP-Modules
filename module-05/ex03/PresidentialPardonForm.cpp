//
// Created by evelina on 30.10.2021.
//

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(const std::string &target) :
Form("Presidential Pardon", 25, 5), target(target) {}

PresidentialPardonForm::~PresidentialPardonForm() {

}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &copy) {
    *this = copy;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &copy) {
    this->target = copy.target;
    return *this;
}

void PresidentialPardonForm::executeAction() const {
    std::cout << this->target << " has been pardoned by Zafod Beeblebrox" << std::endl;
}

Form *PresidentialPardonForm::clone(std::string &target) const {
    return new PresidentialPardonForm(target);
}
