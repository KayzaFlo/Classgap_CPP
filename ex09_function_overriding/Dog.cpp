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
 
void Dog::speak(void) const
{
	std::cout << "Dog says: Woof!" << std::endl;
}