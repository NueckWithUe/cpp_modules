#include "Bureaucrat.hpp"

int main(void)
{
	Bureaucrat Bureaucrat("Bleep");
	std::cout << Bureaucrat.getName() << ", bureaucrat grade " << Bureaucrat.getGrade() << std::endl;
}