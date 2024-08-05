#pragma once
#ifndef CONTACT_H
# define CONTACT_H

# include <iomanip>
# include <iostream>
# include <string>

class Contact
{
private:
	std::string	first_name;
	std::string	last_name;
	std::string	nickname;
	int			phone_number;
	std::string	secret;

public:
	Contact();
	~Contact();

	std::string	get_first_name();
	std::string	get_last_name();
	std::string	get_nickname();
	int			get_phone_number();
	std::string	get_secret();

	void set_first_name(std::string input);
	void set_last_name(std::string input);
	void set_nickname(std::string input);
	void set_phone_number(int input);
	void set_secret(std::string input);
};

#endif