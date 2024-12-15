#pragma once
#ifndef FORM_HPP
# define FORM_HPP

#include <iostream>

#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
private:
	const std::string _Name;
	bool _Signed;
	const int _GradeToSign;
	const int _GradeToExecute;
public:
	Form();
	Form(std::string name, int sign, int exec);
	Form(const Form& obj);
	Form& operator=(const Form& obj);
	~Form();

	class GradeTooHighException : std::exception
	{
	public:
		const char* what() const throw();
	};

	class GradeTooLowException : public std::exception
	{
	public:
		const char* what() const throw();
	};

	std::string getName();
	int getGradeToSign();
	int getGradeToExecute();
	bool getStatus();

	void beSigned(Bureaucrat bureaucrat);
};

std::ostream& operator<<(std::ostream& os, Form &obj);

#endif