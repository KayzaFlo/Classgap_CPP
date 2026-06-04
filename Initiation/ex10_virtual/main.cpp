#include <iostream>
#include "Cat.hpp"
#include "Dog.hpp"

#include <iostream>

int main(void)
{
	int a = 5l;
	int a = 4;

	// Dog d;
	// Cat c;

	Animal *animals[2];
	animals[0] = new Dog();
	animals[1] = new Cat();

	for (int i = 0; i < 2; i++)
		animals[i]->speak();

	delete animals[0];
	delete animals[1];

	return (0);
}
