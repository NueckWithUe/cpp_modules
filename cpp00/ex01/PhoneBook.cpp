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
		index_contact = -1;
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

void	PhoneBook::displayContact(int index)
{
	if (index < 0 || index >= num_contacts)
	{
		std::cout << "Error\nSelected index doesn't exist.\nReturning to commandline." << std::endl;
		return ;
	}
	std::cout << "First name: " << contacts[index].get_first_name() << std::endl;
	std::cout << "Last name: " << contacts[index].get_last_name() << std::endl;
	std::cout << "Nickname: " << contacts[index].get_nickname() << std::endl;
	std::cout << "Phone number: " << contacts[index].get_phone_number() << std::endl;
	std::cout << "Darkest secret: " << contacts[index].get_secret() << std::endl;
}

std::string	PhoneBook::displayTruncated(std::string input, int width)
{
	if (input.length() <= 10)
		return (input);
	return (input.substr(0, width) + '.');
}

void	PhoneBook::displayTable()
{
	int	index;

	if (num_contacts == 0)
	{
		std::cout << "No contacts to display" << std::endl;
		return ;
	}
	std::cout << std::right << std::setw(10) << "Index" << "|";
	std::cout << std::right << std::setw(10) << "First name" << "|";
	std::cout << std::right << std::setw(10) << "Last name" << "|";
	std::cout << std::right << std::setw(10) << "Nickname" << std::endl;
	for (int i = 0; i < num_contacts; i++)
	{
		std::cout << std::right << std::setw(10) << i << "|";
		std::cout << std::right << std::setw(10) << displayTruncated(contacts[i].get_first_name(), 9) << "|";
		std::cout << std::right << std::setw(10) << displayTruncated(contacts[i].get_last_name(), 9) << "|";
		std::cout << std::right << std::setw(10) << displayTruncated(contacts[i].get_nickname(), 9) << std::endl;
	}
	std::cout << "Enter index to see a specific contact: ";
	std::cin >> index;
	displayContact(index);
}