#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	for (int i = 0; i < 4; i++)
	{
		this->_Inv[i] = NULL;
	}
}

MateriaSource::MateriaSource(const MateriaSource& obj)
{
	for (int i = 0; i < 4; i++)
	{
		this->_Inv[i] = obj._Inv[i]->clone();
	}
}

MateriaSource& MateriaSource::operator=(const MateriaSource& obj)
{
	if (this != &obj)
	{
		for (int i = 0; i < 4; i++)
		{
			this->_Inv[i] = obj._Inv[i]->clone();
		}
	}
	return (*this);
}

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < 4; i++)
		if (_Inv[i] != NULL)
			delete _Inv[i];
}

void MateriaSource::learnMateria(AMateria* newMateria)
{
	if (newMateria == NULL)
	{
		std::cout << "Materia doesn't exist" << std::endl;
		return ;
	}
	for (int i = 0; i < 4; i++)
	{
		if (this->_Inv[i] == NULL)
		{
			this->_Inv[i] = newMateria->clone();
			return ;
		}
	}
	std::cout << "MateriaSource already knows 4 Materias" << std::endl;
	delete newMateria;
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
	for (int i = 0; i < 4; i++)
	{
		if (_Inv[i] == NULL)
			break ;
		else if (_Inv[i]->getType() == type)
		{
			return (_Inv[i]->clone());
		}
	}
	std::cout << "Materia " << type << " not found in the inventory of MateriaSource" << std::endl;
	return (NULL);
}