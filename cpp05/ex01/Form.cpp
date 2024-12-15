#include "Form.hpp"

Form::Form() : _Name("Unknown Form"), _GradeToSign(1), _GradeToExecute(1)
{
	_Signed = false;
}

Form::Form(std::string name, int sign, int exec) : _Name(name), _GradeToSign(sign), _GradeToExecute(exec)
{
	if (sign < 1 || exec < 1)
		throw Form::GradeTooHighException();
	else if (sign > 150 || exec > 150)
		throw Form::GradeTooLowException();
	_Signed = false;
}

Form::Form(const Form& obj) : _Name(obj._Name), _GradeToSign(obj._GradeToSign), _GradeToExecute(obj._GradeToExecute)
{
	_Signed = obj._Signed;
}

Form& Form::operator=(const Form& obj)
{
	if (this != &obj)
	{
		this->_Signed = obj._Signed;
	}
	return (*this);
}

Form::~Form()
{
}

std::string Form::getName()
{
	return (_Name);
}

int Form::getGradeToSign()
{
	return (_GradeToSign);
}

int Form::getGradeToExecute()
{
	return (_GradeToExecute);
}

bool Form::getStatus()
{
	return (_Signed);
}

std::ostream& operator<<(std::ostream& os, Form &obj)
{
	os << obj.getName() <<
		", signed: " << obj.getStatus() <<
		", grade to sign: " << obj.getGradeToSign() <<
		", grade to execute: " << obj.getGradeToExecute();
	return (os);
}

void Form::beSigned(Bureaucrat bureaucrat)
{
	if (bureaucrat.getGrade() <= this->getGradeToSign())
	{
		this->_Signed = true;
		std::cout << bureaucrat << " signed " << *this << std::endl;
		return ;
	}
	throw Form::GradeTooLowException();
}

const char* Form::GradeTooHighException::what() const throw()
{
	return ("Grade too high");
}

const char* Form::GradeTooLowException::what() const throw()
{
	return ("Grade too low");
}