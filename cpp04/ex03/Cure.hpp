#pragma once
#ifndef CURE_H
# define CURE_H

# include <iostream>
# include <string>
# include "AMateria.hpp"

class Cure : public AMateria
{
public:
	Cure();
	Cure(const Cure& obj);
	Cure& operator=(const Cure& obj);
	~Cure();

	Cure* clone() const;
	void use(ICharacter& target);
};

#endif