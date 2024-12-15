#pragma once

#include "AForm.hpp"

class RobotomyRequestForm : public AForm
{
private:
	std::string _Target;
public:
	RobotomyRequestForm(std::string target);
	RobotomyRequestForm(const RobotomyRequestForm& obj);
	RobotomyRequestForm& operator=(const RobotomyRequestForm& obj);
	~RobotomyRequestForm();

	void executeConcrete() const;
};