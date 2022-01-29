#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"


int	main(void)
{
	Intern		intern;
	Bureaucrat	a("Stella", 3);
	Form		*form;

	form = intern.makeForm("f-182", "f1");
	if (form)
		delete form;
	form = intern.makeForm("presidential pardon", "f2");
	if (form)
		delete form;
	form = intern.makeForm("shrubbery creation", "f3");
	if (form)
		delete form;
	form = intern.makeForm("robotomy request", "f4");
	form->beSigned(a);
	form->execute(a);
	if (form)
		delete form;
}
