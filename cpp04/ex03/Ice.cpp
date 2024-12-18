#include "Ice.hpp"

Ice::Ice() : AMateria("ice")
{
}

Ice::Ice(const Ice& obj) : AMateria(obj)
{
}

Ice& Ice::operator=(const Ice& obj)
{
	if (this != &obj)
	{
		AMateria::operator=(obj);
	}
	return (*this);
}

Ice::~Ice()
{
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