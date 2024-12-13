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
	Bureaucrat(std::string name);
	Bureaucrat(std::string name, int grade);
	Bureaucrat(const Bureaucrat& obj);
	Bureaucrat& operator=(const Bureaucrat& obj);
	~Bureaucrat();

	std::string getName();
	int getGrade();

	void incrementGrade();
	void decrementGrade();

	void signForm(Form form);
};

std::ostream& operator<<(std::ostream& os, Bureaucrat &obj);

class BureaucratException : public std::exception
{
private:
	std::string _Message;
public:
	BureaucratException(const std::string msg);
	const char* what() const throw();
};

#endif