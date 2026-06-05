#include <iostream>
#include <string>
#include <ctime>   // Required for time()
#include <list>

#include "Entity.hpp"
#include "Sheep.hpp"
#include "Wolf.hpp"
#include "World.hpp"


int main() {
	std::srand(static_cast<unsigned int>(std::time(nullptr)));

	World grid(10);

	grid.addEntity(new Sheep(0, 0));
	grid.addEntity(new Sheep(1, 0));
	grid.addEntity(new Wolf(2, 0));
	grid.addEntity(new Wolf(3, 0));

	grid.newTurn();
}
