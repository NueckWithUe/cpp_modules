#pragma once
#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <exception>
#include <iostream>
#include <string>

#include "Form.hpp"

class Form;

class Bureaucrat
{
private:
	const std::string _Name;
	int _Grade;
public:
	Bureaucrat();
	Bureaucrat(std::string name, int grade);
	Bureaucrat(const Bureaucrat& obj);
	Bureaucrat& operator=(const Bureaucrat& obj);
	~Bureaucrat();

	class GradeTooHighException : public std::exception
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
	int getGrade();

	void incrementGrade();
	void decrementGrade();

	void signForm(Form &form);
};

std::ostream& operator<<(std::ostream& os, Bureaucrat &obj);

#endif