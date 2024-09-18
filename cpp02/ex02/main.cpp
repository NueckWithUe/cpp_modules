#include "Fixed.hpp"
#include <iostream>

int main(void)
{
	std::cout << "Running tests from the subject" << std::endl;
	Fixed a;
	Fixed const b(Fixed(5.05f) * Fixed(2));

	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;

	std::cout << b << std::endl;

	std::cout << Fixed::max(a, b) << std::endl;

	std::cout << "Running own tests" << std::endl;

	Fixed c(2 + 2);
	Fixed d(c - 1);
	Fixed e;
	Fixed f(3.0f / 4.0f);
	Fixed g(c / e);

	std::cout << "2 + 2 is " << c << std::endl;
	std::cout << "Minus 1 that's " << d << std::endl;
	std::cout << "Quick maths" << std::endl;

	std::cout << "f: " << f << std::endl;

	int bigger = c >= d;
	std::cout << "c >= d: " << bigger << std::endl;

	int smaller = c <= d;
	std::cout << "c <= d: " << smaller << std::endl;

	if (c != d)
		std::cout << "c and d are inequal" << std::endl;

	if (e == 0)
		std::cout << "e is 0" << std::endl;
	return 0;
}