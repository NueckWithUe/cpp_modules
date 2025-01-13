#pragma once

#include <iostream>
#include <algorithm>
#include <list>
#include <stack>

template <typename T> class MutantStack : public std::stack<T>, public std::iterator<T>
{
public:
	MutantStack() {}
	~MutantStack() {}
};
