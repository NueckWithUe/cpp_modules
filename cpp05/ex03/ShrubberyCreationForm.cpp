#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm("ShrubberyCreationForm", 145, 137)
{
	_Target = target;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string name, std::string target) : AForm(name, 145, 137)
{
	_Target = target;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& obj) : AForm(obj)
{
	_Target = obj._Target;
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& obj)
{
	this->_Target = obj._Target;
	return *this;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}

void ShrubberyCreationForm::executeConcrete() const
{
	std::string name = _Target;
	name = name.append("_shrubbery");
	std::ofstream file(name);
	file << "  /\\\n" << " /  \\\n" << "/____\\\n" << "  ||\n" << "  ||" << std::endl;
	file.close();
}