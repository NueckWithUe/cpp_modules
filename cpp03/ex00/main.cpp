#include "ClapTrap.hpp"

int main(void)
{
	ClapTrap ClapTrap1("Freddy");

	ClapTrap1.attack("Tim");
	ClapTrap1.takeDamage(1);
	ClapTrap1.beRepaired(3);
	ClapTrap Trap2(ClapTrap1);
	Trap2.attack("Tim");
}