#pragma once
#ifndef CAT_H
# define CAT_H

#include "Animal.hpp"

class Cat : public Animal
{
private:

public:
	Cat();
	Cat(const Cat& obj);
	~Cat();

	void makeSound(void);
};

#endif