#include "ScalarConverter.hpp"

static void convertToChar(std::string arg)
{
	char res;

	res = static_cast<char>(std::atoi(arg.c_str()));
	if (res < ' ' || res > 126)
		std::cout << "char: Non displayable" << std::endl;
	else
		std::cout << "char: '" << res << "'" << std::endl;
}

static void convertToDouble(std::string arg)
{
	double res;
	int precision;

	precision = arg.find_last_not_of('0', arg.length());
	std::cout << "precision: " << precision << std::endl;
	res = static_cast<double>(std::atof(arg.c_str()));
	std::cout << std::fixed << std::setprecision(precision) << "double: " << res << std::endl;
}

static void convertToFloat(std::string arg)
{
	float res;
	int precision;

	precision = arg.find_last_not_of('0', arg.length());
	if (precision == 2)
		precision--;
	if (precision > 2)
		precision -= 2;
	res = static_cast<float>(std::atof(arg.c_str()));
	std::cout << std::fixed << std::setprecision(precision) << "float: " << res << "f" << std::endl;
}

static void convertToInt(std::string arg)
{
	int res;

	res = static_cast<int>(std::atoi(arg.c_str()));
	if (res >= INT32_MAX || res <= INT32_MIN)
	{
		std::cout << "int: impossible" << std::endl;
	}
	else
	{
		std::cout << "int: " << res << std::endl;
	}
}

void ScalarConverter::convert(std::string arg)
{
	convertToChar(arg);
	convertToInt(arg);
	convertToFloat(arg);
	convertToDouble(arg);
}