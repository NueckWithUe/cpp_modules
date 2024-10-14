#include "Cure.hpp"

Cure::Cure() : AMateria("cure")
{
}

Cure::Cure(const Cure& obj) : AMateria(obj)
{
}

Cure& Cure::operator=(const Cure& obj)
{
	if (this != &obj)
	{
		AMateria::operator=(obj);
	}
	return (*this);
}

Cure::~Cure()
{
}

Cure* Cure::clone() const
{
	Cure *newCure = new Cure();
	return (newCure);
}

void Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}