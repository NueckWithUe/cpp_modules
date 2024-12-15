#pragma once
#ifndef AFORM_HPP
# define AFORM_HPP

#include <iostream>

#include "Bureaucrat.hpp"

class Bureaucrat;

class AForm
{
private:
	const std::string _Name;
	bool _Signed;
	const int _GradeToSign;
	const int _GradeToExecute;
public:
	AForm();
	AForm(std::string name, int sign, int exec);
	AForm(const AForm& obj);
	AForm& operator=(const AForm& obj);
	virtual ~AForm();

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

	std::string getName() const;
	int getGradeToSign() const;
	int getGradeToExecute() const;
	bool getStatus() const;

	void beSigned(Bureaucrat bureaucrat);
	void execute(Bureaucrat const & executor) const;
	virtual void executeConcrete() const;
};

std::ostream& operator<<(std::ostream& os, const AForm &obj);

#endif