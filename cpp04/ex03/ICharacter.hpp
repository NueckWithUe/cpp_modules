#pragma once
#ifndef ICHARACTER_H
# define ICHARACTER_H

# include <iostream>
# include <string>
# include "AMateria.hpp"

class ICharacter
{
private:
	std::string name;
public:
	ICharacter();
	ICharacter(std::string Name);
	ICharacter(const ICharacter& obj);
	ICharacter& operator=(const ICharacter& obj);
	~ICharacter();

	std::string getName();
};

#endif