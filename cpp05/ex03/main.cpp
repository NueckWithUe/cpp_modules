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
	std::cout << std::endl;

	tom.signForm(*rrf);
	std::cout << std::endl;

	std::cout << *rrf << std::endl;
	std::cout << std::endl;

	tom.executeForm(*rrf);
	std::cout << std::endl;

	delete rrf;
	return (0);
}