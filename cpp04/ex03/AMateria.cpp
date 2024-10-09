#include "AMateria.hpp"

AMateria::AMateria()
{
	std::cout << "AMateria default constructor called" << std::endl;
	target = new ICharacter("Name");
}

AMateria::AMateria(std::string const & type)
{
	std::cout << "AMateria parameterized constructor called" << std::endl;
	Type = type;
}

AMateria::AMateria(const AMateria& obj)
{
	std::cout << "AMateria copy contructor called" << std::endl;
	Type = obj.Type;
}

AMateria& AMateria::operator=(const AMateria& obj)
{
	if (this != &obj)
	{
		Type = obj.Type;
	}
	return (*this);
}

AMateria::~AMateria()
{
	std::cout << "AMateria destructor called" << std::endl;
}

std::string const & AMateria::getType() const
{
	return (Type);
}

// AMateria* AMateria::clone() const
// {

// }

void AMateria::use(ICharacter& target)
{
	if (Type == "ice")
	{
		std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
	}
	else if (Type == "cure")
	{
		std::cout << "* heals " << target.getName() << " wounds *" << std::endl;
	}
}