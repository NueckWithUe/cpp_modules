#pragma once
#ifndef DOG_H
# define DOG_H

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
private:
	Brain* brain;

public:
	Dog();
	Dog(const Dog& obj);
	Dog& operator=(const Dog& obj);
	~Dog();

	void makeSound(void) const;

	void haveIdea(std::string idea);
	void printIdeas();
};

#endif