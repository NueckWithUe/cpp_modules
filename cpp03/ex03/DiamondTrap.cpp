#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : FragTrap(), ScavTrap()
{

}

DiamondTrap::DiamondTrap(std::string name) : FragTrap(name), ScavTrap(name)
{
	Name = name;
}

DiamondTrap::DiamondTrap(const DiamondTrap& obj) : FragTrap(obj), ScavTrap(obj)
{
	Name = obj.Name;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap& obj)
{
	if (this != &obj)
	{
		ClapTrap::operator=(obj);
	}
	return (*this);
}

DiamondTrap::~DiamondTrap()
{

}

void DiamondTrap::whoAmI()
{
	std::cout << "I'm me" << std::endl;
}