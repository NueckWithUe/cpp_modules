#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Brain.hpp"

int main()
{
	Cat* cat = new Cat();
	Dog* dog = new Dog();

	cat->haveIdea("Eating");
	dog->haveIdea("Playing");

	Cat* copycat = new Cat(*cat);
	Dog* copydog = new Dog(*dog);

	copycat->haveIdea("Sleeping");
	copydog->haveIdea("idk I'm stupid");

	std::cout << "Displaying the dog's ideas: " << std::endl;
	dog->printIdeas();

	std::cout << std::endl;

	std::cout << "Displaying the cat's ideas: " << std::endl;
	cat->printIdeas();

	std::cout << std::endl;

	std::cout << "Displaying the copydog's ideas: " << std::endl;
	copydog->printIdeas();

	std::cout << std::endl;

	std::cout << "Displaying the copycat's ideas: " << std::endl;
	copycat->printIdeas();

	delete cat;
	delete dog;
	delete copycat;
	delete copydog;
	return 0;
}