#pragma once
#ifndef WEAPON_H
# define WEAPON_H

# include <string>
# include <iostream>

class Weapon
{
private:
	std::string	type;

public:
	Weapon();
	Weapon(std::string initType);
	~Weapon();

	const std::string	&getType();
	void				setType(std::string newType);
};

#endif