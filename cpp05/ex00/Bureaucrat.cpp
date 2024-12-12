#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : _Name("Unknown Bureaucrat")
{
	_Grade = 150;
}

Bureaucrat::Bureaucrat(std::string name) : _Name(name)
{
	_Grade = 150;
}

Bureaucrat::Bureaucrat(std::string name, int grade) : _Name(name)
{
	if (grade < 1)
	{
		std::cout << "Error: Grade too high" << std::endl;
		return ;
	}
	if (grade > 150)
	{
		std::cout << "Error: Grade too low" << std::endl;
		return ;
	}
	_Grade = grade;
}

Bureaucrat::Bureaucrat(const Bureaucrat& obj) : _Name(obj._Name)
{
	_Grade = obj._Grade;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& obj)
{
	if (this != &obj)
	{
		this->_Grade = obj._Grade;
	}
	return (*this);
}

Bureaucrat::~Bureaucrat()
{
}

std::ostream& operator<<(std::ostream& os, const Bureaucrat &obj)
{
	os << obj;
	return (os);
}

std::string Bureaucrat::getName()
{
	return (_Name);
}

int Bureaucrat::getGrade()
{
	return (_Grade);
}

void Bureaucrat::incrementGrade()
{
	_Grade--;
}

void Bureaucrat::decrementGrade()
{
	_Grade++;
}