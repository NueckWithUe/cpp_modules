#include "AForm.hpp"

AForm::AForm() : _Name("Unknown AForm"), _GradeToSign(1), _GradeToExecute(1)
{
	_Signed = false;
}

AForm::AForm(std::string name, int sign, int exec) : _Name(name), _GradeToSign(sign), _GradeToExecute(exec)
{
	_Signed = false;
}

AForm::AForm(const AForm& obj) : _Name(obj._Name), _GradeToSign(obj._GradeToSign), _GradeToExecute(obj._GradeToExecute)
{
	_Signed = obj._Signed;
}

AForm& AForm::operator=(const AForm& obj)
{
	if (this != &obj)
	{
		this->_Signed = obj._Signed;
	}
	return (*this);
}

AForm::~AForm()
{
}

std::string AForm::getName() const
{
	return (_Name);
}

int AForm::getGradeToSign() const
{
	return (_GradeToSign);
}

int AForm::getGradeToExecute() const
{
	return (_GradeToExecute);
}

bool AForm::getStatus() const
{
	return (_Signed);
}

std::ostream& operator<<(std::ostream& os, const AForm &obj)
{
	os << obj.getName() <<
		", signed: " << obj.getStatus() <<
		", grade to sign: " << obj.getGradeToSign() <<
		", grade to execute: " << obj.getGradeToExecute();
	return (os);
}

void AForm::beSigned(Bureaucrat bureaucrat)
{
	if (bureaucrat.getGrade() <= this->getGradeToSign())
	{
		this->_Signed = true;
		std::cout << bureaucrat << " signed " << *this << std::endl;
		return ;
	}
	throw AForm::GradeTooLowException();
}

void AForm::execute(Bureaucrat const & executor) const
{
	if (!this->_Signed)
	{
		std::cout << "Form is not signed" << std::endl;
		return ;
	}
	else if (executor.getGrade() > this->_GradeToExecute)
	{
		std::cout << "Can not execute Form, because grade too low" << std::endl;
		return ;
	}
	else
		executeConcrete();
}

void AForm::executeConcrete() const
{
	std::cout << "AForm executes something" << std::endl;
}

const char* AForm::GradeTooHighException::what() const throw()
{
	return ("Grade too high");
}

const char* AForm::GradeTooLowException::what() const throw()
{
	return ("Grade too low");
}