#include "Fixed.hpp"

Fixed::Fixed(void)
{
	std::cout << "Default constructor called" << std::endl;
	FPNvalue = 0;
}

Fixed::Fixed(Fixed &obj)
{
	std::cout << "Copy construntor called" << std::endl;
	FPNvalue = obj.FPNvalue;
}

Fixed& Fixed::operator=(const Fixed &obj)
{
	if (this != &obj)
		this->FPNvalue = obj.FPNvalue;
	return *this;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits( void ) const
{
	std::cout << "getRawBits member funtion called" << std::endl;
	return (FPNvalue);
}

void Fixed::setRawBits( int const raw )
{
	FPNvalue = raw;
}