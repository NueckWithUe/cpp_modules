#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string target) : AForm("PresidentialPardonForm", 25, 5)
{
	_Target = target;
}

PresidentialPardonForm::PresidentialPardonForm(std::string name, std::string target) : AForm(name, 25, 5)
{
	_Target = target;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& obj) : AForm(obj)
{
	_Target = obj._Target;
}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm& obj)
{
	if (this != &obj)
	{
		this->_Target = obj._Target;
	}
	return *this;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
}

void PresidentialPardonForm::executeConcrete() const
{
	std::cout << _Target << " has been pardoned by Zaphod Beeblebrox." << std::endl;
}