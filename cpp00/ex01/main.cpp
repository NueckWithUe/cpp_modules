#include "PhoneBook.hpp"

int	main(void)
{
	PhoneBook	book;
	std::string	input;

	std::cout << "Enter one of the following commands: ADD, SEARCH, EXIT: ";
	std::cin >> input;
	std::cout << "The command is: " << input << std::endl;
	return (0);
}