#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Brain.hpp"

int main()
{
	// const Animal* meta = new Animal();
	const Animal* i = new Cat();
	const Animal* j = new Dog();

	i->makeSound();
	j->makeSound();

	delete j;
	delete i;
	return 0;
}