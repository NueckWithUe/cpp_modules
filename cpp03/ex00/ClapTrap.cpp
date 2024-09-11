#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	std::cout << "Default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name)
{
	std::cout << "Constructor called" << std::endl;
	Name = name;
	HitPoints = 10;
	EnergyPoints = 10;
	AttackDamage = 0;
}

ClapTrap::ClapTrap(const ClapTrap& obj)
{
	std::cout << "Copy constructor called" << std::endl;
	Name = obj.Name;
	HitPoints = obj.HitPoints;
	EnergyPoints = obj.HitPoints;
	AttackDamage = obj.AttackDamage;
}

ClapTrap& ClapTrap::operator=(const ClapTrap &obj)
{
	std::cout << "ClapTrap copy assignment constructor called" << std::endl;
	if (this != &obj)
	{
		Name = obj.Name;
		HitPoints = obj.HitPoints;
		EnergyPoints = obj.EnergyPoints;
		AttackDamage = obj.AttackDamage;
	}
	return *this;
}

ClapTrap::~ClapTrap()
{
	std::cout << "Destructor called" << std::endl;
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