#include "PhoneBook.hpp"

PhoneBook::PhoneBook()	//constructor
{
	index_contact = -1;
	num_contacts = 0;
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
	if (num_contacts < 8)
		num_contacts++;
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
	if (num_contacts == 0)
	{
		std::cout << "No contacts to display" << std::endl;
		return ;
	}
	for (int i = 0; i < num_contacts; i++)
	{
		std::cout << contacts[i].get_first_name() << std::endl;
		std::cout << contacts[i].get_last_name() << std::endl;
		std::cout << contacts[i].get_nickname() << std::endl;
		std::cout << contacts[i].get_phone_number() << std::endl;
		std::cout << contacts[i].get_secret() << std::endl;
	}
}