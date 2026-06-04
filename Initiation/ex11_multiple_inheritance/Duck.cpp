#include "Duck.hpp"
#include <iostream>


Duck::Duck(void)
{
	std::cout << "Duck constructor called" << std::endl;
}

Duck::~Duck(void)
{
	std::cout << "Duck destructor called" << std::endl;
}

