#include "AMateria.hpp"

AMateria::AMateria()
{
	Type = "unknown";
}

AMateria::AMateria(std::string const & type)
{
	Type = type;
}

AMateria::AMateria(const AMateria& obj)
{
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
}

std::string const & AMateria::getType() const
{
	return (Type);
}

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