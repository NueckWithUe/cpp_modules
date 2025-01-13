#pragma once
#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

#include <iostream>
#include <iomanip>
#include <string>
#include <limits>
#include <cmath>

class ScalarConverter
{
private:
	ScalarConverter() = delete;
	ScalarConverter(const ScalarConverter& obj) = delete;
	ScalarConverter& operator=(const ScalarConverter& obj) = delete;
	~ScalarConverter() = delete;

public:
	static void convert(std::string arg);
};


#endif