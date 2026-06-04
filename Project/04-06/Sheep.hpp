#ifndef SHEEP_HPP
#define SHEEP_HPP

#include <iostream>
#include <string>
#include "Entity.hpp"

class Sheep : public Entity
{

	public:
		Sheep(int x, int y, Grid* grid);
		Sheep(std::string name, int x, int y, Grid* grid);
		~Sheep();

		void Move();
};	

#endif