//
// Created by evelina on 29.10.2021.
//

#include "Form.hpp"

Form::Form() : name("draft"),
               grade_signed(MIN_GRADE), grade_execute(MAX_GRADE),  is_signed(false){
    std::cout <<  CYAN "*Constructor Form*" RESET << std::endl;
}

Form::Form(const std::string &name, const int gradeSigned, const int gradeExecute) : name(name),
grade_signed(gradeSigned), grade_execute(gradeExecute),  is_signed(false) {
    if (grade_signed > MIN_GRADE || grade_execute > MIN_GRADE)
        throw GradeTooLowException();
    if (grade_signed < MAX_GRADE || grade_execute < MAX_GRADE)
        throw GradeTooHighException();
    std::cout << CYAN "*Constructor Form*" RESET << std::endl;
}

Form::~Form() {
    std::cout << CYAN "*Destructor Form*" RESET << std::endl;
}

Form::Form(const Form &copy) : name("draft"),
grade_signed(MIN_GRADE), grade_execute(MAX_GRADE),  is_signed(false) {
    *this = copy;
}

Form &Form::operator=(const Form &copy) {
    this->is_signed = copy.getIsSigned();
    return *this;
}

const std::string &Form::getName() const {
    return name;
}

bool Form::getIsSigned() const {
    return is_signed;
}

int Form::getGradeSigned() const {
    return grade_signed;
}

int Form::getGradeExecute() const {
    return grade_execute;
}

void Form::beSigned(const Bureaucrat &bureaucrat) {
    if (bureaucrat.getGrade() > grade_signed)
        throw GradeTooLowException();
    else {
        is_signed = true;
        std::cout << GREEN "Form " << this->getName()
        << " is signed by bureaucrat " << bureaucrat.getName() RESET << std::endl;
    }
}

void Form::execute(const Bureaucrat &executor) const {
    if (!this->is_signed)
        throw NotSigned();
    if (executor.getGrade() > this->grade_execute) {
        throw GradeTooLowException();
    }
    executeAction();
}

char const *Form::GradeTooHighException::what() const throw() {
    return "Grade is too high!!!";
}

char const *Form::GradeTooLowException::what() const throw() {
    return "Grade is too low!!!";
}

const char *Form::NotSigned::what() const throw() {
    return "The form has not been signed yet!";
}

std::ostream &operator<<(std::ostream &os, const Form &form) {
    if (form.getIsSigned())
        os << GREEN "Signed form " + form.getName() << ", sign grade " << form.getGradeSigned()
        << ", execute grade " << form.getGradeExecute() RESET << std::endl;
    else
        os << GREEN "Unsigned form " + form.getName() << ", sign grade " << form.getGradeSigned()
        << ", execute grade " << form.getGradeExecute() RESET << std::endl;
    return os;
}

