#include "Array.hpp"

int main()
{
	try {
		Array<int> arr(5);  // Create an array of 5 elements with type 'int'
		arr[0] = 10;
		arr[1] = 20;
		arr[2] = 30;
		arr[3] = 40;
		arr[4] = 50;

		// Access elements
		std::cout << "Array elements:" << std::endl;
		for (unsigned int i = 0; i < arr.size(); ++i)
		{
			std::cout << arr[i] << " ";
		}
		std::cout << std::endl;

		// Testing copy constructor
		Array<int> copy = arr;
		copy[0] = 69;
		std::cout << "Copy array elements:" << std::endl;
		for (unsigned int i = 0; i < copy.size(); ++i)
		{
			std::cout << copy[i] << " ";
		}
		std::cout << std::endl;

		// Testing assignment operator
		Array<int> arr_assigned(3);
		arr_assigned = arr;
		arr_assigned[1] = 420;
		std::cout << "Assigned array elements:" << std::endl;
		for (unsigned int i = 0; i < arr_assigned.size(); ++i)
		{
			std::cout << arr_assigned[i] << " ";
		}
		std::cout << std::endl;

		// Testing out of bounds access (should throw exception)
		std::cout << arr[10] << std::endl; // This will throw std::out_of_range
	}
	catch (const std::exception& e) {
		std::cerr << "Exception caught: " << e.what() << std::endl;
	}

	return 0;
}