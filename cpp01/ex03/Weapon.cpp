#include "Weapon.hpp"

Weapon::Weapon()
{
}

Weapon::Weapon(std::string initType)
{
	type = initType;
}

Weapon::~Weapon()
{
}

std::string const&	Weapon::getType()
{
	return (type);
}

void	Weapon::setType(std::string newType)
{
	type = newType;
}