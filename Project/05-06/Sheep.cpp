#include "Sheep.hpp"

Sheep::Sheep(int x, int y) : Entity(x, y, EntityType::Sheep), health(60), hunger(100) {}

Sheep::~Sheep(){}


void Sheep::ExecuteTurn(World* grid) {

	health--;
	hunger--;
	// TRY TO EAT
	Entity* grass = grid->getEntityAt(getX(), getY());
	if (grass != nullptr && grass->getType() == EntityType::Grass) {
		hunger += 20;
		std::cout << name << " eats grass at (" << getX() << ", " << getY() << ")" << std::endl;
		grid->removeEntity(grass);
	}
	// TRY TO MATE

	// MOVE
	int dx = (rand() % 3) - 1; // Donne -1, 0, ou 1
    int dy = (rand() % 3) - 1; // Donne -1, 0, ou 1

    int nouveauX = getX() + dx;
    int nouveauY = getY() + dy;

    if (nouveauX >= 0 && nouveauX < grid->getMaxLignes() && nouveauY >= 0 && nouveauY < grid->getMaxColonnes()) {
        setPos(nouveauX, nouveauY);
    }

	std::cout << name << " position: (" << getX() << ", " << getY() << ")" << std::endl;
}