#include "Walker.hpp"
#include <iostream>

Walker::Walker(void) : _legs(0)
{
	std::cout << "Walker constructor called" << std::endl;
}

Walker::~Walker(void)
{
	std::cout << "Walker destructor called" << std::endl;
}

void Walker::walk(void) const
{
	std::cout << "Something walks with " << _legs << " legs" << std::endl;
}
