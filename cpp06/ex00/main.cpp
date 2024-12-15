#include "ScalarConverter.hpp"

int main(int argc, char **argv)
{
	if (argc == 1)
		return (0);
	if (argc > 2)
	{
		std::cout << "Too much arguments" << std::endl;
		return (1);
	}

	std::string arg = argv[1];
	ScalarConverter::convert(arg);
}