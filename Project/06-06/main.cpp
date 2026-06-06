#include <iostream>
#include <string>
#include <ctime>   // Required for time()
#include <list>

#include "World.hpp"
#include "Entity.hpp"
#include "Sheep.hpp"
#include "Wolf.hpp"
#include "Salt.hpp"
#include "Grass.hpp"


int main() {
	std::srand(static_cast<unsigned int>(std::time(nullptr)));

	World grid(10);

	grid.addEntity(new Sheep(0, 0));
	grid.addEntity(new Sheep(1, 0));
	grid.addEntity(new Wolf(2, 0));
	grid.addEntity(new Wolf(3, 0));
	grid.addEntity(new Salt(0, 1));
	grid.addEntity(new Salt(1, 1));
	grid.addEntity(new Salt(4, 0));
	grid.addEntity(new Salt(4, 0));
	grid.addEntity(new Salt(4, 0));

	while (true) {
		std::cout << "Press Enter to proceed to the next turn..." << std::endl;
		std::cin.get(); // Wait for user input to proceed to the next turn
		grid.newTurn();
	}

}
