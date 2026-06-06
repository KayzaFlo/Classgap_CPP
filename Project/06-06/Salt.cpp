#include "Salt.hpp"

Salt::Salt(int x, int y) : Entity(x, y, EntityType::Salt) {}

Salt::~Salt(){}


void Salt::ExecuteTurn(World* grid) {
	// TRANSFORM INTO GRASS
	// warning ne pas transforme le tour ou il a ete cree
	(void)grid; // pour eviter le warning de variable non utilisee
	grid->addEntity(new Grass(getX(), getY()));
	
	std::cout << name << " position: (" << getX() << ", " << getY() << ")" << std::endl;\

	grid->removeEntity(this);
}