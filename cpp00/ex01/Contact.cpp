#include "Contact.hpp"

Contact::Contact()
{
}

Contact::~Contact()
{
}

std::string Contact::get_first_name()
{
	return (first_name);
}
std::string Contact::get_last_name()
{
	return (last_name);
}
std::string Contact::get_nickname()
{
	return (nickname);
}
std::string Contact::get_phone_number()
{
	return (phone_number);
}
std::string Contact::get_secret()
{
	return (secret);
}


void Contact::set_first_name(std::string input)
{
	first_name = input;
}
void Contact::set_last_name(std::string input)
{
	last_name = input;
}
void Contact::set_nickname(std::string input)
{
	nickname = input;
}
void Contact::set_phone_number(std::string input)
{
	phone_number = input;
}
void Contact::set_secret(std::string input)
{
	secret = input;
}