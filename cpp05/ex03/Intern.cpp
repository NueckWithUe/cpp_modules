#include "Intern.hpp"

Intern::Intern()
{
}

Intern::Intern(const Intern& obj)
{
	(void)obj;
}

Intern& Intern::operator=(const Intern& obj)
{
	if (this != &obj)
	{}
	return *this;
}

Intern::~Intern()
{
}

AForm* Intern::makeForm(std::string formName, std::string formTarget)
{
	AForm* form;

	if (formName == "rrf" || formName == "robotomy request" || formName == "RobotomyRequest")
		form = new RobotomyRequestForm(formName, formTarget);
	else if (formName == "scf" || formName == "shrubbery creation" || formName == "ShrubberyCreation")
		form = new ShrubberyCreationForm(formName, formTarget);
	else if(formName == "ppf" || formName == "presidential pardon" || formName == "PresidentialPardon")
		form = new PresidentialPardonForm(formName, formTarget);
	else
	{
		std::cout << "Form " << formName << " could not be created" << std::endl;
		form = new AForm;
		return (form);
	}
	std::cout << "Intern created " << *form << std::endl;
	return (form);
}