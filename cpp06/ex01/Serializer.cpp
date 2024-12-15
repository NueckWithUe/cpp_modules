#include "Serializer.hpp"

uintptr_t Serializer::serialize(Data* ptr)
{
	uintptr_t ret;

	ret = reinterpret_cast<uintptr_t>(ptr);
	return (ret);
}

Data* Serializer::deserialize(uintptr_t raw)
{
	Data *data;

	data = reinterpret_cast<Data*>(raw);
	return (data);
}