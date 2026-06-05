#ifndef Grass_HPP
#define Grass_HPP

#include <iostream>
#include <string>
#include "Entity.hpp"

class Grass : public Entity
{

	public:
		Grass(int x, int y);
		~Grass();

		void ExecuteTurn(World* grid);
};	

#endif