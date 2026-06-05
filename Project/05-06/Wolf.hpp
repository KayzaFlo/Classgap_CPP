#ifndef WOLF_HPP
#define WOLF_HPP

#include <iostream>
#include <string>
#include "Entity.hpp"

class Wolf : public Entity
{
	private:
		int health;
		int hunger;

	public:
		Wolf(int x, int y);
		~Wolf();
		void ExecuteTurn(World* grid);
};

#endif