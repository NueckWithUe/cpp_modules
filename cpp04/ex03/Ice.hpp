#pragma once
#ifndef ICE_H
# define ICE_H

# include <iostream>
# include <string>

# include "AMateria.hpp"

class Ice : public AMateria
{
private:
public:
	Ice();
	Ice(const Ice& obj);
	Ice& operator=(const Ice& obj);
	~Ice();

	Ice* clone() const;
	void use(ICharacter& target);
};

#endif