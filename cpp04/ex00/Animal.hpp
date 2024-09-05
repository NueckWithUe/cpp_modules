#pragma once
#ifndef AINMAL_H
# define ANIMAL_H

#include <iostream>

class Animal
{
protected:
	std::string type;

public:
	Animal();
	Animal(const Animal& obj);
	~Animal();

	virtual void makeSound();
	std::string getType(void);
};

#endif