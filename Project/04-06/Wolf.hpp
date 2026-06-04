#ifndef WOLF_HPP
#define WOLF_HPP

#include <iostream>
#include <string>
#include "Entity.hpp"

class Wolf : public Entity
{

	public:
		Wolf(int x, int y, Grid* grid);
		Wolf(std::string name, int x, int y, Grid* grid);
		~Wolf();
		 void Move();
};

#endif