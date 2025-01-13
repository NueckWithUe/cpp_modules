#pragma once

#include <iostream>
#include <algorithm>
#include <list>
#include <stack>

template <typename T, class container=std::deque<T>> class MutantStack : public std::stack<T>
{
public:
	MutantStack() {}
	MutantStack(const MutantStack& obj) {*this = obj;}
	MutantStack& operator=(const MutantStack& obj) {return *this;}
	~MutantStack() {}

	typedef typename container::iterator iterator;

	iterator begin()
	{
		return (this->c.begin());
	}
	iterator end()
	{
		return (this->c.end());
	}
};
