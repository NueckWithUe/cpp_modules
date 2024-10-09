#pragma once
#ifndef ICE_H
# define ICE_H

# include <iostream>
# include <string>

class Ice
{
private:
public:
	Ice();
	Ice(const Ice& obj);
	Ice& operator=(const Ice& obj);
	~Ice();
};

#endif