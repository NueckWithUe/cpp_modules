#pragma once
#ifndef CAT_H
# define CAT_H

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
private:
	Brain* brain;

public:
	Cat();
	Cat(const Cat& obj);
	Cat& operator=(const Cat& obj);
	~Cat();

	void makeSound(void) const override;
};

#endif