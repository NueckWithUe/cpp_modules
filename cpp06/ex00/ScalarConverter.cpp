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
	int precision, point;

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
	if (arg.find(".", 0) == arg.npos)
		precision = 1;
	else
	{
		point = arg.find(".", 0);
		precision = arg.find_last_not_of('0', arg.length()) - point;
	}
	if (precision == 0)
		precision = 1;
	std::cout << std::fixed << std::setprecision(precision) << "double: " << res << std::endl;
}

static void convertToFloat(std::string arg)
{
	float res;
	int precision, point;

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
	if (arg.find(".", 0) == arg.npos)
		precision = 1;
	else
	{
		point = arg.find(".", 0);
		precision = arg.find_last_not_of('0', arg.length()) - point;
	}
	if (precision == 0)
		precision = 1;
	std::cout << std::fixed << std::setprecision(precision) << "float: " << res << "f" << std::endl;
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