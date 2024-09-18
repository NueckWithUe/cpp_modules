#pragma once
#ifndef FIXED_H
# define FIXED_H

# ifndef CONSTRCMSG
#  define CONSTRCMSG 1
# endif

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
		bool operator<(const Fixed& obj) const;
		bool operator<=(const Fixed& obj);
		bool operator>(const Fixed& obj) const;
		bool operator>=(const Fixed& obj);
		bool operator==(const Fixed& obj);
		bool operator!=(const Fixed& obj);
		Fixed operator+(const Fixed& obj);
		Fixed operator*(const Fixed& obj);
		Fixed operator-(const Fixed& obj);
		Fixed operator/(const Fixed& obj);
		Fixed& operator++();
		Fixed operator++(int);
		~Fixed();

		int getRawBits( void ) const;
		void setRawBits( int const raw );
		float toFloat( void ) const;
		int toInt( void ) const;
		static Fixed& min(Fixed& num1, Fixed& num2);
		static const Fixed& min(const Fixed& num1, const Fixed& num2);
		static Fixed& max(Fixed& num1, Fixed& num2);
		static const Fixed& max(const Fixed& num1, const Fixed& num2);
};

std::ostream& operator<<(std::ostream& os, const Fixed &obj);

#endif