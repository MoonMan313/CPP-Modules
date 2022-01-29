//
// Created by evelina on 28.10.2021.
//

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : name("Visitant"), grade(150) {
    std::cout << PURPLE "*Constructor Bureaucrat*" RESET << std::endl;
}

Bureaucrat::Bureaucrat(const std::string &name, int grade) : name(name), grade(grade) {
    if (grade < max_grade)
        throw GradeTooHighException();
    if (grade > min_grade)
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
    if (grade - 1 < max_grade)
        throw GradeTooHighException();
    grade--;
}

void Bureaucrat::decrement() {
    std::cout << YELLOW "-----decrement function called-----" RESET << std::endl;
    if (grade + 1 > min_grade)
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

