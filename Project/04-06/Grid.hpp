#ifndef GRID_HPP
#define GRID_HPP

#include <list>

#include "Wolf.hpp"
#include "Sheep.hpp"

class Grid
{
private:
	const int maxLignes;
	const int maxColonnes;
	std::list<Entity*> entities;

public:
	Grid(/* args */);
	Grid(int size) : maxLignes(size), maxColonnes(size) {};
	~Grid();

	int getMaxLignes() const { return maxLignes; }
	int getMaxColonnes() const { return maxColonnes; }

	void addEntity(Entity* entity) {
		entities.push_back(entity);
	}

	void newTurn();
};


#endif
