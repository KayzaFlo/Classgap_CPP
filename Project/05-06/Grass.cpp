#include "Grass.hpp"

Grass::Grass(int x, int y) : Entity(x, y, EntityType::Grass) {}

Grass::~Grass(){}


void Grass::ExecuteTurn(World* grid) {
	(void)grid; // pour eviter le warning de variable non utilisee
	std::cout << name << " position: (" << getX() << ", " << getY() << ")" << std::endl;
}