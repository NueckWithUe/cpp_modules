#include "HumanA.hpp"

HumanA::HumanA(std::string initName, Weapon initWeapon)
{
	name = initName;
	weapon = initWeapon;
}

HumanA::~HumanA()
{
}

void	HumanA::attack()
{
	std::cout << name << " attacks with their " << weapon.getType() << std::endl;
}