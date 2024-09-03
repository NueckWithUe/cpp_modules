#include "Harl.hpp"

Harl::Harl()
{
}

Harl::~Harl()
{
}

void	Harl::debug( void )
{
	std::cout << "[ DEBUG ]\n" << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}

void	Harl::info( void )
{
	std::cout << "[ INFO ]\n" << "I cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!" << std::endl;
}

void	Harl::warning( void )
{
	std::cout << "[ WARNING ]\n" << "I think I deserve to have some extra bacon for free. I've been coming for years whereas you started working here since last month." << std::endl;
}

void	Harl::error( void )
{
	std::cout << "[ ERROR ]\n" << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void	Harl::complain( std::string level )
{
	int number;

	if (level == "DEBUG")
		number = 1;
	else if (level == "INFO")
		number = 2;
	else if (level == "WARNING")
		number = 3;
	else if (level == "ERROR")
		number = 4;
	else
		number = -1;

	switch (number)
	{
		case 1:
			debug();
			info();
			warning();
			error();
			break;
		case 2:
			info();
			warning();
			error();
			break;
		case 3:
			warning();
			error();
			break;
		case 4:
			error();
			break;
		default:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
			break;
	}
}