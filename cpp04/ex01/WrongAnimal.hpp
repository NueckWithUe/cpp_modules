#pragma once
#ifndef WRONGAINMAL_H
# define WRONGANIMAL_H

#include <iostream>

class WrongAnimal
{
protected:
	std::string type;

public:
	WrongAnimal();
	WrongAnimal(const WrongAnimal& obj);
	WrongAnimal& operator=(const WrongAnimal& obj);
	virtual ~WrongAnimal();

	virtual void makeSound();
	std::string getType(void);
};

#endif