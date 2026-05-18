#ifndef ENTITY_HPP
#define ENTITY_HPP

#include <iostream>
#include <string>

class Entity
{
private:
	/* data */
public:
	Entity(/* args */);
	~Entity();

	virtual void Move() = 0;
};

#endif