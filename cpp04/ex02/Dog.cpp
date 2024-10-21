#include "Dog.hpp"

Dog::Dog() : Animal()
{
	std::cout << "Dog default constructor called" << std::endl;
	type = "Dog";
	this->brain = new Brain();
}

Dog::Dog(const Dog& obj) : Animal(obj)
{
	std::cout << "Dog copy constructor called" << std::endl;
	this->brain = new Brain(*(obj.brain));
}

Dog& Dog::operator=(const Dog& obj)
{
	std::cout << "Dog copy assignment constructor called" << std::endl;
	if (this != &obj)
	{
		Animal::operator=(obj);
		*brain = *(obj.brain);
	}
	return (*this);
}

Dog::~Dog()
{
	std::cout << "Dog desructor called" << std::endl;
	delete brain;
}

void Dog::makeSound(void) const
{
	std::cout << "* bark *" << std::endl;
}

void Dog::haveIdea(std::string idea)
{
	this->brain->setIdea(idea);
}

void Dog::printIdeas()
{
	this->brain->printIdeas();
}