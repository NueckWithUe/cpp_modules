#include "Bureaucrat.hpp"
#include "Form.hpp"

int main(void)
{
	Form form1;
	Form myForm("MyForm");
	Form customForm("CustomForm", 15, 15);

	std::cout << form1 << "\n\n" << myForm << "\n\n" << customForm << std::endl;

	Bureaucrat herbert("Herbert", 1);
	customForm.beSigned(herbert);
}