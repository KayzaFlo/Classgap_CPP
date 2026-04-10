#include "Swimmer.hpp"
#include <iostream>

Swimmer::Swimmer(void) : _has_fins(false)
{
	std::cout << "Swimmer constructor called" << std::endl;
}

Swimmer::~Swimmer(void)
{
	std::cout << "Swimmer destructor called" << std::endl;
}

void Swimmer::swim(void) const
{
	std::cout << "Something is swimming" << std::endl;
}

void Swimmer::move(void) const
{
	std::cout << "Swimmer is moving" << std::endl;
}