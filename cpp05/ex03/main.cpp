#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main(void)
{
	Intern someRandomIntern;
	AForm* rrf;
	Bureaucrat tom("Tom", 2);

	rrf = someRandomIntern.makeForm("robotomy request", "Bender");

	tom.signForm(*rrf);

	delete rrf;
	return (0);
}