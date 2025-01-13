#include "Span.hpp"

Span::Span(unsigned int N)
{
	_Max = N;
}

Span::Span(const Span& obj)
{
	*this = obj;
}

Span& Span::operator=(const Span& obj)
{
	if (this != &obj)
	{
		this->vec = obj.vec;
		this->_Max = obj._Max;
	}
	return (*this);
}

Span::~Span()
{
}

void Span::addNumber(unsigned int num)
{
	if (vec.size() == _Max)
		throw std::exception();
	vec.push_back(num);
}

unsigned int Span::shortestSpan()
{
	unsigned int span = UINT32_MAX;
	unsigned int shortestSpan = 0;
	unsigned int vecSize = vec.size();

	if (vec.size() < 2)
		throw std::exception();

	std::sort(vec.begin(), vec.end());
	for (unsigned int n = 1; n < vecSize; n++)
	{
		shortestSpan = vec[n + 1] - vec[n];
		if (shortestSpan < span)
			span = shortestSpan;
	}
	return (span);
}

unsigned int Span::longestSpan()
{
	unsigned int span = 0;

	if (vec.size() < 2)
		throw std::exception();

	std::sort(vec.begin(), vec.end());
	span = vec.back() - vec.front();
	return (span);
}