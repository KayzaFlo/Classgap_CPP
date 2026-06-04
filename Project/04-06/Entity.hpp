#ifndef ENTITY_HPP
#define ENTITY_HPP

#include <iostream>
#include <string>

#include "Grid.hpp"

class Entity
{
	protected:
		std::string name;
		int x;
		int y;
		Grid* grid;

	public:
		Entity();
		Entity(int x, int y, Grid* grid);
		Entity(std::string name, int x, int y, Grid* grid);
		~Entity();

		int getX() const;
		int getY() const;
		void setPos(int newX, int newY);

		virtual void Move() = 0;
};

#endif 