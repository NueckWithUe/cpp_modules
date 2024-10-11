#include "Ice.hpp"

Ice::Ice()
{
	std::cout << "Ice default constructor called" << std::endl;
}

Ice::Ice(const Ice& obj)
{
	std::cout << "Ice copy constructor called" << std::endl;
	(void)obj;
}

Ice& Ice::operator=(const Ice& obj)
{
	(void)obj;
	return (*this);
}

Ice::~Ice()
{
	std::cout << "Ice destrutor called" << std::endl;
}

Ice* Ice::clone() const
{
	Ice *newIce = new Ice();
	return (newIce);
}

void Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}