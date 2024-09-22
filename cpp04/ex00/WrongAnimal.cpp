#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	std::cout << "WrongAnimal default constructor called." << std::endl;
	type = "WrongAnimal";
}

WrongAnimal::WrongAnimal(const WrongAnimal& obj)
{
	std::cout << "WrongAnimal copy constructor called." << std::endl;
	type = obj.type;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& obj)
{
	std::cout << "WrongAnimal copy assignment constructor called" << std::endl;
	if (this != &obj)
		type = obj.type;
	return *this;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal destructor called." << std::endl;
}

void WrongAnimal::makeSound()
{
	std::cout << "* generic animal sounds *" << std::endl;
}

std::string WrongAnimal::getType(void)
{
	return (type);
}