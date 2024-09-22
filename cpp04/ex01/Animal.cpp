#include "Animal.hpp"

Animal::Animal()
{
	std::cout << "Animal default constructor called." << std::endl;
	type = "Animal";
}

Animal::Animal(const Animal& obj)
{
	std::cout << "Animal copy constructor called." << std::endl;
	type = obj.type;
}

Animal& Animal::operator=(const Animal& obj)
{
	std::cout << "Animal copy assignment constructor called" << std::endl;
	if (this != &obj)
		type = obj.type;
	return *this;
}

Animal::~Animal()
{
	std::cout << "Animal destructor called." << std::endl;
}

void Animal::makeSound() const
{
	std::cout << "* generic animal sounds *" << std::endl;
}

std::string Animal::getType(void) const
{
	return (type);
}