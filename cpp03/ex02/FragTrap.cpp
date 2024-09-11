#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
	std::cout << "FragTrap default Constructor called" << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	std::cout << "FragTrap parameterized constructor called" << std::endl;
}

FragTrap::FragTrap(const FragTrap& obj) : ClapTrap(obj)
{
	std::cout << "FragTrap copy constructor called" << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap& obj)
{
	std::cout << "FragTrap assignment overload called" << std::endl;
	if (this != &obj)
	{
		ClapTrap::operator=(obj);
	}
	return (*this);
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap destructor called" << std::endl;
}

void FragTrap::highFivesGuys(void)
{
	std::cout << "FragTrap requested a high five" << std::endl;
}