//
// Created by evelina on 29.10.2021.
//

#ifndef EX01_FORM_HPP
#define EX01_FORM_HPP

#include "Bureaucrat.hpp"
#include <string>

class Form {
private:
    const std::string name;
    int const grade_signed;
    int const grade_execute;
    bool is_signed;
public:
    Form();
    Form(const std::string &name, const int gradeSigned, const int gradeExecute);
    virtual ~Form();
    Form(const Form &copy);
    Form & operator=(const Form &copy);

    const std::string &getName() const;
    bool getIsSigned() const;
    int getGradeSigned() const;
    int getGradeExecute() const;

    virtual void execute(Bureaucrat const &executor) const;
    virtual void executeAction() const = 0;

    void beSigned( const Bureaucrat &bureaucrat );

    class GradeTooHighException : public std::exception {
    public:
        virtual char const *what() const throw();
    };
    class GradeTooLowException : public std::exception {
    public:
        virtual char const *what() const throw();
    };
    class NotSigned : public std::exception {
    public:
        virtual const char* what() const throw();
    };
};

std::ostream &operator<<(std::ostream &os, const Form &form);

#endif //EX01_FORM_HPP
