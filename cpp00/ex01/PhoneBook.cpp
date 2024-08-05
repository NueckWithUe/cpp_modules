#include "PhoneBook.hpp"

PhoneBook::PhoneBook()	//constructor
{
	index_contact = 0;
	std::cout << "PhoneBook constructor called" << std::endl;
}

PhoneBook::~PhoneBook()	//deconstructor
{
	std::cout << "PhoneBook destructor called" << std::endl;
}

void	PhoneBook::addContact()
{
	int			number;
	std::string	input;

	if (index_contact == 7)
		index_contact = 0;
	else
		index_contact++;
	std::cout << "Contact should be added." << std::endl;
}

void	PhoneBook::displayContact()
{
	std::cout << "Contact should be displayed." << std::endl;
}