#include "Character.hpp"

Character::Character()
{
	_Name = "an unknown person";
	for (int i = 0; i < 4; i++)
	{
		_Inv[i] = NULL;
	}
}

Character::Character(std::string name)
{
	_Name = name;
	for (int i = 0; i < 4; i++)
	{
		_Inv[i] = NULL;
	}
}

Character::Character(const Character& obj)
{
	_Name = obj._Name;
	for (int i = 0; i < 4; i++)
	{
		_Inv[i] = obj._Inv[i]->clone();
	}
}

Character& Character::operator=(const Character& obj)
{
	if (this != &obj)
	{
		_Name = obj._Name;
		for (int i = 0; i < 4; i++)
		{
			_Inv[i] = obj._Inv[i]->clone();
		}
	}
	return (*this);
}

Character::~Character()
{
}

std::string const & Character::getName() const
{
	return (_Name);
}

void Character::equip(AMateria* m)
{
	for (int i = 0; i < 4; i++)
	{
		if (_Inv[i] == NULL)
		{
			_Inv[i] = m;
			return ;
		}
	}
	std::cout << "Inventory of " << _Name << " is full. Cannot equip any materia" << std::endl;
}

void Character::unequip(int idx)
{
	if (idx < 0 || idx > 3)
	{
		std::cout << "Selected index doesn't exist" << std::endl;
		return ;
	}
	if (_Inv[idx] == NULL)
	{
		std::cout << "Selected slot is empty" << std::endl;
		return ;
	}
	_Inv[idx] = NULL;
}

void Character::use(int idx, ICharacter& target)
{
	if (idx >= 0 && idx < 4 && _Inv[idx])
		_Inv[idx]->use(target);
	else
		std::cout << "Index either too small, too big, or the field is empty" << std::endl;
}