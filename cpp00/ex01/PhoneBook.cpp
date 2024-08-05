#include "PhoneBook.hpp"

PhoneBook::PhoneBook()	//constructor
{
	index_contact = -1;
}

PhoneBook::~PhoneBook()	//deconstructor
{
}

void	PhoneBook::addContact()
{
	std::string	input;

	if (index_contact == 7)
		index_contact = 0;
	index_contact++;
	std::cout << "Enter first name: ";
	std::cin >> input;
	contacts[index_contact].set_first_name(input);
	std::cout << "Enter last name: ";
	std::cin >> input;
	contacts[index_contact].set_last_name(input);
	std::cout << "Enter nickname: ";
	std::cin >> input;
	contacts[index_contact].set_nickname(input);
	std::cout << "Enter phone number: ";
	std::cin >> input;
	contacts[index_contact].set_phone_number(input);
	std::cout << "Enter darkest secret: ";
	std::cin >> input;
	contacts[index_contact].set_secret(input);
}

void	PhoneBook::displayContact()
{
	std::cout << contacts[index_contact].get_first_name() << std::endl;
	std::cout << contacts[index_contact].get_last_name() << std::endl;
	std::cout << contacts[index_contact].get_nickname() << std::endl;
	std::cout << contacts[index_contact].get_phone_number() << std::endl;
	std::cout << contacts[index_contact].get_secret() << std::endl;
}