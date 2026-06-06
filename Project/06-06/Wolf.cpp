#include "Wolf.hpp"

Wolf::Wolf(int x, int y) : Entity(x, y, EntityType::Wolf), health(100), hunger(100) {}

Wolf::~Wolf(){}

void Wolf::ExecuteTurn(World* grid) {
	if (!isAlive) {
		return;
	}

	health--;
	hunger--;
	// TRY TO EAT
	// TRY TO MATE

	// MOVE
	int dx = (rand() % 3) - 1; // Donne -1, 0, ou 1
    int dy = (rand() % 3) - 1; // Donne -1, 0, ou 1

    int nouveauX = getX() + dx;
    int nouveauY = getY() + dy;

	
	// TRY TO EAT
	Entity* entity = grid->getEntityAt(nouveauX, nouveauY);
	std::cout << "Entity found: " << (entity ? entity->getName() : "None") << " at (" << nouveauX << ", " << nouveauY << ")" << std::endl;
	if (entity != nullptr) {
		if (entity->getType() == EntityType::Sheep) {
			hunger += 20;
			std::cout << name << " eats sheep at (" << nouveauX << ", " << nouveauY << ")" << std::endl;
			grid->removeEntity(entity);
		}
		else {
			std::cout << name << " cannot eat " << entity->getName() << std::endl;
			return; // Ne pas se déplacer si la case est occupée par une entité non comestible
		}
	}

    if (nouveauX >= 0 && nouveauX < grid->getMaxLignes() && nouveauY >= 0 && nouveauY < grid->getMaxColonnes()) {
        setPos(nouveauX, nouveauY);
    }

	std::cout << name << " position: (" << getX() << ", " << getY() << ")" << std::endl;
}