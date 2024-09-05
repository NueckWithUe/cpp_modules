#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
	std::cout << "Deafult ScavTrap constructor called." << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	std::cout << "ScavTrap constructor called." << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& obj) : ClapTrap(obj)
{
	std::cout << "ScavTrap copy constructor called." << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap destructor called." << std::endl;
}

void ScavTrap::guardGate()
{
	std::cout << "ScavTrap is now in Gatekeeper mode." << std::endl;
}

void ScavTrap::attack(const std::string& target)
{
	if (!getHitPoints())
	{
		std::cout << getName() << " has no hitpoints left." << std::endl;
		return ;
	}
	if (!getEnergyPoints())
	{
		std::cout << getName() << " has no energypoints left." << std::endl;
		return ;
	}


	std::cout << "ScavTrap " << getName() << " attacks " << target << ", causing " << getAttackDamage() << " points of damage!" << std::endl;
	setEnergyPoints(getEnergyPoints() - 1);
}