#include "Serializer.hpp"

int main()
{
	Data *ptr;
	Data *deserialize;
	uintptr_t serialize;

	ptr = new Data;
	ptr->number = 42;
	std::cout << "Memory address of pointer: " << ptr << std::endl;
	// std::cout << ptr->number<< std::endl;
	serialize = Serializer::serialize(ptr);
	deserialize = Serializer::deserialize(serialize);
	std::cout << "Memory address of serialized and deserialized pointer: " << deserialize << std::endl;
	// std::cout << deserialize->number<< std::endl;
	delete ptr;
	return (0);
}