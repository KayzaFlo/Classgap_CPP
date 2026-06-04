#include "Sheep.hpp"

Sheep::Sheep(int x, int y, Grid* grid) : Entity(x, y, grid) {}

Sheep::Sheep(std::string name, int x, int y, Grid* grid) : Entity(name, x, y, grid) {}

Sheep::~Sheep(){}

void Sheep::Move() {
	// Move
	// Try Eat
	// age up
}


void Sheep::Move() {
	int dx = (rand() % 3) - 1; // Donne -1, 0, ou 1
    int dy = (rand() % 3) - 1; // Donne -1, 0, ou 1

    int nouveauX = getX() + dx;
    int nouveauY = getY() + dy;

    if (nouveauX >= 0 && nouveauX < grid->getMaxLignes() && nouveauY >= 0 && nouveauY < grid->getMaxColonnes()) {
        setPos(nouveauX, nouveauY);
    }

	std::cout << name << " position: (" << getX() << ", " << getY() << ")" << std::endl;
}