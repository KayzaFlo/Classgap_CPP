#include "Entity.hpp"

Entity::Entity(/* args */)
{
}

Entity::Entity(int x, int y, Grid* grid) : x(x), y(y), grid(grid) {}

Entity::Entity(std::string name, int x, int y, Grid* grid) : name(name), x(x), y(y), grid(grid) {}

Entity::~Entity(){}

void Entity::setPos(int newX, int newY) {
    x = newX;
    y = newY;
}

// void Entity::Move() {
// }

int Entity::getX() const {
	return x;
}

int Entity::getY() const {
	return y;
}