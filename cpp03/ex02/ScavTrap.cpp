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

ScavTrap& ScavTrap::operator=(const ScavTrap &obj)
{
	std::cout << "ScavTrap copy assignment constructor called" << std::endl;
	if (this != &obj)
	{
		ClapTrap::operator=(obj);
	}
	return (*this);
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap destructor called." << std::endl;
}

void ScavTrap::guardGate()
{
	std::cout << "ScavTrap " << Name << " is now in Gatekeeper mode." << std::endl;
}

void ScavTrap::attack(const std::string& target)
{
	if (!HitPoints)
	{
		std::cout << Name << " has no hitpoints left." << std::endl;
		return ;
	}
	if (!EnergyPoints)
	{
		std::cout << Name << " has no energypoints left." << std::endl;
		return ;
	}


	std::cout << "ScavTrap " << Name << " attacks " << target << ", causing " << AttackDamage << " points of damage!" << std::endl;
	EnergyPoints--;
}