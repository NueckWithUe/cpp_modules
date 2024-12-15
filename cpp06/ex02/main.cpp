#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

#include <iostream>
#include <ctime>
#include <random>

Base * generate(void)
{
	Base *base;
	int rndm;

	base = NULL;
	srand(time(0));
	rndm = rand() % 3;
	switch (rndm)
	{
	case 0:
		base = new A;
		break ;
	case 1:
		base = new B;
		break;
	case 2:
		base = new C;
		break ;
	default:
		break;
	}
	return (base);
}

void identify(Base* p)
{
	if(dynamic_cast<A*>(p))
		std::cout << "Class is of type A" << std::endl;
	else if (dynamic_cast<B*>(p))
		std::cout << "Class is of type B" << std::endl;
	else if (dynamic_cast<C*>(p))
		std::cout << "Class is of type C" << std::endl;
	else
		std::cout << "Class is of type Base" << std::endl;
}

void identify(Base& p)
{
	(void)p;
	std::cout << "Hello" << std::endl;
}

int main()
{
	Base* base;
	Base* test = new Base;
	Base bvgerb;

	base = generate();

	identify(base);
	identify(test);

	identify(*base);
	identify(bvgerb);

	delete base;
	delete test;
	return (0);
}