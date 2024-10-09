#include "Cure.hpp"

Cure::Cure()
{
	std::cout << "Cure default constructor called" << std::endl;
}

Cure::Cure(const Cure& obj)
{
	std::cout << "Cure copy constructor called" << std::endl;
	(void)obj;
}

Cure& Cure::operator=(const Cure& obj)
{
	(void)obj;
	return (*this);
}

Cure::~Cure()
{
	std::cout << "Cure destrutor called" << std::endl;
}

Cure* Cure::clone() const
{
	Cure *newCure = new Cure();
	return (newCure);
}