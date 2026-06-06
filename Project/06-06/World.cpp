#include "World.hpp"

World::World(/* args */) : maxLignes(1), maxColonnes(1) {}

World::World(int size) : maxLignes(size), maxColonnes(size) {} 

World::~World() {}

void World::addEntity(Entity* entity) {
	Entity* entityAlreadyHere = getEntityAt(entity->getX(), entity->getY());
	if (entityAlreadyHere) {
		std::cout << "Entity already at (" << entity->getX() << ", " << entity->getY() << "): " << entityAlreadyHere->getName() << std::endl;
		delete entity;
		return;
	}
	std::cout << entity->getName() << " : Entity added to the world." << std::endl;
	entities.push_back(entity);
}

void World::removeEntity(Entity* entity) {
	std::cout << entity->getName() << " : Entity ready for deletion." << std::endl;
	entitiesToDelete.push_back(entity);
}

void World::newTurn() {
	for (Entity* entity : entities) {
		if (entity->getIsAlive()) {
			entity->ExecuteTurn(this);
		}
	}
	for (Entity* entity : entitiesToDelete) {
		std::cout << entity->getName() << " : Entity removed from the world." << std::endl;
		entities.remove(entity);
		delete entity;
	}
	entitiesToDelete.clear();
}

Entity* World::getEntityAt(int x, int y) {
	for (Entity* entity : entities) {
		if (entity->getX() == x && entity->getY() == y) {
			return entity;
		}
	}
	return nullptr;
}
