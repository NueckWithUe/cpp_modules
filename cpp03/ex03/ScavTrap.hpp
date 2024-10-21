#pragma once
#ifndef SCAVTRAP_H
# define SCAVTRAP_H

#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap
{
private:

public:
	ScavTrap();
	ScavTrap(std::string name);
	ScavTrap(const ScavTrap& obj);
	ScavTrap& operator=(const ScavTrap& obj);
	~ScavTrap();

	void guardGate();
	void attack(const std::string& target);
};

#endif