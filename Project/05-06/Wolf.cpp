#include "Wolf.hpp"

Wolf::Wolf(int x, int y) : Entity(x, y, EntityType::Wolf), health(100), hunger(100) {}

Wolf::~Wolf(){}

void Wolf::ExecuteTurn(World* grid) {

	health--;
	hunger--;
	// TRY TO EAT
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