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
		form = new RobotomyRequestForm(formTarget);

	return (form);
}