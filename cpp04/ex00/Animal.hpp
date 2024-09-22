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
	Animal& operator=(const Animal& obj);
	virtual ~Animal();

	virtual void makeSound() const;
	std::string getType(void) const;
};

#endif