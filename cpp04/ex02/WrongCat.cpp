#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal()
{
	std::cout << "WrongCat default constructor called" << std::endl;
	type = "WrongCat";
}

WrongCat::WrongCat(const WrongCat& obj) : WrongAnimal(obj)
{
	std::cout << "WrongCat copy constructor called" << std::endl;
}

WrongCat& WrongCat::operator=(const WrongCat& obj)
{
	std::cout << "WrongCat copy assignment constructor called" << std::endl;
	if (this != &obj)
		WrongAnimal::operator=(obj);
	return (*this);
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat desructor called" << std::endl;
}