#pragma once
#ifndef DOG_H
# define DOG_H

#include "Animal.hpp"

class Dog : public Animal
{
private:

public:
	Dog();
	Dog(const Dog& obj);
	Dog& operator=(const Dog& obj);
	~Dog();

	void makeSound(void) const;
};

#endif