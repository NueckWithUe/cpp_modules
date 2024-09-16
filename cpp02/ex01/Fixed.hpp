#pragma once
#ifndef FIXED_H
# define FIXED_H

#include <iostream>
#include <cmath>

class Fixed
{
	private:
		int FPNvalue;
		static const int fractionalBits = 8;

	public:
		Fixed();
		Fixed(const int);
		Fixed(const float);
		Fixed(const Fixed &obj);
		Fixed& operator=(const Fixed& obj);
		~Fixed();

		int getRawBits( void ) const;
		void setRawBits( int const raw );
		float toFloat( void ) const;
		int toInt( void ) const;
};

std::ostream& operator<<(std::ostream& os, const Fixed &obj);

#endif