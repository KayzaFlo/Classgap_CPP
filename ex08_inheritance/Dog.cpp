#include "Dog.hpp"
#include <iostream>

Dog::Dog(void) : Animal()
{
	std::cout << "Dog constructor called" << std::endl;
}

Dog::~Dog(void)
{
	std::cout << "Dog destructor called" << std::endl;
}

void Dog::bark(void) const
{
	std::cout << "Dog is barking" << std::endl;
}