#pragma once
#ifndef FIXED_H
# define FIXED_H

#include <iostream>

class Fixed
{
	private:
		int	FPNvalue;
		static const int	fractionalBits = 8;
	public:
		Fixed();
		Fixed(Fixed &obj);
		Fixed& operator=(const Fixed& obj);
		~Fixed();

		int getRawBits( void ) const;
		void setRawBits( int const raw );
};

#endif