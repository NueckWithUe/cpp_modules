#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain constructor called" << std::endl;
}

Brain::Brain(const Brain& obj)
{
	std::cout << "Brain copy constructor called" << std::endl;
	*this = obj;
}

Brain& Brain::operator=(const Brain& obj)
{
	std::cout << "Brain copy assignment constructor called" << std::endl;
	if (this != &obj)
	{
		for (int n = 0; n <= 99; n++)
			if (this->ideas[n] != obj.ideas[n])
				this->ideas[n] = obj.ideas[n];
	}
	return (*this);
}

Brain::~Brain()
{
	std::cout << "Brain destructor called" << std::endl;
}

void Brain::setIdea(std::string idea)
{
	for (int i = 0; i < 100; i++)
	{
		if (this->ideas[i].empty())
		{
			this->ideas[i] = idea;
			break ;
		}
	}
}

void Brain::printIdeas()
{
	for (int i = 0; i < 100; i++)
	{
		if (!this->ideas[i].empty())
			std::cout << this->ideas[i] << std::endl;
	}
}