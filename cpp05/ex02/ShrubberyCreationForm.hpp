#pragma once

#include <fstream>

#include "AForm.hpp"

class ShrubberyCreationForm : public AForm
{
private:
	std::string _Target;
public:
	ShrubberyCreationForm(std::string target);
	ShrubberyCreationForm(const ShrubberyCreationForm& obj);
	ShrubberyCreationForm& operator=(const ShrubberyCreationForm& obj);
	~ShrubberyCreationForm();

	void executeConcrete() const;
};