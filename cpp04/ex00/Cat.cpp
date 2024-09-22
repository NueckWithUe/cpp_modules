#include "Cat.hpp"

Cat::Cat() : Animal()
{
	std::cout << "Cat default constructor called" << std::endl;
	type = "Cat";
}

Cat::Cat(const Cat& obj) : Animal(obj)
{
	std::cout << "Cat copy constructor called" << std::endl;
}

Cat& Cat::operator=(const Cat& obj)
{
	std::cout << "Cat copy assignment constructor called" << std::endl;
	if (this != &obj)
		Animal::operator=(obj);
	return (*this);
}

Cat::~Cat()
{
	std::cout << "Cat desructor called" << std::endl;
}

void Cat::makeSound(void) const
{
	std::cout << "* meow *" << std::endl;
}