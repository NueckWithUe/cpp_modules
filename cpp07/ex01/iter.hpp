#pragma once

#include <iostream>

template <typename T> void iter(T* a, int len, void (*f)(T *))
{
	int i;
	i = 0;
	while (i < len && a != NULL)
	{
		(*f)(a);
		a++;
		i++;
	}
}