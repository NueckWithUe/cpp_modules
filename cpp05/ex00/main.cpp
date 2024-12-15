#include "Bureaucrat.hpp"

int main(void)
{
	std::cout << "Testing initialization:" << std::endl;
	try
	{
		Bureaucrat One("One", 75);
		std::cout << One << "\n" << std::endl;

		Bureaucrat Two("Two");
		std::cout << Two << "\n" << std::endl;

		Bureaucrat Three("Three", 151);
		std::cout << Three << "\n" << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << "Caught exception: " << e.what() << std::endl;
	}

	std::cout << "Testing increment/decrement:" << std::endl;
	try
	{
		Bureaucrat One("One", 75);
		std::cout << One << "\n" << std::endl;

		Bureaucrat Two("Two");
		std::cout << Two << "\n" << std::endl;

		Bureaucrat Three("Three", 1);
		std::cout << Three << "\n" << std::endl;
		
		One.incrementGrade();
		std::cout << "After increment:\n" << One << "\n" << std::endl;
		One.decrementGrade();
		std::cout << "After decrement:\n" << One << "\n" << std::endl;

		Two.decrementGrade();
		std::cout << "Decrement successuful" << std::endl;

		Three.incrementGrade();
		std::cout << "Increment successuful" << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << "Caught exception: " << e.what() << std::endl;
	}
	
}