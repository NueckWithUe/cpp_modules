#pragma once
#ifndef BRAIN_H
# define BRAIN_H

#include <iostream>

class Brain
{
private:
	std::string ideas[100];

public:
	Brain();
	Brain(const Brain& obj);
	Brain& operator=(const Brain& obj);
	~Brain();

	void setIdea(std::string idea);
	void printIdeas();
};

#endif