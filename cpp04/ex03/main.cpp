#include "AMateria.hpp"
#include "Character.hpp"
#include "Cure.hpp"
#include "Ice.hpp"
#include "ICharacter.hpp"
#include "IMateriaSource.hpp"
#include "MateriaSource.hpp"

int main(void)
{
	std::cout << "Running tests from the subject" << std::endl;
	{
		IMateriaSource* src = new MateriaSource();
		src->learnMateria(new Ice());
		src->learnMateria(new Cure());
		ICharacter* me = new Character("me");
		AMateria* tmp;
		tmp = src->createMateria("ice");
		me->equip(tmp);
		tmp = src->createMateria("cure");
		me->equip(tmp);
		ICharacter* bob = new Character("bob");
		me->use(0, *bob);
		me->use(1, *bob);
		delete bob;
		delete me;
		delete src;
	}
	std::cout << std::endl;

	std::cout << "Trying to learn a non-existing materia" << std::endl;
	{
		IMateriaSource* src = new MateriaSource();
		src->learnMateria(NULL);
		delete src;
	}
	std::cout << std::endl;

	std::cout << "Trying to equip/learn more than 4 materias" << std::endl;
	{
		IMateriaSource* src = new MateriaSource();
		for (int i = 0; i < 5; i++)
		{
			std::cout << "Trying to learn a new materia for the " << i + 1 << ". time" << std::endl;
			src->learnMateria(new Ice());
		}
		ICharacter* mew = new Character("mew");
		AMateria* tmp;
		tmp = src->createMateria("ice");
		for (int i = 0; i < 5; i++)
		{
			std::cout << "Trying to equip " << tmp->getType() << " for the " << i + 1 << ". time" << std::endl;
			mew->equip(tmp);
		}
		delete mew;
		delete src;
	}
	std::cout << std::endl;

	std::cout << "Selecting an index too small/too big" << std::endl;
	{
		IMateriaSource* src = new MateriaSource();
		src->learnMateria(new Ice());
		ICharacter* me = new Character("me");
		ICharacter* bob = new Character("bob");
		AMateria* tmp;
		tmp = src->createMateria("ice");
		me->equip(tmp);
		me->use(9, *bob);
		delete bob;
		delete me;
		delete src;
	}
	return 0;
}