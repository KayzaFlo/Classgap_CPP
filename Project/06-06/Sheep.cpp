#include "Sheep.hpp"

Sheep::Sheep(int x, int y) : Entity(x, y, EntityType::Sheep), health(60), hunger(100) {}

Sheep::~Sheep(){}


void Sheep::ExecuteTurn(World* grid) {
	health--;
	hunger--;

	if (health <= 0 || hunger <= 0) {
		isAlive = false;
		std::cout << name << " has died." << std::endl;
		grid->removeEntity(this);
		return;
	}

	// TRY TO MATE
	Entity* entity1 = grid->getEntityAt(getX() - 1 , getY());
	Entity* entity2 = grid->getEntityAt(getX() - 1 , getY() -1 );
	Entity* entity3 = grid->getEntityAt(getX() , getY() -1 );
	/// ... ect
	// recuperer les 8 cases autour du mouton et verifier si il y a un autre mouton pour se reproduire
	// verifier que la case ou le nouveau mouton va naitre est libre
	// creer le nouveau mouton et l'ajouter au monde
	
	// MOVE
	int dx = (rand() % 3) - 1; // Donne -1, 0, ou 1
    int dy = (rand() % 3) - 1; // Donne -1, 0, ou 1
	
    int nouveauX = getX() + dx;
    int nouveauY = getY() + dy;


	// TRY TO EAT
	Entity* entity = grid->getEntityAt(nouveauX, nouveauY);
	std::cout << "Entity found: " << (entity ? entity->getName() : "None") << " at (" << nouveauX << ", " << nouveauY << ")" << std::endl;
	if (entity != nullptr) {
		if (entity->getType() == EntityType::Grass) {
			hunger += 20;
			std::cout << name << " eats grass at (" << nouveauX << ", " << nouveauY << ")" << std::endl;
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