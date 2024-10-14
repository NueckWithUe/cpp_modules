#pragma once
#ifndef MATERIASOURCE_H
# define MATERIASOURCE_H

# include <iostream>
# include <string>

# include "IMateriaSource.hpp"
# include "AMateria.hpp"

class MateriaSource : public IMateriaSource
{
private:
	AMateria* _Inv[4];
public:
	MateriaSource();
	MateriaSource(const MateriaSource& obj);
	MateriaSource& operator=(const MateriaSource& obj);
	~MateriaSource();

	void learnMateria(AMateria* newMateria);
	AMateria* createMateria(std::string const & type);
};

#endif