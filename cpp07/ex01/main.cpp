#include "iter.hpp"

void f(int* a)
{
	std::cout << "Current element: " << *a << std::endl;
}

int arrayLength(int* array)
{
	int c;

	c = 0;
	while (array[c])
	{
		c++;
	}
	return (c);
}

int main(void)
{
	int a[] = {10, 20, 30, 0};
	int len = sizeof(a) / sizeof(a[0]);
	::iter(a, len, f);
	return (0);
}