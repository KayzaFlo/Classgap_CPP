#include "Cat.hpp"
#include <iostream>

Cat::Cat(void) : Animal()
{
	std::cout << "Cat constructor called" << std::endl;
}

Cat::~Cat(void)
{
	std::cout << "Cat destructor called" << std::endl;
}

void Cat::speak(void) const
{
	std::cout << "Cat says: Meow!" << std::endl;
}
