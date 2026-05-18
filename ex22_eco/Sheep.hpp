#ifndef SHEEP_HPP
#define SHEEP_HPP

#include <iostream>
#include <string>
#include "Entity.hpp"

class Sheep : public Entity
{
private:
	/* data */
public:
	Sheep(/* args */);
	~Sheep();

	void Move();
};

#endif