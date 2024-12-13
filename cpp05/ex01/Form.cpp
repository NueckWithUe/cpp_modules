#include "Form.hpp"

Form::Form() : _Name("Unknown Form"), _GradeToSign(1), _GradeToExecute(1)
{
	_Signed = false;
}

Form::Form(std::string name) : _Name(name), _GradeToSign(1), _GradeToExecute(1)
{
	_Signed = false;
}

Form::Form(std::string name, int sign, int exec) : _Name(name), _GradeToSign(sign), _GradeToExecute(exec)
{
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
	os << "Form " << obj.getName() <<
		", signed: " << obj.getStatus() <<
		", grade to sign: " << obj.getGradeToSign() <<
		", grade to execute: " << obj.getGradeToExecute();
	return (os);
}

void Form::beSigned(Bureaucrat bureaucrat)
{
	if (bureaucrat.getGrade() <= this->_GradeToSign)
	{
		this->_Signed = true;
		bureaucrat.signForm(*this);
		return ;
	}
	throw FormException("Bureaucrat's grade is too low to sign the form");
}

FormException::FormException(const std::string msg) : _Message(msg)
{

}

const char* FormException::what() const throw()
{
	return (_Message.c_str());
}