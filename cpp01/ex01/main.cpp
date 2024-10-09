#include "Zombie.hpp"

int	main(void)
{
	int amount;
	int count;

	count = 1;
	amount = 5;
	Zombie *horde = zombieHorde(amount, "Zombie");
	for (int i = 0; i < amount; i++)
	{
		std::cout << count++ << ". Zombie" << std::endl;
		horde[i].announce();
	}
	delete []horde;
	return (0);
}