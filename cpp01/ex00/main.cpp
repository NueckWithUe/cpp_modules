#include "Zombie.hpp"

int	main(void)
{
	Zombie *heapZombie;

	heapZombie = new Zombie("HeapZombie");
	heapZombie->announce();
	randomChump("Hello");
	delete heapZombie;
	return (0);
}