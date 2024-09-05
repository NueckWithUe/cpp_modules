#include "ScavTrap.hpp"

int main(void)
{
	ClapTrap clap("CT00");
	ScavTrap scav("ST00");

	clap.attack("M");
	scav.beRepaired(20);
	scav.attack("N");
	scav.guardGate();
}