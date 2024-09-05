#pragma once
#ifndef AINMAL_H
# define ANIMAL_H

#include <iostream>

class Animal
{
protected:
	std::string type;

private:

public:
	Animal();
	Animal(const Animal& obj);
	~Animal();

	void makeSound();
};

#endif