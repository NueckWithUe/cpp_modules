#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main(void)
{
	ShrubberyCreationForm shrubbery("Jens");
	Bureaucrat tom("Tom", 2);

	tom.executeForm(shrubbery);
	tom.signForm(shrubbery);
	tom.executeForm(shrubbery);

	return (0);
}