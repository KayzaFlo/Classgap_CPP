#include <iostream>
#include <string>
#include <ctime>   // Required for time()
#include <list>

#include "Entity.hpp"
#include "Sheep.hpp"
#include "Wolf.hpp"
#include "Grid.hpp"


int main() {
	std::srand(static_cast<unsigned int>(std::time(nullptr)));

	Grid grid(10);

	grid.addEntity(new Sheep("Sheep1", 0, 0, &grid));
	grid.addEntity(new Sheep("Sheep2", 1, 0, &grid));
	grid.addEntity(new Wolf("Wolf1", 2, 0, &grid));
	grid.addEntity(new Wolf("Wolf2", 3, 0, &grid));

	grid.newTurn();
}
