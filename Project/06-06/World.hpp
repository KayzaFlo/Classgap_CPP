#ifndef WORLD_HPP
#define WORLD_HPP

#include <list>

#include "Entity.hpp"

class Entity;

class World
{
private:
	const int maxLignes;
	const int maxColonnes;
	std::list<Entity*> entities;
	std::list<Entity*> entitiesToDelete;

public:
	World(/* args */);
	World(int size);
	~World();

	int getMaxLignes() const { return maxLignes; }
	int getMaxColonnes() const { return maxColonnes; }

	void addEntity(Entity* entity);

	void removeEntity(Entity* entity);

	Entity* getEntityAt(int x, int y);

	void newTurn();
};


#endif
