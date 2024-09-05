#include "Animal.hpp"

Animal::Animal()
{
	std::cout << "Animal default constructor called." << std::endl;
}

Animal::Animal(const Animal& obj)
{
	std::cout << "Animal copy constructor called." << std::endl;
}

Animal::~Animal()
{
	std::cout << "Animal destructor called." << std::endl;
}

void Animal::makeSound()
{
	std::cout << "Animal." << std::endl;
}

std::string Animal::getType(void)
{
	return (type);
}