#include "Zombie.hpp"

Zombie::Zombie()
{
}

Zombie::Zombie(std::string zombie_name)
{
	name = zombie_name;
}

Zombie::~Zombie()
{
	std::cout << name + " got destructed." << std::endl;
}


void	Zombie::set_name(std::string zombieName)
{
	name = zombieName;
}

void	Zombie::announce(void)
{
	std::cout << name + ": BraiiiiiiinnnzzzZ..." << std::endl;
}