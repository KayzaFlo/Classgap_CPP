#include "Entity.hpp"
#include <cstdio>

int Entity::idCounter = 0;

Entity::Entity(/* args */) : type(EntityType::Null) {}

Entity::Entity(int x, int y, EntityType type) : type(type), x(x), y(y) {
	switch (type) {
		case EntityType::Grass:
			name = "Grass_" + std::to_string(idCounter++);
			break;
		case EntityType::Sheep:
			name = "Sheep_" + std::to_string(idCounter++);
			break;
		case EntityType::Wolf:
			name = "Wolf_" + std::to_string(idCounter++);
			break;
		case EntityType::Salt:
			name = "Salt_" + std::to_string(idCounter++);
			break;
		default:
			name = "Entity_" + std::to_string(idCounter++);
			break;
	}
};

Entity::~Entity(){}

void Entity::setPos(int newX, int newY) {
    x = newX;
    y = newY;
}

int Entity::getX() const {
	return x;
}

int Entity::getY() const {
	return y;
}

std::string Entity::getName() const {
	return name;
}