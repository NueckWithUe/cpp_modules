#pragma once

#include <iostream>
#include <algorithm>
#include <list>
#include <exception>

template <typename T> int easyfind(T &container, int occ)
{
	typename T::iterator it = std::find(container.begin(), container.end(), occ);
	if (it == container.end())
		throw std::exception();
	return (*it);
}