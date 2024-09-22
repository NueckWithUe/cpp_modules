#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	std::cout << meta->getType() << " " << std::endl;
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();

	delete i;
	delete j;
	delete meta;

	std::cout << "Testing the WrongAnimal classes" << std::endl;

	WrongAnimal* wAnimal = new WrongAnimal();
	WrongCat* wCat = new WrongCat();

	wAnimal->makeSound();
	wCat->makeSound();

	delete wAnimal;
	delete wCat;
	return 0;
}