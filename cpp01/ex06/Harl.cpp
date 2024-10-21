#include "Harl.hpp"

Harl::Harl()
{
}

Harl::~Harl()
{
}

void	Harl::debug( void )
{
	std::cout << "[ DEBUG ]\n" << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!\n" << std::endl;
}

void	Harl::info( void )
{
	std::cout << "[ INFO ]\n" << "I cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!\n" << std::endl;
}

void	Harl::warning( void )
{
	std::cout << "[ WARNING ]\n" << "I think I deserve to have some extra bacon for free. I've been coming for years whereas you started working here since last month.\n" << std::endl;
}

void	Harl::error( void )
{
	std::cout << "[ ERROR ]\n" << "This is unacceptable! I want to speak to the manager now.\n" << std::endl;
}

void	Harl::complain( std::string level )
{
	void (Harl::*functionPointers[])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};

	std::string levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	int levelIndex = -1;
	for (int i = 0; i < 4; i++)
	{
		if (levels[i] == level)
		{
			levelIndex = i;
			break;
		}
	}

	switch (levelIndex)
	{
	case 0:
		while (levelIndex < 4)
		{
			(this->*functionPointers[levelIndex])();
			levelIndex++;
		}
		break;

	case 1:
		while (levelIndex < 4)
		{
			(this->*functionPointers[levelIndex])();
			levelIndex++;
		}
		break;

	case 2:
		while (levelIndex < 4)
		{
			(this->*functionPointers[levelIndex])();
			levelIndex++;
		}
		break;

	case 3:
		while (levelIndex < 4)
		{
			(this->*functionPointers[levelIndex])();
			levelIndex++;
		}
		break;

	default:
		std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
		break ;
	}
}