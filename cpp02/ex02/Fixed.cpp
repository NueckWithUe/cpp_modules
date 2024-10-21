#include "Fixed.hpp"

Fixed::Fixed(void)
{
	if (CONSTRCMSG)
		std::cout << "Default constructor called" << std::endl;
	FPNvalue = 0;
}

Fixed::Fixed(const int number)
{
	if (CONSTRCMSG)
		std::cout << "Int constructor called" << std::endl;
	FPNvalue = number << fractionalBits;
}

Fixed::Fixed(const float number)
{
	if (CONSTRCMSG)
		std::cout << "Float constructor called" << std::endl;
	FPNvalue = roundf(number * (1 << fractionalBits));
}

Fixed::Fixed(const Fixed &obj)
{
	if (CONSTRCMSG)
		std::cout << "Copy construntor called" << std::endl;
	FPNvalue = obj.FPNvalue;
}

Fixed& Fixed::operator=(const Fixed &obj)
{
	if (CONSTRCMSG)
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

bool Fixed::operator<(const Fixed& obj) const
{
	if (this->getRawBits() < obj.getRawBits())
		return (true);
	return (false);
}

bool Fixed::operator<=(const Fixed& obj)
{
	if (this->getRawBits() <= obj.getRawBits())
		return (true);
	return (false);
}

bool Fixed::operator>(const Fixed& obj) const
{
	if (this->getRawBits() > obj.getRawBits())
		return (true);
	return (false);
}

bool Fixed::operator>=(const Fixed& obj)
{
	if (this->getRawBits() >= obj.getRawBits())
		return (true);
	return (false);
}

bool Fixed::operator==(const Fixed& obj)
{
	if (this->getRawBits() == obj.getRawBits())
		return (true);
	return (false);
}

bool Fixed::operator!=(const Fixed& obj)
{
	if (this->getRawBits() != obj.getRawBits())
		return (true);
	return (false);
}

Fixed Fixed::operator+(const Fixed& obj)
{
	return ((this->toFloat() + obj.toFloat()));
}

Fixed Fixed::operator*(const Fixed& obj)
{
	return ((this->toFloat() * obj.toFloat()));
}

Fixed Fixed::operator-(const Fixed& obj)
{
	return ((this->toFloat() - obj.toFloat()));
}

Fixed Fixed::operator/(const Fixed& obj)
{
	if (obj.FPNvalue == 0)
	{
		std::cout << "Division by 0 is not defined" << std::endl;
		return (*this);
	}
	return ((this->toFloat() / obj.toFloat()));
}

Fixed& Fixed::operator++()
{
	++FPNvalue;
	return (*this);
}

Fixed Fixed::operator++(int)
{
	Fixed value(this->toFloat());
	++FPNvalue;
	return (value);
}

Fixed& Fixed::operator--()
{
	--FPNvalue;
	return (*this);
}

Fixed Fixed::operator--(int)
{
	Fixed value(this->toFloat());
	--FPNvalue;
	return (value);
}

Fixed::~Fixed()
{
	if (CONSTRCMSG)
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

Fixed& Fixed::min(Fixed& num1, Fixed& num2)
{
	if (num1 < num2)
		return (num1);
	return (num2);
}

const Fixed& Fixed::min(const Fixed& num1, const Fixed& num2)
{
	if (num1 < num2)
		return (num1);
	return (num2);
}

Fixed& Fixed::max(Fixed& num1, Fixed& num2)
{
	if (num1 > num2)
		return (num1);
	return (num2);
}

const Fixed& Fixed::max(const Fixed& num1, const Fixed& num2)
{
	if (num1 > num2)
		return (num1);
	return (num2);
}
