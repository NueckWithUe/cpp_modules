#pragma once
#ifndef CHARACTER_H
# define CHARACTER_H

# include <iostream>
# include <string>

# include "ICharacter.hpp"

class Character : public ICharacter
{
private:
	std::string _Name;
	AMateria* _Inv[4];

public:
	Character();
	Character(std::string name);
	Character(const Character& obj);
	Character& operator=(const Character& obj);
	~Character();

	std::string const & getName() const;
	void equip(AMateria* m);
	void unequip(int idx);
	void use(int idx, ICharacter& target);
};

#endif