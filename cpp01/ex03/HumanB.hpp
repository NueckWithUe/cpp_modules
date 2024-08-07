#pragma once
#ifndef HUMAN_B_H
# define HUMAN_B_H

# include <iostream>
# include <string>
# include "Weapon.hpp"

class HumanB
{
private:
	std::string	name;
	Weapon		weapon;

public:
	HumanB(std::string name);
	~HumanB();

	void attack();
	void setWeapon(Weapon newWeapon);
};

#endif