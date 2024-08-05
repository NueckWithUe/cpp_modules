#include "PhoneBook.hpp"

int	main(void)
{
	PhoneBook	book;
	std::string	input;

	std::cout << "Enter one of the following commands: ADD, SEARCH, EXIT: ";
	std::cin >> input;
	while (input != "EXIT")
	{
		if (input == "ADD" || input == "SEARCH")
		{
			if (input == "ADD")
				book.addContact();
			else
				book.displayContact();
			std::cout << "Enter one of the following commands: ADD, SEARCH, EXIT: ";
			std::cin >> input;
		}
		else
		{
			std::cout << "Error. Not a valid command. Valid commands are: ADD | SEARCH | EXIT" << std::endl;
			std::cout << "Please enter a correct command: ";
			std::cin >> input;
		}
	}
	return (0);
}