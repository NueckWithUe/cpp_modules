#include "Character.hpp"

Character::Character()
{
	num_equip_materia = 0;
}

Character::Character(std::string name)
{
	_Name = name;
	num_equip_materia = 0;
}

Character::Character(const Character& obj)
{
	_Name = obj._Name;
	num_equip_materia = obj.num_equip_materia;
}

Character& Character::operator=(const Character& obj)
{
	if (this != &obj)
	{
		_Name = obj._Name;
		num_equip_materia = obj.num_equip_materia;
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
	if (num_equip_materia == 4)
	{
		std::cout << "Character cannot equip more than 4 materia" << std::endl;
		return ;
	}
	num_equip_materia++;
}

void Character::unequip(int idx)
{
	if (num_equip_materia == 0)
	{
		std::cout << "Character has no materia to unequip" << std::endl;
		return ;
	}
	num_equip_materia--;
}

void Character::use(int idx, ICharacter& target)
{

}