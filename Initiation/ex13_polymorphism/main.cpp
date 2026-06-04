#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

class Test
{
};

int main()
{
	const Animal* meta = new Animal();
	const Animal* dog = new Dog();
	const Animal* cat = new Cat();

	cout << meta->getType() << "\t";
	meta->makeSound();
	cout << dog->getType() << "\t\t";
	dog->makeSound();
	cout << cat->getType() << "\t\t";
	cat->makeSound();
	delete cat;
	delete dog;
	delete meta;

	const WrongAnimal* wmeta = new WrongAnimal();
	const WrongAnimal* wcat = new WrongCat();
	cout << wmeta->getType() << "\t";
	wmeta->makeSound();
	cout << wcat->getType() << "\t";
	wcat->makeSound();
	delete wcat;
	delete wmeta;

	return 0;
}
