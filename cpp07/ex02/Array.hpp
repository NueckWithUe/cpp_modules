#pragma once

#include <iostream>

template <typename T> class Array
{
private:
	T* array;
	unsigned int len;
public:
	Array() : array(nullptr)
	{
		len = 0;
	}

	Array(unsigned int n)
	{
		array = new T[n];
		len = n;
		for (unsigned int i = 0; i < n; i++)
		{
			array[i] = T();
		}
	}

	Array(const Array& obj)
	{
		this->len = obj.len;
		array = new T[len];
		for (unsigned int i = 0; i < len; ++i)
		{
			array[i] = obj.array[i];
		}
	}

	Array& operator=(const Array& obj)
	{
		if (this != &obj)
		{
			this->len = obj.len;
			if (len > 0)
			{
				array = new T[len];
				for (unsigned int n = 0; n < len; n++)
					this->array[n] = obj.array[n];
			}
		}
		return (*this);
	}

	~Array()
	{
		delete[] array;
	}

	unsigned int size() const
	{
		return (len);
	}

	T& operator[](unsigned int index)
	{
		if (index >= len)
		{
			throw std::out_of_range("Index out of range");
		}
		return array[index];
	}
};