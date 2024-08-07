#include "HumanA.hpp"

HumanA::HumanA(std::string initName, Weapon &initWeapon) : weapon(initWeapon)
{
	name = initName;
}

HumanA::~HumanA()
{
}

void	HumanA::attack()
{
	std::cout << name << " attacks with their " << weapon.getType() << std::endl;
}