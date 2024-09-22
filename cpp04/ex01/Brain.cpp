#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain constructor called" << std::endl;
	for (int n = 0; n <= 99; n++)
		ideas[n] = n;
}

Brain::Brain(const Brain& obj)
{
	std::cout << "Brain copy constructor called" << std::endl;
	for (int n = 0; n <= 99; n++)
		ideas[n] = obj.ideas[n];
}

Brain& Brain::operator=(const Brain& obj)
{
	std::cout << "Brain copy assignment constructor called" << std::endl;
	if (this != &obj)
	{
		for (int n = 0; n <= 99; n++)
			ideas[n] = obj.ideas[n];
	}
	return (*this);
}

Brain::~Brain()
{
	std::cout << "Brain destructor called" << std::endl;
}