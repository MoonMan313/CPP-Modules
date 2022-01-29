//
// Created by evelina on 28.10.2021.
//

#ifndef EX00_BUREAUCRAT_HPP
#define EX00_BUREAUCRAT_HPP

#define PURPLE                  "\e[35m" <<
#define BLUE                    "\e[34m" <<
#define GREEN                   "\e[32m" <<
#define CYAN                    "\e[36m" <<
#define RED                     "\e[31m" <<
#define YELLOW                  "\e[33m" <<
#define RESET                   << "\e[0m"

#include <string>
#include <iostream>
#include <cstdlib>

#define MAX_GRADE 1
#define MIN_GRADE 150

class Form;

class Bureaucrat {
private:
    std::string const name;
    int grade;
public:
    Bureaucrat();
    Bureaucrat(const std::string &name, int grade);
    Bureaucrat(const Bureaucrat &copy);
    Bureaucrat & operator=(const Bureaucrat &copy);
    virtual ~Bureaucrat();

    const std::string &getName() const;
    int getGrade() const;

    void signForm(Form &form);

    void decrement();
    void increment();

    void executeForm(Form const &form);

    class GradeTooHighException : public std::exception {
    public:
        virtual char const *what() const throw();
    };
    class GradeTooLowException : public std::exception {
    public:
        virtual char const *what() const throw();
    };

};

std::ostream &operator<<(std::ostream &os, const Bureaucrat &bureaucrat);

#include "Form.hpp"

#endif //EX00_BUREAUCRAT_HPP
