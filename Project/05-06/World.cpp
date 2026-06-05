#include "World.hpp"

World::World(/* args */) : maxLignes(1), maxColonnes(1)
{
}

World::World(int size) : maxLignes(size), maxColonnes(size) {} 

World::~World() {}


void World::addEntity(Entity* entity) {
	entities.push_back(entity);
}

void World::removeEntity(Entity* entity) {
	entities.remove(entity);
	delete entity;
}

void World::newTurn() {
	for (Entity* entity : entities) {
		entity->ExecuteTurn(this);
	}
}


Entity* World::getEntityAt(int x, int y) {
	for (Entity* entity : entities) {
		if (entity->getX() == x && entity->getY() == y) {
			return entity;
		}
	}
	return nullptr;
}