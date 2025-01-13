#include "easyfind.hpp"

int main()
{
	// initialize list
	std::list<int> lst;
	for (int n = 1; n <= 10; n++)
	{
		lst.push_back(n);
	}

	int test;

	try
	{
		test = 3;
		std::cout << easyfind(lst, test) << " is in list" << std::endl;
		test = 1238946;
		std::cout << easyfind(lst, test) << " is in list" << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << test << " is not in list" << std::endl;
	}
}