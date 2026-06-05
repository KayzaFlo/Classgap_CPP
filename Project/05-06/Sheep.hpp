#ifndef SHEEP_HPP
#define SHEEP_HPP

#include <iostream>
#include <string>
#include "Entity.hpp"

class Sheep : public Entity
{
	private:
		int health;
		int hunger;

	public:
		Sheep(int x, int y);
		~Sheep();

		void ExecuteTurn(World* grid);
};	

#endif