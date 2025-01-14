#include "ScalarConverter.hpp"

static void convertToChar(std::string arg)
{
	char res;

	try
	{
		res = static_cast<char>(std::stoi(arg));
		if (!std::isprint(res))
			std::cout << "char: not displayable" << std::endl;
		else
			std::cout << "char: '" << res << "'" << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << "char: impossible" << std::endl;
	}
}

static void convertToDouble(std::string arg)
{
	double res;

	try
	{
		res = static_cast<double>(std::stod(arg));
	}
	catch(const std::exception& e)
	{
		std::cout << "double: impossible" << std::endl;
		return ;
	}
	if (arg == "-inf" || arg == "+inf" || arg == "nan")
	{
		std::cout << "double: " << arg << std::endl;
		return ;
	}
	std::cout << std::fixed << std::setprecision(1) << "double: " << res << std::endl;
}

static void convertToFloat(std::string arg)
{
	float res;

	try
	{
		res = static_cast<float>(std::stof(arg));
	}
	catch(const std::exception& e)
	{
		std::cout << "float: impossible" << std::endl;
		return ;
	}
	if (arg == "-inf" || arg == "+inf" || arg == "nan")
	{
		std::cout << "float: " << arg << "f" << std::endl;
		return ;
	}
	std::cout << std::fixed << std::setprecision(1) << "float: " << res << "f" << std::endl;
}

static void convertToInt(std::string arg)
{
	int res;

	try
	{
		res = static_cast<int>(std::stoi(arg));
		std::cout << "int: " << res << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << "int: impossible" << std::endl;
	}
}

void ScalarConverter::convert(std::string arg)
{
	convertToChar(arg);
	convertToInt(arg);
	convertToFloat(arg);
	convertToDouble(arg);
}