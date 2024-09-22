#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Brain.hpp"

int main()
{
	const Animal* i = new Cat();
	const Animal* j = new Dog();

	j->makeSound();

	
	delete i;
	delete j;
	return 0;
}