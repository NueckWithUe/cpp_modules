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
	Form(std::string name);
	Form(std::string name, int sign, int exec);
	Form(const Form& obj);
	Form& operator=(const Form& obj);
	~Form();

	std::string getName();
	int getGradeToSign();
	int getGradeToExecute();
	bool getStatus();

	void beSigned(Bureaucrat bureaucrat);
};

std::ostream& operator<<(std::ostream& os, Form &obj);

class FormException : public std::exception
{
private:
	std::string _Message;
public:
	FormException(const std::string msg);
	const char* what() const throw();
};


#endif