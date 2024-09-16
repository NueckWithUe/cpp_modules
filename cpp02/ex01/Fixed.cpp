#include "Fixed.hpp"

Fixed::Fixed(void)
{
	std::cout << "Default constructor called" << std::endl;
	FPNvalue = 0;
}

Fixed::Fixed(const int number)
{
	std::cout << "Int constructor called" << std::endl;
	FPNvalue = number << fractionalBits;
}

Fixed::Fixed(const float number)
{
	std::cout << "Float constructor called" << std::endl;
	FPNvalue = roundf(number * (1 << fractionalBits));
}

Fixed::Fixed(const Fixed &obj)
{
	std::cout << "Copy construntor called" << std::endl;
	FPNvalue = obj.FPNvalue;
}

Fixed& Fixed::operator=(const Fixed &obj)
{
	std::cout << "Copy assignment constructor called" << std::endl;
	if (this != &obj)
		this->FPNvalue = obj.FPNvalue;
	return *this;
}

std::ostream& operator<<(std::ostream& os, const Fixed &obj)
{
	os << obj.toFloat();
	return (os);
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits( void ) const
{
	return (FPNvalue);
}

void Fixed::setRawBits( int const raw )
{
	FPNvalue = raw;
}

float Fixed::toFloat( void ) const
{
	return ((float)FPNvalue / (float)(1 << fractionalBits));
}

int Fixed::toInt( void ) const
{
	return (FPNvalue >> fractionalBits);
}