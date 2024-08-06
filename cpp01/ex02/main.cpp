#include <iostream>
#include <string>

int	main(void)
{
	std::string variable = "HI THIS IS BRAIN";
	std::string *stringPTR = &variable;
	std::string &stringREF = variable;

	std::cout << &variable << std::endl; //Outputs memory address of 'variable'
	std::cout << stringPTR << std::endl; //Outputs memory address held by stringPTR
	std::cout << &stringREF << std::endl; //Outputs memory address held by stringREF

	std::cout << variable << std::endl; //Outputs value of 'variable'
	std::cout << *stringPTR << std::endl; //Outputs value pointed to by stringPTR
	std::cout << stringREF << std::endl; //Outputs value pointed to by stringREF
}