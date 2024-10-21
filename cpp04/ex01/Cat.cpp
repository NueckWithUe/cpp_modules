#include "Cat.hpp"

Cat::Cat() : Animal()
{
	std::cout << "Cat default constructor called" << std::endl;
	type = "Cat";
	brain = new Brain();
}

Cat::Cat(const Cat& obj) : Animal(obj)
{
	std::cout << "Cat copy constructor called" << std::endl;
	this->brain = new Brain(*(obj.brain));
}

Cat& Cat::operator=(const Cat& obj)
{
	std::cout << "Cat copy assignment constructor called" << std::endl;
	if (this != &obj)
	{
		*brain = *(obj.brain);
		Animal::operator=(obj);
	}
	return (*this);
}

Cat::~Cat()
{
	std::cout << "Cat desructor called" << std::endl;
	delete brain;
}

void Cat::makeSound(void) const
{
	std::cout << "* meow *" << std::endl;
}

void Cat::haveIdea(std::string idea)
{
	this->brain->setIdea(idea);
}

void Cat::printIdeas()
{
	this->brain->printIdeas();
}