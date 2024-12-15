#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : _Name("Unknown Bureaucrat")
{
	_Grade = 150;
}

Bureaucrat::Bureaucrat(std::string name, int grade) : _Name(name)
{
	if (grade < 1)
	{
		throw Bureaucrat::GradeTooHighException();
	}
	if (grade > 150)
	{
		throw Bureaucrat::GradeTooLowException();
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
		throw Bureaucrat::GradeTooHighException();
	}
	_Grade--;
}

void Bureaucrat::decrementGrade()
{
	if (_Grade == 150)
	{
		throw Bureaucrat::GradeTooLowException();
	}
	_Grade++;
}

void Bureaucrat::signForm(Form &form)
{
	if (this->_Grade > form.getGradeToSign())
		std::cerr << *this << " can't sign Form " << form << " because grade too low" << std::endl;
	else
		form.beSigned(*this);
}

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("Grade too high");
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("Grade too low");
}