#include "Bureaucrat.hpp"
#include "Form.hpp"

int main(void)
{
	Form form1;
	Form customForm("CustomForm", 100, 100);
	Bureaucrat herbert("Herbert", 75);

	try
	{
		herbert.signForm(form1);
		std::cout << form1 << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		herbert.signForm(customForm);
		std::cout << customForm << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
}