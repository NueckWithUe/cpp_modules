#pragma once

#include <algorithm>
#include <iostream>
#include <vector>

class Span
{
private:
	std::vector <unsigned int> vec;
	unsigned int _Max;
public:
	Span(unsigned int N);
	Span(const Span& obj);
	Span& operator=(const Span& obj);
	~Span();

	void addNumber(unsigned int num);
	unsigned int shortestSpan();
	unsigned int longestSpan();
};
