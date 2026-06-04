#include "Wolf.hpp"

Wolf::Wolf(int x, int y, Grid* grid) : Entity(x, y, grid) {}

Wolf::Wolf(std::string name, int x, int y, Grid* grid) : Entity(name, x, y, grid) {}

Wolf::~Wolf(){}

void Wolf::Move() {
	int dx = (rand() % 3) - 1; // Donne -1, 0, ou 1
    int dy = (rand() % 3) - 1; // Donne -1, 0, ou 1

    int nouveauX = getX() + dx;
    int nouveauY = getY() + dy;

    if (nouveauX >= 0 && nouveauX < grid->getMaxLignes() && nouveauY >= 0 && nouveauY < grid->getMaxColonnes()) {
        setPos(nouveauX, nouveauY);
    }

	std::cout << name << " position: (" << getX() << ", " << getY() << ")" << std::endl;
}