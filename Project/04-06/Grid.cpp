#include "Grid.hpp"

Grid::Grid(/* args */) : maxLignes(1), maxColonnes(1)
{
}

Grid::Grid(int size) : maxLignes(size), maxColonnes(size) {} 

Grid::~Grid()
{
}

void Grid::newTurn() {
	for (int i = 0; i < entities.size(); ++i) {
		for (Entity* entity : entities) {
			entity->Move();
		}
	}
}