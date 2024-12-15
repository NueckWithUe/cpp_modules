#pragma once
#ifndef SERIALIZER_HPP
# define SERIALIZER_HPP

#include <iostream>
#include <cstdint>

typedef struct s_Data
{
	int number;
}	Data;

class Serializer
{
public:
	Serializer() = delete;
	Serializer(const Serializer& obj) = delete;
	Serializer& operator=(const Serializer& obj) = delete;
	~Serializer() = delete;

	static uintptr_t serialize(Data* ptr);
	//It takes a pointer and converts it to the unsigned integer type uintptr_t

	static Data* deserialize(uintptr_t raw);
	//It takes an unsigned integer parameter and converts it to a pointer to Data
};

#endif