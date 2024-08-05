#pragma once
#ifndef PHONEBOOK_H
# define PHONEBOOK_H

# include "Contact.hpp"
# include <iostream>
# include <string>

class PhoneBook
{
private:
	Contact	contacts[8];
	int		index_contact;
	int		num_contacts;

public:
	PhoneBook();
	~PhoneBook();

	void	addContact();
	void	displayContact();
};

#endif