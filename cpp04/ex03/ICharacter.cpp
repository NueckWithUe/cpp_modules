#include "ICharacter.hpp"

ICharacter::ICharacter()
{
	std::cout << "ICharacter default constructor called" << std::endl;
}

ICharacter::ICharacter(std::string Name)
{
	std::cout << "ICharacter parameterized constructor called" << std::endl;
	name = Name;
}

ICharacter::ICharacter(const ICharacter& obj)
{
	std::cout << "ICharacter copy contructor called" << std::endl;
	name = obj.name;
}

ICharacter& ICharacter::operator=(const ICharacter& obj)
{
	if (this != &obj)
	{
		name = obj.name;
	}
	return (*this);
}

ICharacter::~ICharacter()
{
	std::cout << "ICharacter destructor called" << std::endl;
}

std::string ICharacter::getName()
{
	return (name);
}