#pragma once

#include <iostream>
#include <string>

#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

class Intern
{
public:
	Intern();
	Intern(const Intern& obj);
	Intern& operator=(const Intern& obj);
	~Intern();

	AForm* makeForm(std::string formName, std::string formTarget);
};