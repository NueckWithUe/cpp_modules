#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm("RobotomyRequestForm", 72, 45)
{
	_Target = target;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& obj) : AForm(obj)
{
	_Target = obj._Target;
}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& obj)
{
	if (this != &obj)
	{
		this->_Target = obj._Target;
	}
	return *this;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
}

void RobotomyRequestForm::executeConcrete() const
{
	std::cout << "* Drilling noise *" << std::endl;
	int rndm = rand() % 2;
	if (rndm)
		std::cout << this->_Target << " has been robotomized successfully" << std::endl;
	else if (!rndm)
		std::cout << "Robotomy failed." << std::endl;
}