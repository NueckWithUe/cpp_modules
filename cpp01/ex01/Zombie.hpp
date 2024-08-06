#pragma once
#ifndef ZOMBIE_H
# define ZOMBIE_H

# include <string>
# include <iostream>

class Zombie
{
private:
	std::string	name;

public:
	Zombie(void);
	Zombie(std::string zombie_name);
	~Zombie();

	void	announce( void );
};

Zombie	*newZombie(std::string name);
Zombie	*zombieHorde(int N, std::string name);

#endif