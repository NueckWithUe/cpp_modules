#include "HumanB.hpp"

HumanB::HumanB(std::string initName)
{
	name = initName;
	weapon = NULL;
}

HumanB::~HumanB()
{
}

void	HumanB::attack()
{
	if (weapon == NULL)
	{
		std::cout << name << " doesn't have a weapon equipped" << std::endl;
		return ;
	}
	std::cout << name << " attacks with their " << weapon->getType() << std::endl;
}

void	HumanB::setWeapon(Weapon &newWeapon)
{
	weapon = &newWeapon;
}