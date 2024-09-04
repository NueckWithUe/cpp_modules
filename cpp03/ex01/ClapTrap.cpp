#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	std::cout << "Default ClapTrap constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name)
{
	std::cout << "ClapTrap constructor called" << std::endl;
	Name = name;
	HitPoints = 100;
	EnergyPoints = 50;
	AttackDamage = 20;
}

ClapTrap::ClapTrap(const ClapTrap& obj)
{
	std::cout << "ClapTrap copy constructor called" << std::endl;
	Name = obj.Name;
	HitPoints = obj.HitPoints;
	EnergyPoints = obj.HitPoints;
	AttackDamage = obj.AttackDamage;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap destructor called" << std::endl;
}

void ClapTrap::attack(const std::string& target)
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


	std::cout << "ClapTrap " << Name << " attacks " << target << ", causing " << AttackDamage << " points of damage!" << std::endl;
	EnergyPoints--;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << "ClapTrap " << Name << " took " << amount << " points of damage!" << std::endl;
	HitPoints -= amount;
	if (HitPoints <= 0)
		std::cout << "ClapTrap " << Name << " fainted." << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
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
	HitPoints += amount;
	std::cout << "ClapTrap " << Name << " repaired itself by " << amount << " points of hitpoints!" << std::endl;
	EnergyPoints--;
}