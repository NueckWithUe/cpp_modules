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
		throw BureaucratException("Grade too high");
	}
	if (grade > 150)
	{
		throw BureaucratException("Grade too low");
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

std::string Bureaucrat::getName()
{
	return (_Name);
}

int Bureaucrat::getGrade()
{
	return (_Grade);
}

std::ostream& operator<<(std::ostream& os, Bureaucrat &obj)
{
	os << obj.getName() << ", bureaucrat grade " << obj.getGrade();
	return (os);
}

void Bureaucrat::incrementGrade()
{
	if (_Grade == 1)
	{
		throw BureaucratException("Grade too high");
	}
	_Grade--;
}

void Bureaucrat::decrementGrade()
{
	if (_Grade == 150)
	{
		throw BureaucratException("Grade too low");
	}
	_Grade++;
}

BureaucratException::BureaucratException(const std::string msg) : _Message(msg)
{

}

const char* BureaucratException::what() const throw()
{
	return (_Message.c_str());
}