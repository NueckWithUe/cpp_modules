#pragma once
#ifndef DIAMONDTRAP_H
# define DIAMONDTRAP_H

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap : public ClapTrap, public ScavTrap
{
private:
	std::string Name;

public:
	DiamondTrap();
	DiamondTrap(std::string name);
	DiamondTrap(const DiamondTrap& obj);
	~DiamondTrap();

	void whoAmI();
};

#endif