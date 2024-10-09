#pragma once
#ifndef CURE_H
# define CURE_H

# include <iostream>
# include <string>

class Cure
{
private:
public:
	Cure();
	Cure(const Cure& obj);
	Cure& operator=(const Cure& obj);
	~Cure();
};

#endif