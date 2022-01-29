//
// Created by evelina on 28.10.2021.
//

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : name("Visitant"), grade(MIN_GRADE) {
    std::cout << PURPLE "*Constructor Bureaucrat*" RESET << std::endl;
}

Bureaucrat::Bureaucrat(const std::string &name, int grade) : name(name), grade(grade) {
    if (grade < MAX_GRADE)
        throw GradeTooHighException();
    if (grade > MIN_GRADE)
        throw GradeTooLowException();
    std::cout << PURPLE "*Constructor Bureaucrat*" RESET << std::endl;
}

Bureaucrat::~Bureaucrat() {
    std::cout << PURPLE "*Destructor Bureaucrat*" RESET << std::endl;
}

const std::string &Bureaucrat::getName() const {
    return name;
}

int Bureaucrat::getGrade() const {
    return grade;
}

Bureaucrat::Bureaucrat(const Bureaucrat &copy) {
    *this = copy;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &copy) {
    this->grade = copy.getGrade();
    return *this;
}

void Bureaucrat::increment() {
    std::cout << YELLOW "-----increment function called-----" RESET << std::endl;
    if (grade - 1 < MAX_GRADE)
        throw GradeTooHighException();
    grade--;
}

void Bureaucrat::decrement() {
    std::cout << YELLOW "-----decrement function called-----" RESET << std::endl;
    if (grade + 1 > MIN_GRADE)
        throw GradeTooLowException();
    grade++;
}

char const *Bureaucrat::GradeTooHighException::what() const throw() {
    return "Grade is too high!!!";
}

char const *Bureaucrat::GradeTooLowException::what() const throw() {
    return "Grade is too low!!!";
}

std::ostream &operator<<(std::ostream &os, const Bureaucrat &bureaucrat) {
    os << GREEN bureaucrat.getName() << ",  bureaucrat grade " << bureaucrat.getGrade() RESET << std::endl;
    return os;
}

void Bureaucrat::signForm(Form &form) {
    try {
        if (!form.getIsSigned()) {
            form.beSigned(*this);
            std::cout << YELLOW getName() << " sings " << form.getName() RESET << std::endl;
        } else
            std::cout << YELLOW getName() << " cannot sign " << form.getName()
            << " because form is already signed." RESET << std::endl;
    }
    catch (std::exception &e) {
        std::cout << RED getName() << " cannot sign " << form.getName()
        << " because " << e.what() RESET<< std::endl;
    }
}

void Bureaucrat::executeForm(const Form &form) {
    try {
        form.execute(*this);
        std::cout << this->getName() << " executes " << form.getName() << std::endl;
    } catch (std::exception &ex) {
        std::cout << RED this->getName() << " cannot execute " << form.getName();
        std::cout << " because " << ex.what() RESET << std::endl;
    }
}
