#pragma once
#ifndef MATERIASOURCE_H
# define MATERIASOURCE_H

# include <iostream>
# include <string>

# include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
public:
	MateriaSource();
	MateriaSource(const MateriaSource& obj);
	MateriaSource& operator=(const MateriaSource& obj);
	~MateriaSource();

	void learnMateria(AMateria*);
	AMateria* createMateria(std::string const & type);
};

#endif